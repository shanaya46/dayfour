#include <stdio.h>

int ft_recursive_power(int nb, int power) {
 
    if (power < 0){
        return 0;
    }
    else if (power == 0){
        return 1;
    }
    return nb * ft_recursive_power(nb, power - 1);
}

int main(){
    printf("%d to the power of %d: %d\n", 4, -3, ft_recursive_power(4, -3));
}