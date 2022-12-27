#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
#include <time.h>
/*Ex. 4
Write a program that asks user to enter current time in 24 hour format and asks how long you want
to sleep.Program then calculates your wake up time and prints it.The program must check that
values are entered in correct format and must print an error message if invalid input is entered.
Program must also check that the entered numbers are in valid range(0 - 23 / 0 - 59).
Example:
Enter current time(hh : mm) : 21 : 56
How long do you want to sleep(h : mm) : 8 : 30
If you go to bed now you must wake up at 6 : 26.
*/


//The main function of the program
int main() {
    /*
    int hours, minutes,  seconds;
 
    printf("Enter current time(hh : mm) :");
    scanf("%02d:%02d", &hours, &minutes);
    if (hours > 23 || hours <  0 && minutes > 59 || minutes < 0){
        printf("Ivalid time input please insert the correct time format (hh : mm)! ");
        scanf("%02d:%02d", &hours, &minutes);
    }

    printf("How long do you want to sleep(h : mm) :");
    scanf("%02d:%02d", &hours, &minutes);
    if (hours > 23 || hours < 0 && minutes > 59 || minutes < 0) {
        printf("Ivalid time input please insert the correct time format (hh : mm)! ");
        scanf("%02d:%02d", &hours, &minutes);*/
    const int HOUR = 24, MINUTES = 60;
    int time_now_hour = 0, time_now_minutes = 0;
    int sleep_hour = 0, sleep_minutes = 0;
    int wake_up_hour = 0, wake_up_minutes = 0;

    //The input request for the current time.
    printf("Enter current time (hh:mm): ");
    scanf("%d:%d", &time_now_hour, &time_now_minutes);

    //validating the user inputs
    if (time_now_hour < 0 || time_now_hour >= HOUR || time_now_minutes < 0 || time_now_minutes >= MINUTES) {
        printf("Invalid input of current time.");


    }
    else if (time_now_hour >= 0 && time_now_hour < HOUR && time_now_minutes >= 0 && time_now_minutes < MINUTES) {

        //The input request for the sleeping hours.
        printf("How long do you want to sleep (h:mm): ");
        scanf("%d:%d", &sleep_hour, &sleep_minutes);

        //validating the user input
        if (sleep_hour < 0 || sleep_hour >= HOUR || sleep_minutes < 0 || sleep_minutes >= MINUTES) {
            printf("Invalid input of sleeping hours!");

        }
        else if (sleep_hour >= 0 && sleep_hour < HOUR && sleep_minutes >= 0 && sleep_minutes < MINUTES) {

            // the calculation of sleeping hours and waking up time
            wake_up_hour = sleep_hour - (HOUR - time_now_hour);
            wake_up_minutes = time_now_minutes + sleep_minutes;

            if (wake_up_minutes >= MINUTES) {
                wake_up_minutes = wake_up_minutes - MINUTES;
                wake_up_hour++;
            }
            printf("If you go to bed now you must wake up at %d:%d.", wake_up_hour, wake_up_minutes);
        }
    }


    return 0;
    }

    

