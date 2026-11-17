#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int c(long long int n, long long int k)
//{
//    if (n == k)
//        return 1;
//    else if (k == 1)
//        return n;
//    else if (k == 0)
//        return 1;
//    else
//        return c(n - 1, k - 1) + c(n - 1, k);
//
//}
//int main()
//{
//    long long int n, k;
//    scanf("%lld%lld", &n, &k);
//    if (k > n)
//    {
//        printf("0");
//        return 0;
//    }
//
//    if (k * 2 > n)
//        k = n - k;
//    long long int result = c(n, k);
//    printf("%lld", result);
//    return 0;
//}

//#include<stdio.h>
//void my_()
//{
//	int M;
//	int f(int);
//	if (scanf("%d", &M) == 1)
//	{
//		printf("%d\n", f(M));
//		my_();
//	}
//}
//int f(int m)
//{
//	if (m == 1)
//		return 1;
//	else if (m == 2)
//		return 2;
//	else
//		return f(m - 1) + f(m - 2);
//}
//int main()
//{
//	
//	my_();
//	
//	return 0;
//}
//
//

//#include<stdio.h>
//int gcd(int A, int B)
//{
//	if (A % B == 0)
//		return B;
//	else
//		return gcd(B, A % B);
//}
//int main()
//{
//	int A, B;
//	scanf("%d%d", &A, &B);
//	if (A < B)
//	{
//		int temp = A;
//		A = B;
//		B = temp;
//
//	}
//	int min=gcd(A, B);
//	int max = A * B / min;
//	printf("%d %d", min, max);
//
//	return 0;
//}

//#include<stdio.h>
//void hanoi(int plate, int a, int b, int c)
//{
//	if (plate == 1)
//		printf("   plate %d : from %d to %d\n", plate, a, c);
//	else
//	{
//		hanoi(plate - 1, a, c, b);
//		printf("   plate %d : from %d to %d\n", plate, a, c);
//		hanoi(plate - 1, b, a, c);
//	}
//}
//int main()/*
//{
//
//	int plate, a, b, c;
//	int count = 1;
//	while (scanf("%d%d%d%d", &plate, &a, &b, &c) != EOF)
//	{
//		printf("case %d :\n", count);
//		hanoi(plate, a, b, c);
//		count++;
//		printf("\n");
//	}
//	return 0;
//}*/

//#include<stdio.h>
//unsigned long long Hanoi(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return 2 * Hanoi(n - 1) + 1;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%llu", Hanoi(n));
//	return 0;
//}

//#include<stdio.h>
//
//int digit_sum2(int n)
//{
//    int digit_sum(int);
//    if (n % 10)
//    {
//        return n % 10 + digit_sum(n / 10);
//
//    }
//    else
//        return n;
//}
//int digit_sum(int n)
//{
//    int digit_sum2(int);
//    do
//    {
//        n=digit_sum2(n);
//    } while (n > 9);
//    return n;
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printf("%d", digit_sum(n));
//    return 0;
//}

//#include<stdio.h>
//int er(int n)
//{
//
//}
//int main()
//{
//	unsigned long long n;
//	while (scanf("%llu", &n) != EOF)
//	{
//		int arr[20] = { 0 };
//		int i = 0;
//		do
//		{
//			arr[i] = n % 2;
//
//			i++;
//		} while (n /= 2);
//		for (int k = i - 1;k >= 0;k--)
//		{
//			printf("%d", arr[k]);
//
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int k = 1;k <= 2 * n - 1;k++)
//	{
//		if (k <= n)
//		{
//			int count = 1;
//			for (int i = 1;i <= n - k;i++)
//				printf(" ");
//			for (int i = 1;i <= 2 * k - 1;i++)
//			{
//				printf("%d", count);
//				if (count < k&&i<=k)
//					count++;
//				else
//					count--;
//			}
//		
//		}
//	
//		else
//		{
//			int count = 1;
//			for (int i = 1;i <= k-n;i++)
//			{
//				printf(" ");
//			}
//			for (int i= 1;i <= 2*n-1-(k-n)*2;i++)
//			{
//				printf("%d", count);
//				if (count <=(2 * n - 1 - (k - n) * 2-1)/2&&i<= n-(k-n))
//					count++;
//				else
//					count--;
//
//			}
//		}
//		if(k!=2*n-1)
//		printf("\n");
//
//			 
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int digit_sum2(int n)
//{
//    int digit_sum(int);
//    if (n>9)
//    {
//        return n % 10 + digit_sum(n / 10);
//
//    }
//    else
//        return n;
//}
//int digit_sum(int n)
//{
//    int digit_sum2(int);
//    do
//    {
//        n = digit_sum2(n);
//    } while (n > 9);
//    return n;
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printf("%d", digit_sum(n));
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, m, n;
//	scanf("COCK,HEN,CHICK,MONEY,CHICKS");
//	while (scanf("%d,%d,%d/%d,%d,%d", &a, &b, &c, &d, &m, &n)!=EOF)
//	{
//		int flag = 1;
//		for (int x = 0;x * a <= m;x++)
//		{
//			for (int y = 0;y * b + x * a <= m;y++)
//			{
//				int z = n - x - y;
//				if (x*a+y*b+z*c/d==m&&z*c%d==0)
//				{
//					if (flag)
//					{
//						printf("COCKS,HENS,CHICKS\n");
//						flag = 0;
//					}
//					printf("%d,%d,%d\n", x, y, z);
//				}
//			}
//		}
//		if (flag)
//			printf("Cannot buy!\n");
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	switch (n) {
//	case 1:
//		printf("I love Luogu!");
//		break;
//	case 2:
//		printf("6 4");
//		break;
//	case 3:
//		printf(" 3 12 2");
//		break;
//	case 4:
//		printf("%.6lf",(double) 500 / 6);
//		break;
//	case 5:
//		printf("%g", (double)(260 + 220) / (12 + 20));
//		break;
//	case 6:
//		printf("%g", sqrt(117));
//		break;
//		case 7;
//
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	if (t <= 360)
//		printf("%d", 0);
//	else if (t <= 390)
//		printf("%d", t - 360);
//	else if (t <= 570)
//		printf("%d", 30);
//	else if (t <= 585)
//		printf("%d", t - 540);
//	else if (t <= 645)
//		printf("%d", 45);
//	else
//		printf("%d", t - 600);
//
//	return 0;
//}

#include<stdio.h>
int main()
{
	int sum=0,real=0;
	int saving;
	int budget[12];
	for (int i = 0;i < 12;i++)
	{
		scanf("%d", &budget[i]);
		
	}
	for (int i = 0;i < 12;i++)
	{
		if (real + 300 < budget[i])
		{
			printf("%d", -(i + 1));
				return 0;
		}
		saving= (real + 300 - budget[i])/100*100;
		sum += saving;
		real = (real + 300 - budget[i])%100;
		

	}
	printf("%g", real+sum * 1.2);
	return 0;
}