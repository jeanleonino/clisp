/* **********************************
 * clisp - main.c
 *
 * Author: Jean Lucas Lima
 * ******************************* */

#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

#include "macros.h"

int main(int argc, char** argv) {
    printf("clisp version %s", CLISP_VERSION);
    puts("Press Ctrl+C to exit\n");

    while (1) {
        char* input = readline("clisp> ");
        add_history(input);

        printf("No, you're a %s\n", input);
        free(input);
    }

    return 0;
}
