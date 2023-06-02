clang.exe --target=wasm32 -nostdlib "-Wl,--no-entry" "-Wl,--export-all" -o sample.wasm .\test.cpp
