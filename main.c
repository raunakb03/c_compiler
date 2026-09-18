#include <stdio.h>

#include "compiler.h"

int main() {
    int res = compile_file("./test.c", "./test", 0);
    if (res == COMPILER_FILE_COMPILED_OK) {
        printf("File compiled successfully\n");
    } else {
        printf("Compilation failed\n");
    }
    return 0;
}
