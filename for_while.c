#include <stdio.h>

int main() {

    //int a = 0;

    for (int i = 0; i < 5; i++) {
        printf("for: %d\n", i);
        int b = 0;
        while (b < 5) {
            printf("while: %d\n", i);
            b++;
            int c = 0;
            do {
                printf("do_while: %d\n", i);
                c++;
            }
            while (c < 5);
        }
    }
    return 0;
}