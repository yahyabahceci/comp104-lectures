#include <stdio.h>

void sum_of_digit(int n){
    int sum = 0;
    while(n>0){
        sum += n % 10;
        n /= 10;
    }
    printf("The sum of the digits: %d\n",sum);
}

void the_greatest_number(int n){
    int max = 0;
    int temp_n = n;

    if (temp_n == 0) max = 0;

    while (temp_n > 0) {
        int current_digit = temp_n % 10;
        if (current_digit > max) {
            max = current_digit;
        }
        temp_n /= 10;
    }
    printf("The greatest number: %d",max);
}

int main() {
    int n;
    
    printf("Please enter a number: ");
    scanf("%d",&n);
    sum_of_digit(n);
    the_greatest_number(n);

}

