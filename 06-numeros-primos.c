
#include <stdio.h>

int prime(int number);

int prime(int number){
    int p = 1;
    int i = 2;
    while(p && i <= number/2){
        if(number % i == 0) p = 0;
        i++;
    }
    return p;
}

int main()
{
    int i = 0;
    int count = 0;
    
    printf("Numeros primos:\n\n");
    
    while(count < 10){
        if(prime(i)){
            printf("%d es primo\n", i);
            count++;
        }
        //else printf("%d no es primo\n", i);
        i++;
    }
    printf("\nLos %d primeros numeros primos en este programa.\n", count);
    printf("\n\nFin\n");

    return 0;
}
