#include <stdio.h>

int main ()
{
    for(int i = 1; i <= 10; i++){
        int a = 2;
        for(int q = 1; q <= i; q++){
        a = 2*a;
        }
        printf("%d\n", a);
    }
    return 0;
}