cd build
call conan install .. -s build_type=Debug -s compiler="Visual Studio" -s compiler.runtime=MDd --build=missing
call cmake .. -G "Visual Studio 17 2022"
call cmake --build . --config Debug 
