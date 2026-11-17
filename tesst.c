#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//
//{
//	int y, m, d;
//	while (scanf("%d%d%d", &y, &m, &d) != EOF) {
//		printf("My Birthday is %04d/%02d/%02d.\n", y, m, d);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a, b, c;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	double p = (a + b + c) / 2;
//	printf("%.3lf", sqrt(p * (p - a) * (p - b) * (p - c)));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double h;
//	double s;
//	scanf("%lf%lf", &h, &s);
//
//	double H = 0.5 * 9.8 * s * s;
//	if (H < h)
//		printf("It drops by %.2lf meters.", H);
//	else
//		printf("It lands.");
//
//	
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double m;
//	scanf("%lf", &m);
//	printf("%.0lf", round(m));
//	return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int m;
//	while (scanf("%d", &m) != EOF) {
//		if (m < 0 || m>100) {
//			printf("Error");
//			continue;
//		}
//		else{
//			switch (m / 10) {
//			case 10:
//				printf("Ecellent\n");
//				break;
//			case 8:
//				printf("Good\n");
//				break;
//			case 9:
//				printf("Excellent\n");
//				break;
//			case 7:
//				printf("Average\n");
//				break;
//			case 6:
//				printf("Pass\n");
//				break;
//			default:
//				printf("Failing\n");
//				break;
//			}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int a, b;
//	char c;
//	while (scanf("%d%c%d", &a, &c, &b) != EOF)
//	{
//		if (a == 0 && b == 0&&c==' ')
//			break;
//		switch (c) {
//		case'+':
//			printf("%d\n", a + b);
//			break;
//		case'*':
//			printf("%d\n", a * b);
//			break;
//		case'-':
//			printf("%d\n", a - b);
//			break;
//		case'/':
//			printf("%d\n", a / b);
//			break;
//		case '%': 
//			printf("%d\n", a % b);
//			break;
//		default:
//				printf("invalid op\n");
//				break;
//
//		}
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	printf("=====\n");
//	for (int i = n;i >= m;i--) {
//		int flag = 1;
//		if (i == 0 || i == 1)
//			continue;
//		else
//			for (int j = 2;j*j <=i;j++) {
//				if (i % j == 0)
//				{
//					flag = 0;
//					break;
//			    }
//			}
//		if (flag==1  ||i==2)
//			printf("%d\n", i);
//	}
//	printf("=====\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a=0, b=0, c=0;
//	while (scanf("%d%d%d", &a, &b, &c) != EOF)
//	{
//		if (a == 0 && b == 0 && c == 0)
//			return 0;
//		else {
//			if (a + b > c && a + c > b && b + c > a) {
//				
//				if (a == b && b == c)
//					printf("a equileteral triangle\n");
//				else if (b == a || b == c || a == c)
//					printf("a isosceles triangle\n");
//				else if (a * a + b * b == c * c || a * a == b * b + c * c || a * a + c * c == b * b)
//					printf("a right triangle\n");
//
//				else
//					printf("a triangle\n");
//					
//			}
//			else
//				printf("not a triangle\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF) {
//		if (n == 0)
//			return 0;
//		
//		switch (n % 10) {
//		case 0:
//			printf("%dth\n", n);
//			break;
//		case 1:
//			printf("%dst\n", n);
//			break;
//		case 2:
//			printf("%dnd\n", n);
//			break;
//		case 3:
//			printf("%drd\n", n);
//			break;
//		case 4:
//			printf("%dth\n", n);
//			break;
//		case 5:
//			printf("%dth\n", n);
//			break;
//		case 6:
//			printf("%dth\n", n);
//			break;
//		case 7:
//			printf("%dth\n", n);
//			break;
//		case 8:
//			printf("%dth\n", n);
//			break;
//		case 9:
//			printf("%dth\n", n);
//			break;
//
//		
//
//		}
//	}
//
//	re
// turn 0;
//}
//#include<stdio.h>
//int main()
//{
//	int N;
//	
//	int n;
//	while (scanf("%d", &N) != EOF) {
//		if (N == 0)
//			return 0;
//		else {
//			int sum = 0;
//			while (N--)
//			{
//				scanf("%d", &n);
//				sum += n;
//
//
//			}
//			printf("%d\n", sum);
//		}
//		
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int N;
//
//	int n;
//	int M;
//	scanf("%d", &M);
//	while (M--) {
//		scanf("%d", &N);
//			int sum = 0;
//			while (N--)
//			{
//				scanf("%d", &n);
//				sum += n;
//
//
//			}
//			printf("%d\n", sum);
//
//		
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int max, min;
//	int m;
//	for (int i = 1;i <= n;i++)
//	{
//		scanf("%d", &m);
//		if (i == 1) {
//			max = m;
//			min = m;
//		}
//		if (m > max)
//			max = m;
//		if (m < min)
//			min = m;
//
//	}
//	printf("The maximum number is %d.\nThe minimum number is %d.", max, min);
//	return 0;
//}
#include<stdio.h>
	int main()
	{
		int n;
		scanf("%d", &n);
		for (int i = 1; i <= n;i++)
		{
			for (int j = 1;j <= n - i;j++)
			{
				printf(" ");
			}
			for (int j = 1;j <= 2 * i - 1;j++)
				printf("*");
			printf("\n");
		}

		return 0;
	}