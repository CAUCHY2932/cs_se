//通过指针运算找出最大的值

#include<stdio.h>

int main(void){
    int max;
    int x;
    int y;
    int *pmax;
    int *px;
    int *py;

    scanf("%d %d", &x, &y);
    px = &x;
    py = &y;
    pmax = &max;

    pmax = px;
    if(pmax < py){
        pmax = py;

    }
    printf("max =%d", max);
    

    return 0;
}