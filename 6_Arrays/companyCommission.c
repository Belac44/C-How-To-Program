#include <stdio.h>
#define SIZE 15
#define PAY 200
#define COMMISSION_PERCENT 0.09
#define FREQUENCY 10

int main()
{
    int counter[ SIZE ] = {3000, 2500, 8000, 5600, 4320, 5670, 10000, 3400, 9700, 12000, 15000, 5600, 32100, 56410, 7500};
    int i, num, range;
    int pay[ SIZE ] = {0};
    int frequency [ FREQUENCY ] = {0};

    for (i = 0; i < SIZE; i++){
        pay[i] = 200 + (counter[i] * COMMISSION_PERCENT);
        if (pay[i] >= 200 && pay[i] <= 299){
                num = 1;
            ++frequency[num];
        }
        else if (pay[i] >= 300 && pay[i] <= 399){
                num = 2;
            ++frequency[num];
        }
         else if (pay[i] >= 400 && pay[i] <= 499){
          num = 3;
             ++frequency[num];
         }
         else if (pay[i] >= 500 && pay[i] <= 599){
          num = 4;
             ++frequency[num];
         }
         else if (pay[i] >= 600 && pay[i] <= 699){
          num = 5;
             ++frequency[num];
         }
         else if (pay[i] >= 700 && pay[i] <= 799){
          num = 6;
             ++frequency[6];
         }
         else if (pay[i] >= 800 && pay[i] <= 899){
                num = 7;
             ++frequency[num];
         }
         else if (pay[i] >= 900 && pay[i] <= 999){
                num = 8;
             ++frequency[num];
         }
         else if (pay[i] >= 1000){
                num = 9;
             ++frequency[num];
         }
    }
    printf("%s%14s", "Salaries","Frequency");
    range = 199;
    for (i = 1; i < FREQUENCY; i++){
        printf("%d-%d%17d\n",range, range+99, frequency[i]);
        range += 1;
    }


}