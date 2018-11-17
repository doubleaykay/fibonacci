#include <stdio.h>

int main() {
    int curr, prev, count, max, tmp;
    
    curr = prev = 1;
    
    printf("How many numbers to compute? ");
    scanf("%d", &max);
    
    printf("Fibonacci sequence of %d numbers:\n", max);
    
    printf("%d ", prev);
    
    for (count = 2; count <= max; count++) {
        printf("%d ", curr);
        tmp = prev;
        prev = curr;
        curr += tmp;
    }
    return 0;
}
