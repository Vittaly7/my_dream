#include <stdio.h>

int main (){

    int width = 20;
    int hight = 10;
    for(int i = 0; i < hight; i++){
                
        for(int q = 0; q < width; q++){
            if(i == 0 || i == hight - 1 || q == 0 || q == width - 1 || i == 5 && q == 10)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}