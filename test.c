#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

//Function Prototypes 

int add(int, int, int * );
int subtract(int, int, int *);
int multiply(int, int, int *);
int divide(int, int, int *);
int modulo(int, int, int *);
int doOperation(int *, int *, int *,int *);
int getInput(int*, int*, int*);
void* selectOperation(int);


enum operation{ADD, SUBTRACT, MULTIPLY, DIVIDE, MODULO, MAX };




int (*gOperation[])(int, int, int *) = {add, subtract, multiply, divide, modulo};

int main()
{
    int oprType=0,num1=3,num2=3,valid,finalAns;
   

     int (*funPtr)(int,int,int*) = selectOperation(oprType);
    (*funPtr)(num1,num2,&finalAns);
    printf("%d",finalAns);
    
}


// 5 Labor functions

int add(int num1, int num2, int *resultPtr )
{
    *resultPtr = num1 + num2;
    return 0;
}

int subtract(int num1, int num2, int *resultPtr)
{
    *resultPtr = num1 - num2;
    return 0;
}

int multiply(int num1, int num2, int *resultPtr)
{   
    *resultPtr = num1 * num2;
    if(num1 * num2 > INT_MAX || num1 * num2 < INT_MIN)
    // if((num1 > 0 && num2 > 0 && *resultPtr < 0) | (num1 < 0 && num2 < 0 && *resultPtr > 0) | (num1 > 0 && num2 < 0 && *resultPtr > 0) | (num1 < 0 && num2 > 0 && *resultPtr > 0))
    {
        printf("OverFlow Occured \n");
        exit(0);
    }
    return 0;
}

int divide(int num1, int num2, int *resultPtr)
{   
    if( num2 == 0)
    {
        printf("Zero Detected as denominator (Divide by 0 error !)\n");
        exit(0);
    }
    *resultPtr = num1 / num2;
    return 0;
}

int modulo(int num1, int num2, int *resultPtr)
{
    if( num2 == 0)
    {
        printf("Zero Detected as denominator (Divide by 0 error !)\n");
        exit(0);
    }
    *resultPtr = num1 % num2;
}

void* selectOperation( int operationType )
{
    return gOperation[operationType];
}
