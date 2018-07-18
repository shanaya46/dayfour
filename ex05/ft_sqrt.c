#include <stdio.h>
#include <stdlib.h>

int ft_sqrt(int nb) {
    int min = 1;
    int max = nb;
    do {
        long current = (min + max) / 2;
        long square = current * current;
        if (square == nb)
           return current;
        else if (square > nb)
           max = current;
        else
           min = current;
    } while (min + 1 < max);
    return 0;
}

int main(int argc, char *argv[]) {
 
    int num = atoi(argv[1]);
    printf("The square root of %d is %d\n", num, ft_sqrt(num));
}