//
// Created by 李利椿 on 2019-11-27.
//

#include "com_feb_ndkday1_SignTools.h"
#define LOG_TAG "C_TAG"

extern "C" JNIEXPORT jstring JNICALL Java_com_feb_ndkday1_SignTools_getSign
        (JNIEnv *env, jclass j_cls) {
    return (env)->NewStringUTF("sign key:xxxxxx");
}

extern "C"
JNIEXPORT void JNICALL
Java_com_feb_ndkday1_SignTools_changeName(JNIEnv *env, jobject obj) {
    jclass j_class = env->GetObjectClass(obj);
    jfieldID j_field_id = env->GetFieldID(j_class, "name", "Ljava/lang/String;");
    jstring j_name = env->NewStringUTF("JACK");
    env->SetObjectField(obj, j_field_id, j_name);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_feb_ndkday1_SignTools_add(JNIEnv *env, jobject thiz) {
    jclass j_clz = env->GetObjectClass(thiz);
    jmethodID j_method_id = env->GetMethodID(j_clz, "addNum", "(II)I");
    jint j_int = env->CallIntMethod(thiz, j_method_id, 2, 3);
    __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, "java addNum method: %d", j_int);
}

