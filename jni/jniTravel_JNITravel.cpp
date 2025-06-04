#include "jniTravel_JNITravel.h"

#include <iostream>

JNIEXPORT void JNICALL Java_jniTravel_JNITravel_sayHello
  (JNIEnv* env, jobject thisObject) {
    std::cout << "Hello from C++ !!" << std::endl;
}