#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
#define MAX_SIZE 40
/*Ex. 3
Write a function that takes an array of integers and array size as a parameter and returns a float. The 
function calculates average value of the array and returns it.
Write a program that uses an array to hold course grades. The array is initialized to zero in the 
beginning. The program asks user how many students are to be graded. Program must not allow 
values that are greater that the array size.
Then the program asks user to enter a grade for each student. Only values in the range 0-5 are 
accepted. Student number that is displayed to the user is array index + 45000.
(For example if array index is 2 user is asked to enter grade for student nr: 45002)
Program must check that array bounds are not violated!
In the end program calculates the average of course grades using the average function and prints the 
average with two decimal accuracy.
Remember to write both function declaration and definition!*/



//Creating a fucntion to cacluate the average course grades
float Grade_average(int grade_array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += grade_array[i];
    }
    return (float)sum / size;

}

//The main function of the program
int main() {
    int  course_grades[MAX_SIZE] = {0};
    int students;
    int student_numbers;
    // Input gross income elements in array 
    printf("How many students have to be graded?\n");
    scanf("%d", &students);
 
    //For loop for adding grades and setting students numbers
    for (int i = 0; i < students; i++) {
        student_numbers = i + 45000;
        printf("Please enter grade for student nr: [%2d]: ", student_numbers);
        scanf("%d", &course_grades[i]);
        if (course_grades[i] < 0 || course_grades[i] > 5) {
            printf("Invalid number please insert a number between 0-5 ");
            scanf("%d ", &course_grades[i]);

        }
    } 
  
    printf("Total average of the class is: %.2f", Grade_average(course_grades, students));


}

