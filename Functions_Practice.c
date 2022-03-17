#include <stdio.h>
#include <stdlib.h>

void getNumbers (int *, int *); // Prototype of the function
void displaynumbers(int, int); //Prototype of the function
char menu();
void showresults (char, int, int);
int add (int, int);
int multiply(int, int);
float divide(int, int);

//---------------------------------------
int add( int a, int b){

    return a+b;
}

int multiply(int a, int b)
{
    
    return a*b;
}

float divide(int a, int b){

    return a/b;
}
//--------------------------------------------
int main(){
    
    int x = 0, y = 0;

    getNumbers(&x,&y)
    
  

  
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

    printf("\tWelcome to my program ----------------");
    printf("\n\t\tChoose from the following menu:\n");

    printf("\n\t\ta/A : to print the sum of the numbers\n");
    printf("\n\t\tp/P : to print the product of the numbers\n");
    printf("\n\t\td/D : to print the divsion of the first numbers by the second number\n");

    printf("\nEnter your selection: ");
    scanf("%c", &option);
    option = toupper(option);
    firstry = 0;

}while (option != 'A' && option != 'P' && option != 'D' );

return option;


}//End of menu

//----------------------------------------------------------

void showresults(char option, int first, int second){

    switch(option)
    {
        case 'A': printf("\t\t%d + %d = %d", first, second, add(first,second));
        break;

        case 'P': printg("\t\t%d * %d = %d", first, second, multiply(first, second));
        break;

        case 'D': if( second !== 0)
        printg("\t\t%d / %d = %d", first, second, divide(first, second));
        
        else
        printf("Sorry you cannot divide by zero\n");
        
        break;

    }

}//End of show results