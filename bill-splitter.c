#include <stdio.h>

int main() {
    int n;
    printf("Please enter TL: ");
    scanf("%d",&n);
    if (n<=0)
        printf("This is invalid value");
    else {
        int bills_20 = n / 20;
        n -= 20 * bills_20;

        int bills_10 = n / 10;
        n -= 10 * bills_10;

        int bills_5 = n / 5;
        n -= 5 * bills_5;

        int bills_1 = n / 1;
        n -= 1 * bills_1;

        printf("20 TL bills: %d\n",bills_20);
        printf("10 TL bills: %d\n",bills_10);
        printf("5 TL bills: %d\n",bills_5);
        printf("1 TL bills: %d\n",bills_1);

    }
    return 0;
}