package jniTravel;

public class JNITravel {
	
	static {
		System.loadLibrary("native");
	}
	
	public static void main(String[] args) {
		new JNITravel().sayHello();
	}
	
	private native void sayHello();
}
