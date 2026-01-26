#include <stdio.h>

int main(int argc, char**argv)
{
    printf("hello world!\n");

    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            printf("Argument: %s\n", argv[i]);
        }
    }
    
    return 0;
}