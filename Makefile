win:
	gcc -std=c99 -Wall -Wpedantic 123.c utils.c functions.c -o gamewin.exe
	./gamewin.exe
linux:
	gcc 123.c utils.c functions.c -o gamelinux 
	./gamelinux
installemsdk: 
	cd ../emsdk && emsdk_env.bat && cd ../project && emcc 123.c utils.c web.c -s NO_EXIT_RUNTIME=0 -o gameweb.html -sSINGLE_FILE -sASYNCIFY