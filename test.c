#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
//int main : ()
//{
//	int input;
//	do {
//	
//	printf("............................\n");
//	
//	return 0;
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("%d\n", rand()%100+1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	return 0;
//}

////int main()
////{
////	srand((unsigned int)time（NULL));
////	printf(".....................\n");
////	printf("..........1.play......\n");
////	printf("..........2.exit.....\n");
////	printf(".....................\n");
////	printf(".....................\n");
////	int intput = 0;
////	scanf("%d", &input);
////	do {
////
////		switch (input)
////		{
////		case 1:
////			game();
////			break;
////		case 0:
////			break;
////		default:
////
////			printf("输出错误\n");
////		}
////
//
//	} while (input);
//	return 0;
//}
//void game() {
//	int
//}

//int main()
//{
//	int a,b;
//	scanf("%d=%d", &a, &b);
//	printf("%d X%d", a, b);
//	return 0;
//}
////void game();
////
////int main()
////{
////	srand((unsigned int)time(NULL));
////	int input;
////	
////	do {
////		printf(".....................\n");
////		printf("..........1.play.....\n");
////		printf("..........0.exit.....\n");
////		printf(".....................\n");
////		printf(".....................\n");
////		printf("请输入选项:");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 1:
////			printf("请猜数字(你有五次机会,输入我是猪可以增加一次机会)\n");
////			game();
////			break;
////		case 0:
////			printf("退出游戏\n");
////			break;
////		default:
////			printf("请重新输入\n");
////			break;
////		}
////
////	}
////
////		while (input);
////
////return 0;
////}
////
////	void game()
////	{
////		int guess = 0;
////		int r = rand() % 100 + 1;
////		int count = 5;
////
////		while (count) {
////			scanf("%d", &guess);
////			if (r > guess)
////				printf("猜小了\n");
////			else if (r < guess)
////				printf("猜大了\n");
////			else {
////				printf("恭喜你答对了\n\n");
////				break;
////			}
////			
////			count--;
////			printf("你还剩余%d次机会\n", count);
////			
////			
////
////			    
////
////
////		}
////		if (count == 0)
////		{
////			printf("很遗憾，游戏失败。\n");
////			printf("真是是答案是%d\n\n", r);
////		}
////	}
////
////

void game();
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input;
//	
//	do {
//		printf(".....................\n");
//		printf("..........1.play.....\n");
//		printf("..........0.exit.....\n");
//		printf(".....................\n");
//		printf(".....................\n");
//		printf("请输入选项:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请猜数字(你有五次机会,输入我是猪可以增加一次机会)\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("请重新输入\n");
//			break;
//		}
//
//	}
//
//		while (input);
//
//return 0;
//}
//
//	void game()
//	{
//		int guess = 0;
//		int r = rand() % 100 + 1;
//		int count = 5;
//
//		while (count) {
//			scanf("%d", &guess);
//			if (r > guess)
//				printf("猜小了\n");
//			else if (r < guess)
//				printf("猜大了\n");
//			else {
//				printf("恭喜你答对了\n\n");
//				break;
//			}
//			
//			count--;
//			printf("你还剩余%d次机会\n", count);
//			
//			
//
//			    
//
//
//		}
//		if (count == 0)
//		{
//			printf("很遗憾，游戏失败。\n");
//			printf("真是是答案是%d\n\n", r);
//		}
//	}
//
//


int main()
{
    long long int n = 0;
    scanf("%d", &n);
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
            printf("%d ", n);
        }
        else {
            n = n * 3 + 1;
            printf("%d ", n);
        }
    }

    return 0;
}
