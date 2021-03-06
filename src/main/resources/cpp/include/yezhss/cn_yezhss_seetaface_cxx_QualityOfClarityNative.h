/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cn_yezhss_seetaface_cxx_QualityOfClarityNative */

#ifndef _Included_cn_yezhss_seetaface_cxx_QualityOfClarityNative
#define _Included_cn_yezhss_seetaface_cxx_QualityOfClarityNative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cn_yezhss_seetaface_cxx_QualityOfClarityNative
 * Method:    init
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_cn_yezhss_seetaface_cxx_QualityOfClarityNative_init__
  (JNIEnv *, jclass);

/*
 * Class:     cn_yezhss_seetaface_cxx_QualityOfClarityNative
 * Method:    init
 * Signature: (FF)J
 */
JNIEXPORT jlong JNICALL Java_cn_yezhss_seetaface_cxx_QualityOfClarityNative_init__FF
  (JNIEnv *, jclass, jfloat, jfloat);

/*
 * Class:     cn_yezhss_seetaface_cxx_QualityOfClarityNative
 * Method:    check
 * Signature: (JLcn/yezhss/seetaface/po/SeetaImageData;Lcn/yezhss/seetaface/po/SeetaRect;[Lcn/yezhss/seetaface/po/SeetaPointF;)Lcn/yezhss/seetaface/po/QualityResult;
 */
JNIEXPORT jobject JNICALL Java_cn_yezhss_seetaface_cxx_QualityOfClarityNative_check
  (JNIEnv *, jclass, jlong, jobject, jobject, jobjectArray);

/*
 * Class:     cn_yezhss_seetaface_cxx_QualityOfClarityNative
 * Method:    close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_cn_yezhss_seetaface_cxx_QualityOfClarityNative_close
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
