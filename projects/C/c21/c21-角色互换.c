#include<stdio.h>

int main(void){

    int a=1, b=2;
    int *pa = &a,*pb =&b;

    void swap1(int x, int y);
    void swap2(int *px, int *py);
    void swap3(int *px, int *py);

    swap1(a, b);
    printf("交换函数1执行之后:a= %d, b=%d\n", a, b);
    
    a=1;
    b =2;
    swap2(pa, pb);
    printf("交换函数2执行之后:a=%d, b=%d\n", a, b);

    a=1;
    b =2;
    swap3(pa, pb);
    printf("交换函数3执行之后:a=%d, b=%d\n", a, b);
    return 0;
}

void swap1(int x, int y){
    int t;
    t = x;
    x=y;
    y=t;

}

void swap2(int *px, int *py){

    int t;
    t = *px;
    *px=*py;
    *py =t;

}

void swap3(int *px, int *py){
    int *pt;
    pt = px;
    px = py;
    py =pt;

}