
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include <jni.h>
#include <android/log.h>

#include "com_ssb_droidsound_plugins_HTPlugin.h"


#include "../common/Misc.h"

#include "ht/misc.h"



JNIEXPORT jlong JNICALL Java_com_ssb_droidsound_plugins_HTPlugin_N_1load(JNIEnv *env, jobject obj, jstring fname)
{
	int version;
    	
	sdsf_loader_state state;
	memset( &state, 0, sizeof(state) ); 

	sdsf_loader_state * sdsfinfo = (sdsf_loader_state*)malloc(sizeof(sdsf_loader_state));

	int init_result = sega_init();
	
	const char *filename = env->GetStringUTFChars(fname, NULL);
	
	char temp[1024];
	strcpy(temp, filename);
	
	version = psf_load(temp, &psf_file_system,0,0,0,0,0);

	int load_result = psf_load( temp, &psf_file_system, version, sdsf_loader, &state, 0, 0 );
	if (load_result < 0)
	{
		return 0;
	}

	void * sega_state = malloc( sega_get_state_size( version - 0x10 ) ); 
	if (!sega_state)
	{
		return 0;
	}

	sega_clear_state( sega_state, version - 0x10);

    sega_enable_dry( sega_state, 1 );
    sega_enable_dsp( sega_state, 1 );
	
	int dynarec = 1;
	
	sega_enable_dsp_dynarec( sega_state, 1 );
	
	void *yam = 0;
    if ( dynarec )
    {
		
        if ( version == 0x12 )
        {
            void * dcsound = sega_get_dcsound_state( sega_state );
            yam = dcsound_get_yam_state( dcsound );
        }
        else
        {
            void * satsound = sega_get_satsound_state( sega_state );
            yam = satsound_get_yam_state( satsound );
        }
        if ( yam ) yam_prepare_dynacode( yam );
    }

    uint32_t start  = *(uint32_t*) state.data;
    uint32_t length = state.data_size;
    const uint32_t max_length = ( version == 0x12 ) ? 0x800000 : 0x80000;
    if ( ( start + ( length - 4 ) ) > max_length )
	{
        length = max_length - start + 4;
    }
    	
	sega_upload_program( sega_state, state.data, length );
	free( state.data);
	
	sdsfinfo->emu = sega_state;
	sdsfinfo->yam = yam;
	sdsfinfo->version = version;

	return (long)sdsfinfo;
}

JNIEXPORT void JNICALL Java_com_ssb_droidsound_plugins_HTPlugin_N_1unload(JNIEnv *env, jobject obj, jlong song)
{
	sdsf_loader_state *state = (sdsf_loader_state*) song;
	if ( state->yam != 0 )
	{
		yam_unprepare_dynacode( state->yam );
	} 
	
	free(state->emu);
	
	return;
	
}

JNIEXPORT jint JNICALL Java_com_ssb_droidsound_plugins_HTPlugin_N_1getSoundData(JNIEnv *env, jobject obj, jlong song, jshortArray sArray, jint size)
{

	sdsf_loader_state *state = (sdsf_loader_state*)song;
	
	int ret = 0;			
	
	uint32_t samples_cnt = size / 2; // samples_cnt in frames, 1 frame == 2 samples == 4 bytes
	
	jshort *dest = env->GetShortArrayElements(sArray, NULL);
	
	ret = sega_execute( (void*)state->emu, 0x7fffffff, dest, &samples_cnt ); 		
			
	env->ReleaseShortArrayElements(sArray, dest, 0);
	if (samples_cnt < (size / 2))
	{
		size = samples_cnt * 2;
	}
		
	return size;
}


JNIEXPORT jstring JNICALL Java_com_ssb_droidsound_plugins_HTPlugin_N_1getStringInfo(JNIEnv *env, jobject obj, jlong song, jint what)
 {
	return NewString(env, "Hello Highly Theo.");
}

JNIEXPORT jint JNICALL Java_com_ssb_droidsound_plugins_HTPlugin_N_1getIntInfo(JNIEnv *env, jobject obj, jlong song, jint what)
{
	return 0;
}
