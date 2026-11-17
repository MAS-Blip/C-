#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 1;i <= n;i++)
//	{
//		
//		for (int j = 1;j <= n - i ;j++)
//			printf(" ");
//		for (int k = 1;k <=2 * i - 1;k++)
//			printf("%d",i%10);
//		printf("\n");
//
//	}
//	return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 1;i <= n;i++)
//	{
//		if (i % 3 == 1 && i % 4 == 2 && i % 5 == 3)
//		{
//			printf("%d", i);
//			printf("\n");
//		}
//
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//
//{
//	int n;
//	scanf("%d", &n);
//	int a;
//	int count1=0;
//	int count2 = 0;
//	while (n--)
//	{
//		scanf("%d", &a);
//		if (a > 0)
//			count1++;
//		else if (a < 0)
//			count2++;
//
//	}
//	printf("%d %d", count1, count2);
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	long long int p, q;
//	while (N--)
//	{
//		scanf("%lld%lld", &p, &q);
//		if (p <= q)
//		{
//			for (long long int i = p;i <= q;i++)
//			{
//				printf("%lld ", i);
//			}
//			printf("\n");
//		}
//		else
//		{
//			for (long long int i = q;i <= p;i++)
//			{
//				printf("%lld ", i);
//			}
//			printf("\n\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int put_int_sum(int a ,int b)
//{
//	if (a == 0 && b == 0)
//		return 0;
//	printf("%d\n", a + b);
//	return 1;
//}

//#include<stdio.h>
//int is_primer(int num)
//{
//
//	if (num == 2||num==3)
//		return 1;
//	else if (num == 1||num%2==0||num%3==0)
//		return 0;
//	
//	else
//		for (int i = 5;i * i <= num;i += 6)
//		{
//			if (num % i == 0||num%(i+2)==0)
//				return 0;
//		}
//	return 1;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	while (1)
//	{
//		scanf("%d", &n);
//		if (n == 0)
//			return 0;
//		if(n%2==0)
//			for (int i = 1;i <= n;i++)
//			{
//				for (int j = 1;j <= n - i;j++)
//				{
//					printf(" ");
//				}
//				for (int k = 1;k <= 2 * i - 1;k++)
//				{
//					printf("+");
//				}
//				printf("\n");
//			}
//		else
//		{
//			for (int i = 1;i <= n;i++)
//			{
//				for (int j = 1;j <= i - 1;j++)
//				{
//					printf(" ");
//				}
//				for (int k = 1;k <= (n - i) * 2 + 1;k++)
//				{
//					printf("+");
//				}
//				printf("\n");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		int max = a > b ? a : b;
//		int min= a < b ? a : b;
//		while (min != 0)
//		{
//			int temp = max % min;
//			max = min;
//			min = temp;
//		}
//		printf("%d %d\n", max, a * b / max);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//void is_pyth(int a, int b,int count)
//{
//	int flag = 1;
//	printf("case %d:",count);
//	for (int i = a;i < b;i++)
//	{
//		for (int j = i;j <= b;j++)
//		{
//			int sum = i * i + j * j;
//			int k = (int)(sqrt(sum) + 0.5);
//			
//				if (sum == k * k&&k<=b&&k>j)
//				{
//					if (flag == 0)
//						printf(";");
//					printf("%d,%d,%d", i, j, k);
//					flag = 0;
//				}
//		}
//	}
//	if (flag)
//			printf("No pythagorean triple\n");
//	else
//
//	printf("\n");
//
//
//
//}
//int main()
//{
//	int a, b;
//	int count = 1;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		
//		is_pyth(a, b,count);
//		count++;
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int number(int n, int m)
//{
//	int a, b;
//	int count = 0;
//	for (a = 0;a <= m;a++)
//	{
//		for (b = 0;b <= n;b++)
//			if (a * a + b == n && a + b * b == m)
//				count++;
//	}
//	return count;
//}
//int main()
//{
//	int n, m;
//	while (scanf("%d%d", &n, &m) != EOF)
//	{
//		printf("%d\n",number(n, m));
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int M;
//	int count = 1;
//	while (scanf("%d", &M) != EOF)
//	{
//		int sum = 0;
//		if (M >= 1000)
//		{
//			printf("case %d:%d\n", count, sum);
//			count++;
//			continue;
//		}
//
//		for (int i = 100;i <= 999;i++) {
//			if (i % M == 0)
//			{
//				if (i % 10 == i / 10 % 10 || i % 10 == i / 10 / 10 % 10 || i / 10 % 10 == i / 10 / 10 % 10)
//					continue;
//				else
//
//				 sum += i;
//			}
//		}
//		printf("case %d:%d\n", count, sum);
//		count++;
//	}
//	return 0;
//}
//
#include<stdio.h>
int main()
{
	
	long long int a, b, c, d, m, n;
	printf("COCK,HEN,CHICK,MONEY,CHICKS\n");
	while (scanf("%lld,%lld,%lld/%lld,%lld,%lld", &a, &b, &c, &d, &m, &n) != EOF)
	{
		
		long long int x, y, z;
		int flag = 0;
		for (x = 0;x*a <= m;x++)
		{

			for (y = 0;y*b+x*a<= m;y++)
			{
				z = n - x - y;
				if (a * x + b * y +c*z/d  == m&&z%d==0)
				{
					if (flag == 0)

						printf("COCKS,HENS,CHICKS\n");

					printf("%lld,%lld,%lld\n", x, y, z);
					flag = 1;
				}
			}
		}
		if (flag == 0)
			printf("Cannot buy!\n");
		printf("\n");
	}
	return 0;
}

