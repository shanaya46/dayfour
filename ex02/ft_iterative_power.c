#include <stdio.h>

int ft_iterative_power(int nb, int power){
    if (power < 0){
        return 0;
    }
    int product = 1;
    for (int i = 1; i <= power; i++){
        product = product * nb;
    }
    return product;
}

int main(){
    printf("%d to the power of %d: %d\n", 4, 0, ft_iterative_power(4, 0));
}