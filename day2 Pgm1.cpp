#include <stdio.h>
#include <limits.h>

int main() {
    int a[] = { 2,4,5,8,7 };
    // This trick to get the size of an array only works on stack allocated arrays.
    const int n = sizeof(a) / sizeof(a[0]);

    // Initialize them to the smallest possible integer.
    // This avoids having to special case the first elements.
    int max = INT_MIN;
    int second_max = INT_MIN;

    for( int i = 0; i < n; i++ ) {
        // Is it the max?
        if( a[i] > max ) {
            // Make the old max the new 2nd max.
            second_max = max;
            // This is the new max.
            max = a[i];
        }
        // It's not the max, is it the 2nd max?
        else if( a[i] > second_max ) {
            second_max = a[i];
        }
    }

    printf("max: %d, second_max: %d\n", max, second_max);
}
