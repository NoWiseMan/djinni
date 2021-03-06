// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

#include "NativeConstants.hpp"  // my header
#include "HI32.hpp"
#include "HString.hpp"

namespace djinni_generated {

jobject NativeConstants::toJava(JNIEnv* jniEnv, Constants c) {
    jint j_some_integer = ::djinni::HI32::Unboxed::toJava(jniEnv, c.some_integer);
    djinni::LocalRef<jstring> j_some_string(jniEnv, ::djinni::HString::toJava(jniEnv, c.some_string));
    const auto & data = djinni::JniClass<::djinni_generated::NativeConstants>::get();
    jobject r = jniEnv->NewObject(data.clazz.get(), data.jconstructor, j_some_integer, j_some_string.get());
    djinni::jniExceptionCheck(jniEnv);
    return r;
}

Constants NativeConstants::fromJava(JNIEnv* jniEnv, jobject j) {
    assert(j != nullptr);
    const auto & data = djinni::JniClass<::djinni_generated::NativeConstants>::get();
    return Constants(
        ::djinni::HI32::Unboxed::fromJava(jniEnv, jniEnv->GetIntField(j, data.field_mSomeInteger)),
        ::djinni::HString::fromJava(jniEnv, djinni::LocalRef<jstring>(jniEnv, static_cast<jstring>(jniEnv->GetObjectField(j, data.field_mSomeString))).get()));
}

}  // namespace djinni_generated
