wasm_examples
1. C++ code with parameters type [array,number] ,and  return type [array].
command used to build: em++ test.cpp -s WASM=1 -s NO_EXIT_RUNTIME=1  -s EXPORTED_FUNCTIONS="['_main','_array_square']" -s "EXTRA_EXPORTED_RUNTIME_METHODS=['ccall','cwrap']"
