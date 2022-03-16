#include <stdio.h>
#include <stdlib.h>

void getNumbers (int *, int *); // Prototype of the function
void displaynumbers(int, int); //Prototype of the function
char menu();

//--------------------------------------------
int main(){
    
    int x = 0, y = 0;
    
    //getNumbers(&x,&y);

   //displaynumbers(x,y);

   char selection;

   selection = menu();

   printf("you have selected %c", selection);

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

//-----------------------------

char menu(){
    
    char option;
    int firstry = 1;
do {
if( firstry == 0)
    printf("\n\nSorry try again \n");

    printf("\nWelcome to my program\n");
    printf("\nChoose from the following menu:\n");

    printf("a/A : to print the sum of the numbers\n");
    printf("\np/P : to print the product of the numbers\n");
    printf("\nd/D : to print the divsion of the first numbers by the second number\n");

    printf("\nEnter your selection: ");
    scanf("%c", &option);
    option = toupper(option);
    firstry = 0;

}while (option != 'A' && option != 'P' && option != 'D' );

return option;


}//End of menu

//----------------------------------------------------------