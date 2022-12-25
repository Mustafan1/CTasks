#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
#define MAX_SIZE 12

/*Ex2.
Write a program that defines a floating-point array of 12 elements. Ask user to enter yearly gross 
income. Then the program assigns values to the array so that elements 0-5 and 7-11 are assigned 
value that you get by dividing gross income with 12.5.
Element 6 is assigned value that you get from gross/12.5 * 1.5
Then print the array in the following format:
element[ 0] = 998.0098
element[ 1] = 998.0098
...
element[ 6] = 1489.5147
...
element[11] = 998.0098
total = 12475.1230
You need to get familiar with printf field width specifiers to complete this!
Note that equal signs and decimal points must be aligned as shown above!*/


int main(){
    float arr[MAX_SIZE] = {12};
    float income = 0.0;
    int i;
    // Input gross income elements in array 
    printf("Please enter yearly gross incomes: ");
    scanf("%f ", &income);
    for (i = 0; i < MAX_SIZE; i++){
        arr[i] = income / 12.5;
        arr[6] *= 1.5;
        printf("element[%2d] =  %10.4f \n", i, arr[i]);
    }
    printf("%-12s", "total"); printf("=  %10.4f", income);
    return 0;
        
    }

