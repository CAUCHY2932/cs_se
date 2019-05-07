#include<stdio.h>

//a[0]<->a[n-1], a[1]<->a[n-2]...

int main(void){
    int i, a[10], n;

    void reverse(int p[], int n);

    printf("输入n:\n");

    scanf("%d", &n);

    printf("输入%d 个整数:\n", n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    reverse(a, n);

    for(i=0;i<n;i++){
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}


void reverse(int p[], int n){
    int i, t;
    for(i=0;i<n/2;i++){
        t = p[i];
        p[i] = p[n-i-1];
        p[n-i-1] =t;
    }

}