#include <stdio.h>
#include <stdlib.h>

int ft_recursive_factorial (int nb) {
    int factorial = 1;
    factorial = factorial * nb;
    if (nb <= 1){
    return 1;
    }
    else {
    return nb * ft_recursive_factorial(nb - 1);
    }
}

int main(void) {
    int num = 5;
    printf ("Factorial: %d\n", ft_recursive_factorial(num));

    return 0;
}