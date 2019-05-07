/*
 * find_solu.c
 *
 *  Created on: May 11, 2019
 *      Author: young
 */
//穷举问题
#include<stdio.h>

int main(void){

	int child, men, women;

	for(men=0; men<=45; men++){
		for(women=0;women<=45;women++){
			child = 45-women-men;
			if (men*3+women*2+child*0.5==45){
				printf("男人：%d，女人：%d，孩子：%d\n", men, women, child);

			}
		}
	}

	return 0;
}

