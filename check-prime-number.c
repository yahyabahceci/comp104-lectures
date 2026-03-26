#include <stdio.h>
#include <stdbool.h>

int main() {
    int number,i;
    bool result = true;
    printf("Please enter a number to check whether prime or not prime: ");
    scanf("%d",&number);

    if (number == 0 || number == 1) {
        result = false;
    }

    for (i=2; i<number; i++) {
        if (number % i == 0) {
            result = false;
            break;
        }

    }

    if (result == true) {
        printf("%d is a prime number.",number);
    }
    else {
        printf("%d is not a prime number.",number);
    }

    return 0;
}