#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int* a = (int*)calloc(n, sizeof(int));
//	if (a == NULL)
//	{
//		perror("malloc:");
//		return 1;
//	}
//	else
//	{
//		for (int i = 0;i < n;i++)
//		{
//			printf("%d ", a[i]);
//		}
//	}
//	printf("\n");
//	free(a);
//	a = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* a = malloc(sizeof(int) * 5);
//	if (a == NULL)
//	{
//		perror("malloc:");
//			return 1;
//	}
//	else
//	{
//		for (int i = 0;i < 5;i++)
//		{
//			a[i] = i + 1;
//			printf("%d ", a[i]);
//		}
//	}
//	printf("\n");
//	int* tmp = realloc(a, sizeof(int) * 10);
//	if (tmp == NULL)
//	{
//		perror("realloc:");
//		return 1;
//	}
//	else
//	{
//		a = tmp;
//		for (int i = 5;i < 10;i++)
//		{
//			a[i] = i + 1;
//		}
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	free(a);
//	a = NULL;
//	return 0;
//}

//int main()
//{
//	int capacity = 2;
//	int size = 0;
//	int* a = malloc(sizeof(int) * capacity);
//	if (a == NULL)
//	{
//		perror("malloc:");
//		return 1;
//	}
//	int n;
//	for(size=0;;size++)
//	{
//		if (size == capacity)
//		{
//			int* tmp = realloc(a, 2 * capacity*sizeof(int));
//			if (tmp == NULL)
//			{
//				perror("realloc");
//				free(a);
//				a = NULL;
//				return 1;
//			}
//			else
//			{
//				a = tmp;
//				capacity *= 2;
//			}
//		}
//		scanf("%d", &n);
//		if (n == -1)
//		    break;
//		a[size] = n;
//	
//
//	}
//	for (int i = 0;i < size;i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n%d", size);
//	free(a);
//	a = NULL;
//	return 0;
//}

//int main()
//{
//	int(*a)[5] = malloc(sizeof(int) * 3 * 5);
//	if (a == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//
//	return 0;
//}
//int judge(int* p)
//{
//	if (p == NULL)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int* a = malloc(sizeof(int) * 5);
//	int* b = malloc(sizeof(int) * 5);
//	int* c = malloc(sizeof(int) * 5);
//	if (judge(a))
//		return 1;
//	if (judge(b))
//		return 1;
//	if (judge(c))
//		return 1;
//	int* p[3] = { a,b,c };
//	return 0;
//}

//{
//    return x + y;
//
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int divi(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int x, y;
//
//	int(*p[5])(int, int) = { 0, add,sub, mul, divi };
//	int input = 0;
//	printf("*************************\n");
//	printf(" 1:add 2:sub \n");
//	printf(" 3:mul 4:div \n");
//	printf(" 0:exit \n");
//	printf("*************************\n");
//	do
//	{
//		printf("请选择：\n");
//		scanf("%d", &input);
//		if (input <= 4 && input >= 1)
//		{
//			printf("请两个整数：\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", p[input](x, y));
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("shurucuowu,请重新输入\n");
//		}
//
//	} while (input);
//	return 0;
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	
//	int* p = malloc(sizeof(int) * n);
//	for (int i = n-1;i >=0 ;i--)
//	{
//		scanf("%d", p+i);
//	}
//	for (int i= 0;i < n;i++)
//	{
//		if (i == 0)
//			printf("%d", p[i]);
//		printf(" %d", p[i]);
//	}
//	return 0;
//}
//
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int arr[10000];
//	for (int i = 0;i < N;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int i;
//	while (scanf("%d", &i) != EOF)
//	{
//		if (i > N||i<1)
//			printf("OUT OF RANGE\n");
//		else
//			printf("%d\n", arr[i - 1]);
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//
//    long long int a, b, c, d, m, n;
//    printf("COCK,HEN,CHICK,MONEY,CHICKS\n");
//    char header[100];
//    if (scanf(" %[^\n]", header) != 1) return 0;
//    while (scanf("%lld,%lld,%lld/%lld,%lld,%lld", &a, &b, &c, &d, &m, &n) != EOF)
//    {
//
//        long long int x, y, z;
//        int flag = 0;
//        for (x = 0;x * a <= m;x++)
//        {
//
//            for (y = 0;y * b + x * a <= m;y++)
//            {
//                z = n - x - y;
//                if (a * x + b * y + c * z / d == m && z % d == 0)
//                {
//                    if (flag == 0)
//
//                        printf("COCKS,HENS,CHICKS\n");
//
//                    printf("%lld,%lld,%lld\n", x, y, z);
//                    flag = 1;
//                }
//            }
//        }
//        if (flag == 0)
//            printf("Cannot buy!\n");
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    
//    char header[100];
//    if (scanf(" %[^\n]", header) != 1) return 0;
//
//    long long a, b, c, d, m, n;
//   
//    while (scanf("%lld,%lld,%lld/%lld,%lld,%lld", &a, &b, &c, &d, &m, &n) != EOF)
//    {
//        int flag = 0;
//
//       
//        long long A = a * d - c;
//        long long B = b * d - c;
//        long long C = m * d - c * n;
//
//        
//        long long limit = m/a;
//        if (limit>n) {
//            limit = n;
//        }
//
//       
//        for (long long x = 0; x <= limit; x++)
//        {
//            long long numerator = C - A * x;
//
//           
//            if (numerator % B == 0)
//            {
//                long long y = numerator / B;
//
//    
//                if (y >= 0)
//                {
//                    long long z = n - x - y; 
//
//                    
//                    if (z >= 0 && z % d == 0)
//                    {
//                        if (flag == 0) {
//                            printf("COCKS,HENS,CHICKS\n");
//                        }
//                        printf("%lld,%lld,%lld\n", x, y, z);
//                        flag = 1;
//                    }
//                }
//            }
//        }
//
//       
//        if (flag == 0) {
//            printf("Cannot buy!\n");
//        }
//
//       
//        printf("\n");
//    }
//    return 0;
//}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        long long int mul = 1;
        for (int i = 2;i <= n;i++)
        {

            mul *= i;
        }
        int count = 0;
        while (mul)
        {

            if (mul % 10 == 0)
            {
                count++;
                mul /= 10;

            }
            else
                break;
        }
        printf("%d\n", count);
    }
    return 0;
}