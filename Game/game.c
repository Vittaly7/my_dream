#include <stdio.h>
    int width = 20;
    int hight = 10;
    int widthX = 0;
    int hightY = 0;
    
int coordinates();
int grid ();
int movement();

int main (){


    int net = coordinates();
    if(net == 0)
    return 0;
    grid ();
    
    return 0;s
}

int coordinates(){

        printf("Enter the first coordinates X, Y: ");
        scanf(" %d %d%*c", &widthX, &hightY);
        if(hightY <= 0 || hightY >= hight - 1 || widthX <= 0 || widthX >= width - 1){
            printf("ERROR\n");
            return 0;
        }
        return 1;
}

int grid (){

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
    movement();    
}

int movement(){

    while (1){

    char move;
    printf("Make a move: a, s, w, d\n");
    scanf("%c", &move);
    switch (move)
    {
    case 'a':
        widthX -= 1;
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
        break;

    case 'd':
        widthX += 1;
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
        break;

    case 'w':
        hightY -= 1;
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
        break;

    case 's':
        hightY += 1;
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
        break;
    
    default:
        break;
    }
}
}

