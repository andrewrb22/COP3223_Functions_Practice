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
do {
    printf("\nWelcome to my program\n");
    printf("Choose from the following menu:\n");

    printf("a/A : to print the sum of the numbers\n");
    printf("p/P : to print the product of the numbers\n");
    printf("d/D : to print the divsion of the first numbers by the second number\n");

    printf("Enter your selection: ");
    scanf("%c", &option);
    option = toupper(option);

}while (option != 'A' && option != 'P' && option != 'D' );

return option;


}//End of menu

//----------------------------------------------------------