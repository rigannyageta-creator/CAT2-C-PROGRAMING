/*
NAME:RIGAN NYAGETA
ADM:PA106/G/28833/25
DES:PROGGAMME TO REQUEST USER TO ENTER HOURS WORKED IN A WEEK AND THE HOURLY WAGE
*/
#include<stdio.h>
int main() {

float hours,rate, grosspay, tax , netpay;


printf("hours worked in a week:");
scanf("%f", &hours);
printf("wage per hour:");
scanf("%f",&rate);

    if (hours <= 40) {
        grosspay = hours * rate;
    } else {
        float excesshours= hours - 40;
        grosspay = (40 * rate) + (excesshours * rate * 1.5);
    }
    

if (hours <=600){
 tax= grosspay *0.15;}
 else{
 tax= ( 600 * 0.15)+((grosspay-600)*0.20);}
 
 netpay=grosspay - tax;
 
 
printf("\ngrosspay: %.2f\n",grosspay);
printf("tax: %.2f\n",tax);
 printf("net pay: %.2f",netpay);
return 0;
}
