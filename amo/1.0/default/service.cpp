#include <android-base/logging.h>
#include <hidl/HidlTransportSupport.h>
#include <android/hardware/amo/1.0/IAmo.h>

#undef LOG_TAG
#define LOG_TAG "android.hardware.amo@1.0-service"

#include <hidl/LegacySupport.h>
#include "Amo.h"
using android::hardware::configureRpcThreadpool;
using android::hardware::joinRpcThreadpool;
using android::hardware::amo::V1_0::implementation::Amo;

int main(){
    configureRpcThreadpool(4, true);
    Amo amo;
    auto status = amo.registerAsService();
    if(status != android::OK){
        ALOGE("register As Service failed");
        return -1;
    }
    joinRpcThreadpool();
}
