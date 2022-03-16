#include <stdio.h>
#include <stdlib.h>

void getNumbers (int a, int b); // Prototype of the function

int main(){
    
    int x = 0, y = 0;
    
    getNumbers(x,y);

    printf("\nYou Entered %d and %d", x ,y);
    
    return 0;

}// End of Main

void getNumbers(int a, int b){

printf("\nEnter your two numbers: ");
scanf("%d%d", &a, &b);

}//End of getNumbers
