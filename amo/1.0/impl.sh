echo "start to run hidl-gen"
PACKAGE=android.hardware.amo@1.0
LOC=$ANDROID_BUILD_TOP/hardware/interfaces/amo/1.0/default/
echo "[PACKAGE]:"+$PACKAGE
echo "[LOC]:"+$LOC
hidl-gen -o $LOC -Lc++-impl -randroid.hardware:hardware/interfaces -randroid.hidl:system/libhidl/transport $PACKAGE
hidl-gen -o $LOC -Landroidbp-impl -randroid.hardware:hardware/interfaces -randroid.hidl:system/libhidl/transport $PACKAGE
echo "end to run hidl-gen"