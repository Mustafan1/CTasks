#pragma warning(disable:4996)
#pragma warning(disable:6031)
#pragma warning(disable:6001)
#pragma warning(disable:4700)
#include <stdio.h>
/*Ex 5.
Write a program which multiplies a 3 element vector (3 by 1 matrix) with 3 by 3 matrix. 
Program asks user to enter initial values for vector and matrix. 
Write a function to do matrix multiplication. Function takes three parameters: Result vector, source 
vector, source matrix. Function returns no value but modifies result vector. Function may not modify 
source values.
Program must print the initial values before multiplication and result after multiplication. 
The matrix multiplication function must do only the multiplication and may not print anything*/



// Function for multiplication.
void calulate_matrix(int vector[3], int matrix[3][3], int result[3]){
        int luku = 0;
    for (int i = 0; i < 3; ++i) {
        luku = 0;
        for (int j = 0; j < 3; ++j) {
            luku += vector[j] * matrix[j][i];
        }
        result[i] = luku;
    }

}
//The main function
int main() {
    int number = 0;
    int my_vector[3];
    int my_matrix[3][3];
    int result[3];

    printf("Enter numbers for the vector values:\n");
    //Using for loop to print the vector model
    for (int i = 0; i < 3; i++) {
        printf("(%d) ", i + 1);
    }

    //Using for loop to add number for the vector values.
    for (int i = 0; i < 3; i++) {
        number++;
        printf("\nVector Value [%d]:", number);
        scanf("%d", &my_vector[i]);
    }


    number = 0;
    printf("Enter numbers for the matrix values:\n");
    //using for loop to print the matrix model
    for (int j = 0; j < 3; j++) {
        for (int k = 1; k < 4; k++) {
            number++;
            printf("(%d) ", number);
        }
        printf("\n");
    }
    number = 0;
    //Using for loop to add number for the matrix values.
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
            number++;
            printf("Matrix value [%d]:", number);
            scanf("%d", &my_matrix[j][k]);
        }

    }

    // Printing the inserted values of vector.
    printf("\n\nYour numbers for the vector values:\n");
    for (int k = 0; k < 3; k++) {
        printf("(%.2d) ", my_vector[k]);
    }

    // Printing the inserted values of matrix 3x3.
    printf("\n\nYour numbers for the matrix values:\n");
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
            printf("(%.2d) ", my_matrix[j][k]);
        }
        printf("\n");
    }

    printf("\nThe result of vector multiply matrix:\n");
    calulate_matrix(my_vector, my_matrix, result);
    for (int l = 0; l < 3; ++l) {
        printf("(%.2d) ", result[l]);
    }
    return 0;

}

