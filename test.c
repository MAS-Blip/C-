#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d,%d", &a, &b);
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}
//int main() {
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%d%*c%d%c%d"
//}
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	if (num < 0)
//		printf("负数");
//	else {
//		if (num == 0)
//			printf("零\n");
//	    else
//			printf("正数\n");
//
//		
//
//
//	}
//    return 0;
//
//}
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0) {
//		if (num % 2 == 1)
//			printf("正奇数");
//		else
//			printf("正偶数");
//	}
//	else
//			printf("负数");
//			return 0;
//
//}
////int main() {
////	int age = 0;
////	scanf("%d", &age);
////	if (age < 18)
////		printf("未成年");
////	e
////	return 0;
////}
//int main() {
//	int a = 'A';
//	
//	printf("%c",a);
//	return 0;
//}
//int main() {
//	int age = 0;
//	scanf("%d", &age);
//	if (18 <= age && age <= 36)
//		printf("青年");
//	return 0;
//
//}
//int main() {
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		printf("闰年");
//	else
//		printf("平年");
//	return 0;
//}
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//		printf("星期一");
//			break;
//	case 2:
//		printf("星期二");
//		break;    
//	}
//
//int main(){
//	int day = 0;
//	scanf("%d", &day);
//
//
//}
//int main() {
//	while (1) {
//		printf("hehe\n");
//	}
//}
////int main() {
////	int i = 0;
////	while (i < 10)
////		printf("%d\n", ++i);
////	return 0;
////
////
////	
////
////
////}
//int main() {
//	int i = 0;
//	while (i < 10) {
//		printf("%d\n", ++i);
//
//	}
//	return 0;
//}
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	while (a) {
//		printf("%d\n", a % 10);
//		a=a / 10;
//	}
//	return 0;
//}
//int main() {
//	for (int a = 0;a <= 10;a++)
//		printf("%d\n",a);
//	return(0);
//}
//int main() {
//	int a, sum;
//	for (a = 3, sum = 0;a <= 100;a = a + 3)
//		sum = sum + a;
//		printf("%d\n", sum);
//	return 0;
//
//}
//int main() {
//	int a, sum;
//	for (a = 0, sum = 0;a <= 100;a++) {
//		if (a % 3 == 0)
//			sum += a;
//	}
//	printf("%d\n",sum);
//	return 0;
//
//}

//int main() {
//	int a = 0;
//	do
//		printf("%-2d", a++);
//	while (a <=10);
//	return 0;
//}

////int main() {
////	int a = 0;
////	int count = 0;
////	scanf("%d", &a);
////	do {
////		a = a / 10;
////		count++;
////	} 
////	while (a > 0);
////	printf("%d", count);
////		return 0;
////}

//int main() {
//	int i = 0;
//	int j = 0;
//
//	for (i = 101;i <= 200;i+=2) {
//		int flag = 1;
//
//		for (j = 2;j<= sqrt(i);j++) {
//			if (i % j == 0) {
//				flag = 0;
//
//				break;
//			}
//
//		}
//		if (flag)
//			printf("%-4d", i);
//
//	}
//	return 0;
//}

int main()
{
	char input[20];
	system("shutdown -s -t 60");
	again:
	printf("请输入马俊爸爸，否则电脑将在一分钟内关机\n");
	scanf("%s", input);
	if(strcmp(input,"马俊爸爸")==0)
		{
		system("shutdown -a");
			printf("哎，好儿子（很乖哦）\n");
		}
	else
	{
		printf("不乖哦，不认识爸爸了吗？\n");
			goto again;
	}
		

	return 0;

}