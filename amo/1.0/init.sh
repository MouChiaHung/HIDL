echo "start to run hidl-gen for amo"
PACKAGE=android.hardware.amo@1.0
echo "[PACKAGE]:"+$PACKAGE
hidl-gen -Landroidbp -randroid.hardware:hardware/interfaces $PACKAGE
echo "end to run hidl-gen for amo"
