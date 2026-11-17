#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void menu() {
	printf("********************\n");
	printf("******1.play********\n");
	printf("******0,exit********\n");
	printf("********************\n");
	printf("请选择： ");
}
void game() {
	int r = rand () % 100 + 1;
	int guess;

	printf("请猜数字(1-100)： ");
	while (1) {
		scanf("%d", &guess);
		if (guess >= r)
			printf("猜大了\n");
		if (guess < r)
			printf("猜小了\n");
		if(guess == r) {
			printf("gongxinidaduile\n");
			break;
		}
	}
}