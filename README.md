# Summary

This repository contains experiments I'm doing to learn how to build webassembly code using clang (without emscripten). They require a recent version of the clang compiler.

## How to build clang

* Clone the repo at https://github.com/llvm/llvm-project.git
* Run the commands:

```
cd llvm-project
mkdir build
cd build
cmake ..\llvm -DCMAKE_BUILD_TYPE=Release -DLLVM_ENABLE_PROJECTS="clang;lld"
```

* For more details see instructions at https://clang.llvm.org/get_started.html 


## How to build the sum_sample


```
clang.exe --target=wasm32 -nostdlib "-Wl,--no-entry" "-Wl,--export-all" -o sample.wasm .\test.cpp
```

Start a local web server, e.g. using Python:

```
python3 -m http.server
```

Link to sample: [click here](sum_sample/)
