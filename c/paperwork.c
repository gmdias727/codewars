#include <stdio.h>

void calculatePaperwork(int n, int m) {
    if (n < 0) {
        n = 0;
    }
    
    if (m < 0) {
        m = 0;
    }
    
    printf("Value of n is %d \n", n);
    printf("Value of m is %d \n", m);
    printf("Paperwork copies needed %d \n", (n * m));
}