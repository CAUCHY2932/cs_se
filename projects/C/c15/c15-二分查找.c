//
//  main.c
//  c15
//
//  Created by Young on 2019/5/12.
//  Copyright © 2019 Young. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int low, high, mid, n=10, x;
    
    printf("请输入x:\n");
    scanf("%d", &x);
    
    low = 0;
    high = n-1;
    
    while(low<=high){
        mid = (low+high)/2;
        if(x==a[mid]){
            break;
        }
        else if(x<a[mid]){
            high = mid -1;
        }
        else{
            low = mid +1;
        }
    }
    if(low<=high){
        printf("下标是：%d\n", mid);
        
    }
    else{
        printf("not found\n");
    }
    // insert code here...
//    printf("Hello, World!\n");
    return 0;
}
