#include <stdio.h>

int main (){

    int width = 20;
    int hight = 10;
    int widthX = 0;
    int hightY = 0;
    printf("Enter the first coordinates X, Y: ");
    scanf(" %d %d", &widthX, &hightY);
    //if(y == 0 || y == hight - 1 || x == 0 || x == width - 1)
    //    printf("#");
    // else
    //   printf("ERROR\n");
        for(int i = 0; i < hight; i++){ // grid and initial symbol position
                
            for(int q = 0; q < width; q++){
                if(i == 0 || i == hight - 1 || q == 0 || q == width - 1){
                printf("#");
                }
                else if(i == hightY && q == widthX){
                printf("#");
                }
                else
                printf(" ");
            }
        
        printf("\n");
    }
    return 0;
}