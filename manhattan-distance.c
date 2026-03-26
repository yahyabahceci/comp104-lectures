#include <stdio.h>

int main() {
    int a,b,c,d;

    printf("Please enter first point (a,b): ");
    scanf("%d%d",&a,&b);

    printf("Please enter second point (c,d): ");
    scanf("%d%d",&c,&d);

    int diff_a_c = a - c;
    int diff_b_d = b - d;

    if (diff_a_c < 0) {
        diff_a_c = -diff_a_c;
    }
    if (diff_b_d < 0) {
        diff_b_d = -diff_b_d;
    }

    int distance = diff_a_c + diff_b_d;
    printf("Manhattan Distance: %d",distance);
    return 0;
}