LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_LDLIBS    := -lm -llog

LOCAL_MODULE    := tools-jni

LOCAL_SRC_FILES := Simple.cpp

include $(BUILD_SHARED_LIBRARY)