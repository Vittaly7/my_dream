#include <stdio.h>

int main (){

    int width = 20;
    int hight = 10;
    for(int i = 0; i < hight; i++){
                
        for(int q = 0; q < width; q++){
            if(i == 0 || i == hight - 1 || q == 0 || q == width - 1)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*#include <stdio.h>

int main() {
    int width = 20;
    int height = 10;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}*/