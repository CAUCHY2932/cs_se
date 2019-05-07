#include<stdio.h>
//穷举算法，小孩搬砖问题

int main(void){

    int child;
    int men;
    int women;

    for(men=0; men<=45; men++){
        for(women=0; child<=45;child++){
            child = 45-men-women;
            if (men*3 +women*2 +child*0.5==45){
                printf("men=%d, women=%d, child=%d", men, women, child);
            }
        }

    }
    return 0;
}
