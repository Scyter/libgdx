/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_badlogic_gdx_audio_io_VorbisDecoder */

#ifndef _Included_com_badlogic_gdx_audio_io_VorbisDecoder
#define _Included_com_badlogic_gdx_audio_io_VorbisDecoder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_badlogic_gdx_audio_io_VorbisDecoder
 * Method:    openFile
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_badlogic_gdx_audio_io_VorbisDecoder_openFile
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_badlogic_gdx_audio_io_VorbisDecoder
 * Method:    getNumChannels
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_audio_io_VorbisDecoder_getNumChannels
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_badlogic_gdx_audio_io_VorbisDecoder
 * Method:    getRate
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_audio_io_VorbisDecoder_getRate
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_badlogic_gdx_audio_io_VorbisDecoder
 * Method:    getLength
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_badlogic_gdx_audio_io_VorbisDecoder_getLength
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_badlogic_gdx_audio_io_VorbisDecoder
 * Method:    readSamples
 * Signature: (JLjava/nio/ShortBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_audio_io_VorbisDecoder_readSamples
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     com_badlogic_gdx_audio_io_VorbisDecoder
 * Method:    skipSamples
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_audio_io_VorbisDecoder_skipSamples
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_badlogic_gdx_audio_io_VorbisDecoder
 * Method:    closeFile
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_audio_io_VorbisDecoder_closeFile
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
