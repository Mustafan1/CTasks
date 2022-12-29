#pragma warning(disable:6031)
#pragma warning(disable:6001)
#pragma warning(disable:4700)
#pragma warning(disable:4996) 

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

#define THE_LIMIT 5000
bool function_stop(const char* string);
void convert_whitespaces(char* string);

//function to check first four letters are stop or STOP.
bool function_stop(const char* string) {
	if (!strncmp(string, "stop", 4) || !strncmp(string, "STOP", 4)) {
		return true;
	}
	return false;
}

//Function to replace whitespaces to underscore.
void convert_whitespaces(char* string) {

	for (int i = 0; i < strlen(string); i++) {
		if (string[i] == ' ') {
			string[i] = '_';
		}
	}
}
int main() {
	char write_string[THE_LIMIT];

	printf("Please enter a string or'stop'to excute the program.\n");
	fgets(write_string, THE_LIMIT, stdin);

	//while loop for the program to continue untill the user enters stop.
	while (!function_stop(write_string)) {
		convert_whitespaces(write_string);
		printf("You entered:\n%s\n", write_string);
		printf("Your next string or 'stop' to excute the program.\n");
		fgets(write_string, THE_LIMIT, stdin);
	}
	printf("The program has stopped\n");
	return 0;
}
vv