/* happy_diwali_ansi.c
   Prints "Happy Diwali" 100 times in rainbow colours using ANSI escape codes.
   Compile: gcc happy_diwali_ansi.c -o happy_diwali
   Run: ./happy_diwali
*/

#include <stdio.h>

int main() {
    const char *msg = "JISHAN KHAN MEWATI GHUNGHAURA WALA";
    // ANSI foreground colours
    const char *colors[] = {
        "\x1b[31m", // red
        "\x1b[33m", // yellow
        "\x1b[32m", // green
        "\x1b[36m", // cyan
        "\x1b[34m", // blue
        "\x1b[35m", // magenta
    };
    const char *reset = "\x1b[0m";
    int n = sizeof(colors)/sizeof(colors[0]);

    for (int i = 0; i < 100; i++) {
        printf("%s%s%s\n", colors[i % n], msg, reset);
    }

    return 0;
}