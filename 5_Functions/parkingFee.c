#include <stdio.h>

void calculateCharges(float cust1, float cust2, float cust3);

int main(){
    float hour1, hour2, hour3;

    printf("Input number of Hours: ");
    scanf("%f%f%f",&hour1,&hour2,&hour3);  
    
    printf("Car %11s %26s\n", "Hours","Charge");

    calculateCharges(hour1, hour2, hour3);

    

}

void calculateCharges(float cust1, float cust2, float cust3){
    double charge(float hours);
    double charge1, charge2, charge3;

    float Charge, totalHours, totalCharge;

    charge1 = charge(cust1);
    charge2 = charge(cust2);
    charge3 = charge(cust3);

    totalCharge = charge1 + charge2 + charge3;
    totalHours = cust1 + cust2 + cust3;

    printf("%d%13.2f%26.2f\n",1,cust1,charge1);
    printf("%d%13.2f%26.2f\n",2,cust2,charge2);
    printf("%d%13.2f%26.2f\n",3,cust3,charge3);
    printf("%s%9.2f%26.2f\n","TOTAL",totalHours,totalCharge);


}

double charge(float hours){
    double charge;
    if (hours <= 3){
        charge= 2.00;
    }
    else if (hours > 3){
        charge = 2.00 + ((hours - 3) * 0.5);
    }
    if (charge > 10.00){
        charge = 10.00;
    }

    return charge;
}