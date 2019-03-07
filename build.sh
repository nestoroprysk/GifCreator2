rm -rf Build
rm -rf JsonParser2
rm -rf gif-h
git clone https://github.com/nestoroprysk/JsonParser2.git
git clone https://github.com/ginsweater/gif-h.git
cd JsonParser2
sh build.sh
cd Build
make
cd ..
cd ..
mkdir Build
cd Build
cmake ..
