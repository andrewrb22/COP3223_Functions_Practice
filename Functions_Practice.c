#include <stdio.h>
#include <stdlib.h>

void getNumbers (int *, int *); // Prototype of the function
void displaynumbers(int, int); //Prototype of the function
int main(){
    
    int x = 0, y = 0;
    
    getNumbers(&x,&y);

   displaynumbers(x,y);

    return 0;

}// End of Main
//---------------------------------------------------
void getNumbers(int *a, int *b){

printf("\nEnter your two numbers: ");
scanf("%d%d", a, b);

}//End of getNumbers
//-------------------------------------------------
void displaynumbers(int number1, int number2){

printf("\nYou entered %d and %d", number1, number2);

}//End of displaynumbers