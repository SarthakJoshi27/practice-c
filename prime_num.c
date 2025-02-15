#include<stdio.h>

void prime_check(int x){
    int f = 0;
    for(int i = 2; i < x; i++){
        if (x % i == 0){
            f = 1;
            break;
        }
    }
    if (f == 0){
        printf("\nNumber is prime");
    }
    else{
        printf("\nNumber is not prime");
    }
    
}

void total_prime(int x){
    printf("\nPrime number is : ");
    for(int i = 2; i <= x; i++){
        int f = 0;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                f = 1;
            }
        }
        if (f == 0){
            printf(" %d ", i);
        }
    }
}

void factorization(int num){
    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }
}

int main(){
    int sw, ch, x;
    while(1){
        printf("\n");
        scanf("%d", &sw);
        if (sw == 0){
            break;
        }

        printf("\n");
        scanf("%d", &ch);

        switch(ch){
            case 1:
            printf("\nEnter the number to check prime number : ");
            scanf("%d", &x);
            prime_check(x);
            break;
            
            case 2:
            printf("\nEnter the number for prime numbers : ");
            scanf("%d", &x);
            total_prime(x);
            break;

            case 3:
            printf("\nEnter the number for prime factorization : ");
            scanf("%d", &x);
            factorization(x);
            break;

            default :
            printf("\nWrong Entry1");
            break;
        }
    }
}