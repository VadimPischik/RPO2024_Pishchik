#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_rpo2024_1pishchik_MainActivity_stringFromJNI(JNIEnv* env, jobject /* this */){
                    std::string hello = "Hello from C++1";
                    return env->NewStringUTF(hello.c_str());
}