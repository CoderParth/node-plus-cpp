#include <node.h>

namespace demo
{
    using v8::FunctionCallbackInfo;
    using v8::Isolate;
    using v8::Local;
    using v8::Object;
    using v8::String;
    using v8::Value;

    void SayHello(const FunctionCallbackInfo<Value> &args)
    {
        Isolate *isolate = args.GetIsolate();
        args.GetReturnValue().Set(String::NewFromUtf8(isolate, "Hello World").ToLocalChecked());
    }

    void Init(Local<Object> exports)
    {
        NODE_SET_METHOD(exports, "hello", SayHello);
    }

    NODE_MODULE(NODE_GYP_MODULE_NAME, Init)
}
