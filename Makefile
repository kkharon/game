project:
	gcc 123.c -Wall -pedantic -o a.exe
project : 123.c
	gcc -c 123.c -o 123.o
installemsdk: 
	cd .. && git clone https://github.com/emscripten-core/emsdk.git
	cd ../emsdk && emsdk install latest && emsdk activate latest && emsdk_env.bat && emcc 123.c -s NO_EXIT_RUNTIME=0 -o output.html
	npm i http-server -g
runserver:
	cd ../emsdk && http-server