#include<stdio.h>

// char *change(char s[][20]);
int main(void)
{
    int i;
    char *poem[4] ={"一叶轻舟向东流", "帆梢请我杨柳手","风前碧波为起舞","顺水任从雅克油"};

    char mean[10];

    for(i=0;i<4;i++){
        mean[2*i]= *(poem[i]);
        mean[2*i+1] = *(poem[i]+1);
    }
    mean[2*i]='\0';
    printf("%s\n", mean);

    return 0;
}

