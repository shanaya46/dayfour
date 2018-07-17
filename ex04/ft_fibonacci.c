#include <stdio.h>

int ft_fibonacci(int index) {
    if (index <= 1){
        return index;
    }

    return ft_fibonacci(index-1) + ft_fibonacci(index-2);
}


int main(){
    printf("The element at index %d of the Fibonacci sequence is %d\n", 1, ft_fibonacci(1));
}