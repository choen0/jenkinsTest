call python -m venv venv --prompt jenkTest
cd venv/scripts
call activate.bat
cd ../..
call pip install conan
call pip install pip-tools
