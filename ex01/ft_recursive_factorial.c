#include <stdio.h>
#include <stdlib.h>

int ft_recursive_factorial (int nb) {
    if (nb <= 1) {
        return 1;
    }
    return nb * ft_recursive_factorial(nb - 1);
}

int main(int argc, char *argv[]) {
 
    int num = atoi(argv[1]);
    printf ("Factorial: %d\n", ft_recursive_factorial(num));

    return 0;
}