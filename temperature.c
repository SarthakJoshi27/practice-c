#include<stdio.h>

float farenhite(float x){
    float res = x * (9 / 5) + 32;
    return res;
}

float celcius(float x){
    float res = (x - 32) * 5 / 9;
    return res;
}

float kelvin(float x){
    float res = (x + 273.15);
    return res;
}
int main(){
    int sw, ch;
    float x;
    while(1){
        scanf("%d", &sw);
        if(sw == 0) break;

        scanf("%d", &ch);
        switch (ch){
            case 1: 
                printf("\n Enter the temperature in celcius : ");
                scanf("%f", &x);
                printf("Temperature in farenhite is : %f and in kelvin is : %f", farenhite(x), kelvin(x));
                break;

            case 2:
                printf("\n Enter the temperature in feranhite : ");
                scanf("%f", &x);
                printf("Temperature in celcius is : %f", celcius(x));
                break;

            default:
                break;

        }
    }
    return 0;
}