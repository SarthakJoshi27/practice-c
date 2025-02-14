#include<stdio.h>

int add(int a, int b){
    int res = a + b;
    return res; 
}

int sub(int a, int b){
    int res = a - b;
    return res;
}

int mul( int a, int b){
    int res = a * b;
    return res;
}

float div(int a, int b){
    float res = (float)a / b;
    return res;
}

int fact(int x){
    int res = 1;
    for(int i = 1; i <= x; i++){
        res = res * i;
    }
    return res;
}

int factorial(int n){
    if (n == 0) return 1;

    return n * factorial(n - 1);
}

int power(int a, int b){
    int res = 0;
    res = pow(a, b);
    return res;
}

float root(int a){
    float res = 0;
    res = sqrt((float)a);
    return res;
}
// int main(){
//     int a, b;
//     scanf("%d %d",&a, &b);
//     printf("\n %d %d %d %f %d %d %f", add(a,b), sub(a,b), mul(a,b), div(a,b), fact(a), power(a,b), root(a));
//     return 0;
// }

int main (){
    int sw, ch, a, b;
     while(1){
        scanf("%d", &sw);
        if (sw == 0){
            break;
        }
        printf("\n choose the operation to perform : ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                printf("\n enter the numbers for addition : ");
                scanf("%d %d", &a, &b);
                printf("%d \n", add(a, b));
                break;

            case 2:
                printf("\n enter the numbers for subtraction : ");
                scanf("%d %d", &a, &b);
                printf("%d\n", sub(a, b));
                break;

            case 3:
                printf("\n enter the numbers for multiplication: ");
                scanf("%d %d", &a, &b);
                printf("%d\n", mul(a, b));
                break;

            case 4:
                printf("\n enter the numbers for division : ");
                scanf("%d %d", &a, &b);
                printf("%f\n", div(a, b));
                break;

            case 5:
                printf("\n enter the numbers for factorial : ");
                scanf("%d", &a);
                printf("%d\n", fact(a));
                break;

            case 6:
                printf("\n enter the numbers for recursion : ");
                scanf("%d", &a);
                printf("%d\n", factorial(a));
                break;
                
            case 7:
                printf("\n enter the numbers for power : ");
                scanf("%d %d", &a, &b);
                printf("%d\n", power(a, b));
                break;

            case 8:
                printf("\n enter the numbers for square root : ");
                scanf("%d", &a);
                printf("%f\n", root(a));
                break;

            default:
                break;
        }
     }
}
