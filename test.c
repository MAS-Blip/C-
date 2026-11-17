#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		printf("LEAP");
//	else
//		printf("COMMON");
//
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	int is_pirme = 1;
//	if ((n % 2 == 0&&n!=2)||n<=1)
//		printf("不是素数");
//	else if (n ==2)
//		printf("是素数");
//	else
//	{
//		for (i = 2;i * i <= n;i+=2)
//		{
//			if (n % i == 0) {
//				is_pirme = 0;
//				break;
//			}
//
//		}
//		if (is_pirme)
//			printf("是素数");
//		else
//			printf("不是素数");
//
//	}
//	return 0;
//}
//	
//
//
//	

//int main()
//{
//	int a;
//	int b = 1;
//	int result = 1;
//	for (a = 1;;a++) {
//		
//		for(b=1;b<=a;b++){
//			result = a * b;
//			printf("%d*%d=%-3d", b,a , result);	
//		} 
//		printf("\n");
//		if (result == 81) {
//			break;
//		}
//	}
//	return 0;
//}


int main()
{
	int a = 3;
	printf("%d*a", a);

	return 0;
}