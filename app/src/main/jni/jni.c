//
// Created by fenghe on 2017/6/13.
//

#include "com_lanmeng_fenghe_jnindk_JniUtils.h"

JNIEXPORT jstring JNICALL Java_com_lanmeng_fenghe_jnindk_JniUtils_getStringFormC(JNIEnv *env, jobject obj) {
    char *str="String from native C";
    return (*env)->NewStringUTF(env, str);
}