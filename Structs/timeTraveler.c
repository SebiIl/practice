#include <stdio.h>

typedef struct
{
    int hours;
    int minutes;
    int seconds;
} Time;

int main()
{
    Time t1, t2;
    int totalHours, totalMinutes, totalSeconds; 
    t1.hours = 0;
    t1.minutes = 0;
    t1.seconds = 0;

    t2.hours = 0;
    t2.minutes = 0;
    t2.seconds = 0;

    totalHours = 0; 
    totalMinutes = 0;
    totalSeconds = 0;
    // input for time 1
    printf("Input time 1 specifications: \n");

    do
    {
        printf("Enter hours: ");
        scanf("%d", &t1.hours);
        if (t1.hours < 0 || t1.hours > 23)
        {   
            printf("Invalid input, please enter a number between 0 and 23!\n"); 
        }
    } while (t1.hours < 0 || t1.hours > 23);


    do
    {
        printf("Enter minutes: ");
        scanf("%d", &t1.minutes);
        if (t1.minutes < 0 || t1.minutes > 60)
        {   
            printf("Invalid input, please enter a number between 0 and 59!\n"); 
        }
    } while (t1.minutes < 0 || t1.minutes > 59);


    do
    {
        printf("Enter seconds: ");
        scanf("%d", &t1.seconds);
        if (t1.seconds < 0 || t1.seconds > 59)
        {   
            printf("Invalid input, please enter a number between 0 and 59!\n"); 
        }
    } while (t1.seconds < 0 || t1.seconds > 59);


     // input for time 2
    printf("Input time 2 specifications: \n");

    do
    {
        printf("Enter hours: ");
        scanf("%d", &t2.hours);
        if (t2.hours < 0 || t2.hours > 23)
        {   
            printf("Invalid input, please enter a number between 0 and 23!\n"); 
        }
    } while (t2.hours < 0 || t2.hours > 23);


    do
    {
        printf("Enter minutes: ");
        scanf("%d", &t2.minutes);
        if (t2.minutes < 0 || t2.minutes > 60)
        {   
            printf("Invalid input, please enter a number between 0 and 59!\n"); 
        }
    } while (t2.minutes < 0 || t2.minutes > 59);


    do
    {
        printf("Enter seconds: ");
        scanf("%d", &t2.seconds);
        if (t2.seconds < 0 || t2.seconds > 59)
        {   
            printf("Invalid input, please enter a number between 0 and 59!\n"); 
        }
    } while (t2.seconds < 0 || t2.seconds > 59);

    // print t1 specs
    printf("Time one is: %dh%dm%ds\n", t1.hours, t1.minutes, t1.seconds);
    printf("Time two is: %dh%dm%ds\n", t2.hours, t2.minutes, t2.seconds);

    //calculate the result
    totalHours = (t1.hours + t2.hours) % 24; 
    totalMinutes = (t1.minutes + t2.minutes) % 60; 
    totalSeconds = (t1.seconds + t2.seconds) %60; 

    printf("Total of the added times is: %dh%dm%ds\n", totalHours, totalMinutes, totalSeconds); 

    return 0;
}