A Hello World JNI project.

Steps:
1. Create a Java Class to call JNI function

2. Generate .h file corresponding to Java class
    $ javac -h jni src/jniTravel/JNITravel.java

3. Implement method in cpp

4. Compile C++ code
    $ g++ -c -fPIC -I${JAVA_HOME}/include -I${JAVA_HOME}/include/darwin jni/jniTravel_JNITravel.cpp -o jni/jniTravel_JNITravel.o

5. Link object file
    $ g++ -dynamiclib -o libnative.dylib jni/jniTravel_JNITravel.o -lc

6. Run java code
    $ java -cp . -Djava.library.path=./../. jniTravel/JNITravel
