#include <stdio.h>
#include <stdlib.h>

int ft_iterative_factorial (int nb) {
    int factorial = 1;
    for (int i = 1; i <= nb; i++){
    factorial = factorial * i;
    }
    return factorial;
}

int main(void) {
    int num = 5;
    printf ("Factorial: %d\n", ft_iterative_factorial(num));

    return 0;
}