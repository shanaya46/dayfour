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

int ft_find_next_prime(int nb){
    int prime = nb;
    while (ft_is_prime(prime) == 0) {
        prime++;
    }
    return prime;
}

int main (int argc, char *argv[]) {
 
    int num = atoi(argv[1]);
    printf ("The next prime number is: %d\n", ft_find_next_prime(num));
}