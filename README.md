# Summary

This repository contains experiments I'm doing to learn webassembly from scratch. They require a recent version of the clang compiler.

## sum_sample

Build using the command line:

```
clang.exe --target=wasm32 -nostdlib "-Wl,--no-entry" "-Wl,--export-all" -o sample.wasm .\test.cpp
```

Start a local web server, e.g. using Python:

```
python3 -m http.server
```


Link to compiled sample: [click here](sum_sample/test.html)
