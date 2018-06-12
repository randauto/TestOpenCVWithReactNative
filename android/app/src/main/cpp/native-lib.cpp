#include <jni.h>
#include <string>

#include <iostream>
#include <stdio.h>
#include <opencv2/core.hpp>
#include <opencv2/features2d.hpp>
#include <vector>
#include <opencv2/imgproc.hpp>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_testopencv_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from Tuan ICT";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT void
JNICALL Java_com_testopencv_MainActivity_findFeatures(JNIEnv*, jobject, jlong addrGray, jlong addrRgba) {

}
