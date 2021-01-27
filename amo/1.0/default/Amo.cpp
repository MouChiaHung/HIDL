#include "Amo.h"

namespace android {
namespace hardware {
namespace amo {
namespace V1_0 {
namespace implementation {

// Methods from ::android::hardware::amo::V1_0::IAmo follow.
Return<int32_t> Amo::init(int32_t level) {
    // TODO implement
    UNUSED(level);
    return int32_t {};
}

Return<void> Amo::getProperty(const hidl_string& key, getProperty_cb _hidl_cb) {
    // TODO implement
    UNUSED(key);
	  UNUSED(_hidl_cb);
    return Void();
}


// Methods from ::android::hidl::base::V1_0::IBase follow.

//IAmo* HIDL_FETCH_IAmo(const char* /* name */) {
    //return new Amo();
//}
//
}  // namespace implementation
}  // namespace V1_0
}  // namespace amo
}  // namespace hardware
}  // namespace android
