#include <stdio.h>

int main() {
    int size;
    int sum = 0;
    int count = 0;

    printf("Please enter of the size of array: \n");
    scanf("%d",&size);
    int numbers[size];

    for (int i=0; i<size; i++) {
        printf("Enter the element:\n");
        scanf("%d",&numbers[i]);
        if (numbers[i]<0) {
            continue;
        }
        sum += numbers[i];
        count++;
    }

    double result = (double)sum / count;
    printf("The average of the numbers equal to %f",result);
}