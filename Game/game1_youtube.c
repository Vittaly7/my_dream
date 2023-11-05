#include <stdio.h>
#include <stdlib.h>


int main(){

    char grid [10][20];
    grid [0][20] = '#';
    int y = 5, x = 10;
    char key = 0;
    do{
    for(int i = 0;i <= 9;i++){
        
        for(int q = 0;q <= 19; q++){
            if(i == 0 || i == 9 || q == 0 || q == 19)
            printf("#");
            else if(x == q && y == i)
            printf("@");
            else
            printf(" ");
        }
    printf("\n");
    }
    key = getch();
    if(key = 'w')
    y--;
    if(key = 's')
    y++;
    if(key = 'a')
    x--;
    if(key = 'd')
    x++;
    }
    while(key != 'e');


return 0;
}