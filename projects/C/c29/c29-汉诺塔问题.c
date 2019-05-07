#include<stdio.h>

void hanio(int n, char a, char b, char c);
//hanio
int main(void){
    int n;

    printf("input the number of disk:\n");
    scanf("%d", &n);

    printf("the steps for%d disk are:\n", n);
    hanio(n, 'a', 'b', 'c');

    return 0;
}


void hanio(int n, char a, char b, char c){
    //a->b, temp c , n cake
    if(n==1){
        printf("%c -> %c\n", a, b);
    }
    else{
        hanio(n-1, a, c, b);
        hanio(1, a, b, c);
        hanio(n-1, c, b, a);
    }
}