#include <stdio.h>

int ft_find_next_prime(int nb){
int prime = nb;
int check = 1;
while (check == 1) {
if (prime <= 1) {
    check = 0;
    prime++;
}

for (int i = 2; i <= prime / 2; i++){
if ((prime % i == 0)){
    check = 0;
    prime++;
    break;
}
}
break;
}

return prime;
}

int main () {
 printf ("The next prime number is: %d\n", ft_find_next_prime(10));
}