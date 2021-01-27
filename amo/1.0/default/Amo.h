#ifndef ANDROID_HARDWARE_AMO_V1_0_AMO_H
#define ANDROID_HARDWARE_AMO_V1_0_AMO_H

#include <android/hardware/amo/1.0/IAmo.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace android {
namespace hardware {
namespace amo {
namespace V1_0 {
namespace implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

#define UNUSED(x) (void)(x)

struct Amo : public IAmo {
    // Methods from ::android::hardware::amo::V1_0::IAmo follow.
    Return<int32_t> init(int32_t level) override;
    Return<void> getProperty(const hidl_string& key, getProperty_cb _hidl_cb) override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.

};

// FIXME: most likely delete, this is only for passthrough implementations
// extern "C" IAmo* HIDL_FETCH_IAmo(const char* name);

}  // namespace implementation
}  // namespace V1_0
}  // namespace amo
}  // namespace hardware
}  // namespace android

#endif  // ANDROID_HARDWARE_AMO_V1_0_AMO_H
