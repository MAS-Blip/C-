#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
#include<stdlib.h>
#include<time.h>

//int main() {
//	int arr[10];
//	for (int i = 0;i < 10;i++) {
//		scanf("%d", &arr[i]);
//		
//	}
//	int max = arr[0];
//	for (int i = 1;i < 10;i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//
//	return 0;
//}


//int main(){
//	float sum=0;
//
//	float a;
//
//	for (int b=1;b <= 100;b++) {
//		a = 1.0 / b;
//		if (b % 2 == 0) {
//			sum -= a;
//		}
//		if (b % 2 == 1) {
//			sum += a;
//		}
//	}
//	printf("%f", sum);
//
//
//
//	return 0;
//}


////int main() {
////
////
////	for (int i = 101;i <= 200;i+=2) {
////		int is_prime = 1;

////		else {
////			for (int j = 3;j * j < i;j+=2) {
////				if (i % j == 0) {
////					is_prime = 0;
////					break;
////
////				}
////			}
////			if (is_prime)
////
////				printf("%d ",i);
////		
////		}
////	}
////
////	return 0;
////}

//int main() {
//	int a, b,temp;
////	scanf("%d %d", &a, &b);
////
////	while (b != 0) {
////		temp = a % b;
////		a = b;
////		b = temp;
////	}
////	printf("%d", a);
////	return 0;
////}
////
////int main() {
////	int n = 0;
////	int count = 0;
////	scanf("%d", &n);
////	for (;n != 0;count++) {
////		n = n / 10;
////	}
////	printf(" %d", count);
////	return 0;
////}
//
//int main() {
//	srand((unsigned int)time(NULL));
//	
//	while (1) {
//		int input;
//
//		menu();
//		scanf("%d", &input);
//		if (input==1)
//			game();
//		else if (input == 0)
//			printf("退出游戏\n");
//		else
//			printf("输入错误请重新没输入");
//	}
//	
//	return 0;
//}


//int main() {
//    int arr[10];
//    for (int i = 0;i < 10;i++) {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 9;i >= 0;i--) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//
//
//}

int main() {
	int arr[10];
	int sum=0;
	for (int i = 0;i < 10;i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];

	}
	printf("%f", sum /10.0);

	return 0;
}


//}
//int main() {
//	int m;
//	scanf("%d", &m);
//	int arr1[m],arr2[m];
//	for()
