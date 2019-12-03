package com.feb.ndkday1;

/**
 * @author lilichun
 * createDate: 2019-11-27
 */
public class SignTools {

    public String name = "张三";

    static {
        System.loadLibrary("tools-jni");
    }

    public native static String getSign();

    public native void changeName();

    public native void add();

    public int addNum(int a, int b) {
        return a + b;
    }
}
