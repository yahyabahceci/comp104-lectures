#include <stdio.h>

int main(){
    float Euro, result;
    float exchange_rate = 17.2;
    float commission_rate = 0.53;
    printf("Please Enter Euro to convert to USD: ");
    scanf("%f",&Euro);
    result = Euro * (100+exchange_rate)/100;
    result = result * (100+commission_rate)/100;
    printf("%.2f",result);
    return 0;
}
