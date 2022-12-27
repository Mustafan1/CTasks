#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
/*Ex1. 
Do not use an array to hold numbers that user enters in this exercise!
Write a program that calculates average of positive numbers that user enters. Program asks user to 
enter numbers and calculates the average of entered numbers when user enters 0 as the number. 
The zero is not included in the average. If user enters a negative number the program must print a 
message telling that only positive numbers are accepted and ignore the negative number*/
void main() {

    int number;
    int sum = 0;
    int count = 0;

        printf("Please insert the numbers or 0 to stop the program!");
        scanf("%d", &number);

        while (number != 0) {
            if (number > 0) {
                sum = sum + number;
                count++;
            }else {
                printf("Please insert a positive numbers !\n");
               }
            printf("Please insert a 0  to stop the program!");
            scanf("%d", &number);
        }
        printf("Average of positive numbers: = %.2f", ((float)sum) / count);

   

}