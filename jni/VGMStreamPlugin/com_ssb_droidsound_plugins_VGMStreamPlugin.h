/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ssb_droidsound_plugins_VGMStreamPlugin */

#ifndef _Included_com_ssb_droidsound_plugins_VGMStreamPlugin
#define _Included_com_ssb_droidsound_plugins_VGMStreamPlugin
#ifdef __cplusplus
extern "C" {
#endif
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_TITLE
#define com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_TITLE 0L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_AUTHOR
#define com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_AUTHOR 1L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_LENGTH
#define com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_LENGTH 2L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_TYPE
#define com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_TYPE 3L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_COPYRIGHT
#define com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_COPYRIGHT 4L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_GAME
#define com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_GAME 5L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_SUBTUNE_COUNT
#define com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_SUBTUNE_COUNT 6L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_STARTTUNE
#define com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_STARTTUNE 7L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_SUBTUNE_TITLE
#define com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_SUBTUNE_TITLE 8L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_SUBTUNE_AUTHOR
#define com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_SUBTUNE_AUTHOR 9L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_SUBTUNE_NO
#define com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_SUBTUNE_NO 10L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_FREQUENCY
#define com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_FREQUENCY 11L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_CHANNELS
#define com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_CHANNELS 12L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_YEAR
#define com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_YEAR 13L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_DETAILS_CHANGED
#define com_ssb_droidsound_plugins_VGMStreamPlugin_INFO_DETAILS_CHANGED 15L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_OPT_FILTER
#define com_ssb_droidsound_plugins_VGMStreamPlugin_OPT_FILTER 1L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_OPT_RESAMPLING
#define com_ssb_droidsound_plugins_VGMStreamPlugin_OPT_RESAMPLING 2L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_OPT_NTSC
#define com_ssb_droidsound_plugins_VGMStreamPlugin_OPT_NTSC 3L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_OPT_SPEED_HACK
#define com_ssb_droidsound_plugins_VGMStreamPlugin_OPT_SPEED_HACK 4L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_OPT_PANNING
#define com_ssb_droidsound_plugins_VGMStreamPlugin_OPT_PANNING 5L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_OPT_FILTER_BIAS
#define com_ssb_droidsound_plugins_VGMStreamPlugin_OPT_FILTER_BIAS 6L
#undef com_ssb_droidsound_plugins_VGMStreamPlugin_OPT_SID_MODEL
#define com_ssb_droidsound_plugins_VGMStreamPlugin_OPT_SID_MODEL 7L
/*
 * Class:     com_ssb_droidsound_plugins_VGMStreamPlugin
 * Method:    N_loadFile
 * Signature: (Ljava/lang/String;Z)J
 */
JNIEXPORT jlong JNICALL Java_com_ssb_droidsound_plugins_VGMStreamPlugin_N_1loadFile
  (JNIEnv *, jobject, jstring, jboolean);

/*
 * Class:     com_ssb_droidsound_plugins_VGMStreamPlugin
 * Method:    N_unload
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_ssb_droidsound_plugins_VGMStreamPlugin_N_1unload
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ssb_droidsound_plugins_VGMStreamPlugin
 * Method:    N_getSoundData
 * Signature: (J[SI)I
 */
JNIEXPORT jint JNICALL Java_com_ssb_droidsound_plugins_VGMStreamPlugin_N_1getSoundData
  (JNIEnv *, jobject, jlong, jshortArray, jint);

/*
 * Class:     com_ssb_droidsound_plugins_VGMStreamPlugin
 * Method:    N_getIntInfo
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ssb_droidsound_plugins_VGMStreamPlugin_N_1getIntInfo
  (JNIEnv *, jobject, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif
