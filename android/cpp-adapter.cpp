#include <jni.h>
#include "beletsky-react-native-worklet.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_beletsky_reactnativeworklet_ReactNativeWorkletModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return beletsky_reactnativeworklet::multiply(a, b);
}
