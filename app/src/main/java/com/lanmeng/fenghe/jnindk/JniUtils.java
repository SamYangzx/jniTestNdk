package com.lanmeng.fenghe.jnindk;

/**
 * Created by fenghe on 2017/6/13.
 */

public class JniUtils {
    static {
        System.loadLibrary("NdkJniDemo");//之前在build.gradle里面设置的so名字，必须一致（步骤9）
    }

    public static native String getStringFormC();

}
