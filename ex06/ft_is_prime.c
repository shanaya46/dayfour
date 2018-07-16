#include <stdio.h>
int ft_is_prime(int nb){
int prime = 1;
if (nb <= 1) {
    prime = 0;
}

for (int i = 2; i <= nb / 2; i++){
if ((nb % i == 0)){
    prime = 0;
    break;
}
}

return prime;
}

int main (void){
    printf("Is %d prime?: %d\n", 11, ft_is_prime(11));
    return 0;
}