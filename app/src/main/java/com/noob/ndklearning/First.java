package com.noob.ndklearning;

/**
 * Created by xiaoqi on 2018/3/10
 */

public class First {

	static {
		System.loadLibrary("first");
	}

	public static native int plus(int a, int b);
}
