# About
This project is reconstruction of CLOSE ENCOUNTERS game from BASIC to C.

## Working on Linux
To run game on Linux you need to download gcc compiler:
- `sudo apt update`
- `sudo apt install build-essential`

Then compile file with source code:
- `gcc 123.c -o game` where `game` is name of compiled file

Then run:
- `./game` to launch the game.

![Linux](https://ibb.co/YQdyFBn)
------------------

## Working on Windows
To run game on Windows you need to install MinGW-w64, then create file `make.bat` in directory where your source code is and write strings listed below:
- `PATH=path to mingw64/bin`
- `gcc 123.c -Wall -pedantic -o a.exe`

Then for example in VS Code open terminal and type:
- `./make.bat`

Then run `a.exe` application.

![Windows](https://ibb.co/5WL2v27)
------------------

## Working on WEB
To run game on WEB you need to convert C code to JS using Emscripten. First of all install it, it's better to do it on Linux:
- `git clone https://github.com/emscripten-core/emsdk.git`
- `cd emsdk`
- `./emsdk install latest`
- `./emsdk activate latest`
- `source ./emsdk_env.sh` - to activate PATH and other environment variables in the current terminal

Then run:
- `emcc 123.c -s NO_EXIT_RUNTIME=0 -o output.html`

This command will generate html page with JS script. It's important to place all generated files to folder on your runnung LOCAL HTTP server.

![WEB](https://ibb.co/Mf4PZQj)
------------------
