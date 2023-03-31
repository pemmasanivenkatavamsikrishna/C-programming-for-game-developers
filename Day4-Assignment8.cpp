#include <stdio.h>

union data {
    int integer;
    float floating_point;
};

int main() {
    union data value;

    printf("Enter an integer or a floating point value: ");
    if (scanf("%d", &value.integer) == 1) {
        printf("You entered an integer value: %d\n", value.integer);
    } else {
        scanf("%f", &value.floating_point);
        printf("You entered a floating point value: %f\n", value.floating_point);
    }

    return 0;
}

