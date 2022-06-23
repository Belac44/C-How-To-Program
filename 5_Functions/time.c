#include <stdio.h>

int main(){
    int hour, min, sec;

    printf("Enter the time seperated with spaces(hours minutes sec): ");
    scanf("%d %d %d",&hour, &min, & sec);

    if (hour == 0 || hour == 12 && sec == 0 && min == 0){
        printf("Number of sec since 12:00 = 0 sec");
    }

    else if (hour >= 12 && hour < 24){
        printf("Number of seconds since 12:00 noon = %d ",(hour - 12)*3600 + (min * 60) + sec);
    }

    else if (hour < 12 && hour > 5 ){
        printf("Number of seconds since midnight = %d",(hour)*3600 + (min * 60) + sec);
    }

    else if (hour < 12 && hour < 5 ){
        printf("Number of seconds since midnight = %d",(hour)*3600 + (min * 60) + sec);
    }

    return 0;

}