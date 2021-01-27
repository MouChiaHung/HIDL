# HIDL on Android P

BSP download
```
sudo apt-get install git-core gnupg flex bison build-essential zip curl zlib1g-dev gcc-multilib g++-multilib libc6-dev-i386 lib32ncurses5-dev x11proto-core-dev libx11-dev lib32z1-dev libgl1-mesa-dev libxml2-utils xsltproc unzip fontconfig
sudo apt-get install ca-certificates
sudo update-ca-certificates --fresh
sudo update-alternatives --install /bin/python python /usr/bin/python3 1
sudo update-alternatives --install /bin/python python /usr/bin/python3.8 2
sudo update-alternatives --config python //choose 2
mkdir ~/bin
PATH=~/bin:$PATH
curl -k https://storage.googleapis.com/git-repo-downloads/repo-1 > ~/bin/repo
chmod a+x repo 
git config --global user.name "xxx"
git config --global user.name "xxx@xxx.com"
mkdir ./workspace
cd workspace
which repo
wget https://releases.linaro.org/archive/13.11/components/toolchain/binaries/gcc-linaro-aarch64-none-elf-4.8-2013.11_linux.tar.bz2
wget https://developer.arm.com/-/media/Files/downloads/gnu-rm/6-2017q2/gcc-arm-none-eabi-6-2017-q2-update-linux.tar.bz2
sudo mkdir /opt/toolchains
sudo tar -xjf gcc-linaro-aarch64-none-elf-4.8-2013.11_linux.tar.bz2 -C /opt/toolchains
sudo tar -xjf gcc-arm-none-eabi-6-2017-q2-update-linux.tar.bz2 -C /opt/toolchains
wget https://releases.linaro.org/components/toolchain/binaries/6.3-2017.02/arm-linux-gnueabihf/gcc-linaro-6.3.1-2017.02-x86_64_arm-linux-gnueabihf.tar.xz
wget https://releases.linaro.org/components/toolchain/binaries/6.3-2017.02/aarch64-linux-gnu/gcc-linaro-6.3.1-2017.02-x86_64_aarch64-linux-gnu.tar.xz
sudo tar xvJf gcc-linaro-6.3.1-2017.02-x86_64_arm-linux-gnueabihf.tar.xz -C /opt/toolchains
sudo tar xvJf gcc-linaro-6.3.1-2017.02-x86_64_aarch64-linux-gnu.tar.xz -C /opt/toolchains
cd workspace/
ls -al
mkdir vim3
cd vim3
wget https://github.com/git-lfs/git-lfs/releases/download/v2.3.4/git-lfs-linux-amd64-2.3.4.tar.gz
tar xvzf git-lfs-linux-amd64-2.3.4.tar.gz
cd git-lfs-2.3.4
git init
git config http.sslVerify false
sudo ./install.sh
cd ..
mkdir bsp
cd bsp
export PYTHONHTTPSVERIFY=0
repo init -u https://github.com/khadas/android_manifest.git -b khadas-vims-pie
repo sync -j4
cd bsp/
cd bootloader/uboot/
./mk kvim3 
cd ..
cd ..
cp bootloader/uboot/build/tools/mkimage ~/bin/mkimage
chmod +x ~/bin/mkimage
cd ..
source build/envsetup.sh 
lunch kvim3-userdebug
make -j2 otapackage
```


Reference command
```
sudo apt-get install openjdk-8-jdk android-tools-adb bc bison build-essential curl flex g+±multilib gcc-multilib gnupg gperf imagemagick lib32ncurses5-dev lib32readline-dev lib32z1-dev liblz4-tool libncurses5-dev libsdl1.2-dev libssl-dev libwxgtk3.0-gtk3-dev libxml2 libxml2-utils lzop pngcrush rsync schedtool squashfs-tools xsltproc yasm zip zlib1g-dev git-core python3.8 libncurses5
```
It takes 259 GB.

Update api
![image](https://github.com/MouChiaHung/HIDL/blob/master/make_update_api.JPG)

Build HIDL using mmm
![image](https://github.com/MouChiaHung/HIDL/blob/master/mmm_hidl_ok.JPG)

See what we got in /out
![image](https://github.com/MouChiaHung/HIDL/blob/master/out.JPG)
