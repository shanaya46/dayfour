#include <stdio.h>
#include <stdlib.h>

int ft_is_prime(int nb) {
    int is_prime = 1;
    if (nb == 1 || nb == 0) {
        is_prime = 0;
    }
    for (int i = 2; i <= nb / 2; i++) {
        if (nb % i == 0) {
            is_prime = 0;
            break;
        }
    }
    return is_prime;
}

int main(int argc, char *argv[]) {
 
    int num = atoi(argv[1]);
    printf("Is %d prime?: %d\n", num, ft_is_prime(num));
}