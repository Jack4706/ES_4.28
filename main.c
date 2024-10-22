#include <stdio.h>

int main(){
    int num;
    int max = 0;

    for(int i = 0; i < 10; i++) {
        printf("inserisci un numero:\n");
        scanf("%d", &num);
        if(num > max) {
            max = num;
        }

    }
    printf("il numero maggiore e' %d",max);

    return 0;
}
