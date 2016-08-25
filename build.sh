# Build at build folder
# To clean the build files, execute "rm -rf ./build" 

# make build folder if build folder doesn't exist
if [ ! -d "./build" ]; then
    mkdir ./build
fi

# Move to build folder and build files ( cmake, make)
cd ./build
cmake ..
make

# return to the main folder
cd ..
