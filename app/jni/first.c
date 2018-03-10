//
// Created by Administrator on 2018/3/10.
//
#include <jni.h>
#include "first.h"


int Java_com_noob_ndklearning_First_plus(JNIEnv *env, jobject obj, int a, int b){
    return a + b;
}