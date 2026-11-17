#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	printf("Hello,World!");
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("  *\n ***\n*****\n ***\n  *");
//	return 0;
//}


//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a;
//	int sum = 0;
//	for (int i = 1;i < n;i++) {
//		scanf("%d", &a);
//		sum += a;
//	}
//	if (n % 2 == 1)
//	{
//		printf("%d", (n + 1) / 2 * n - sum);
//	}
//	else
//		printf("%d", n / 2 * (n + 1) - sum);
//	return 0;
//}

//#include<stdio.h>
//char arr[1000001];
//int main()
//{
//	while (scanf("%s", arr) != 1)
//	{
//		return 0;
//	}
//	int count = 0;
//	int time = 0;
//	for (int i = 0;arr[i]!=0;i++)
//	{
//		if (arr[i] == arr[i - 1])
//			time++;
//		else
//			time = 1;
//		if (time > count)
//			count = time;
//
//	}
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	long long int x, y;
//	long long int sum;
//	
//	while (t--)
//	{
//		scanf("%lld%lld", &x, &y);
//		if (x >= y)
//		{
//			if (x % 2 == 0)
//				sum = x * x - y+1;
//			else
//				sum = (x - 1) * (x - 1) + y;
//		}
//		else
//		{
//			if (y % 2 == 0)
//			{
//				sum = (y - 1) * (y - 1) + x;
//			}
//			else
//				sum = y * y + 1 - x;
//		}
//		printf("%lld\n", sum);
//
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n)
//	{
//		printf("NO");
//
//	}
//	else
//	{
//		printf("%d\n", (n + 1) / 2);
//		printf("1 2 ");
//		for (int i = 4;i <= 3 + (n - 3) / 2 / 2;i++) {
//			printf("%d ", i);
//		}
//		for (int i = n - (n - 3) / 2 / 2 + 1;i <= n;i++)
//		{
//			printf("%d ", i);
//		}
//		printf("\n");
//		printf("%d\n", (n - 1) / 2);
//		printf("3 ");
//		for (int i = 4 + (n - 3) / 2 / 2;i <= n - (n - 3) / 2 / 2;i++)
//		{
//			printf("%d ", i);
//		}
//		printf("\n");
//
//	}
//	return 0;
//}

//#include<stdio.h>
/*nt judge(int n)
{
	if((n%4==0&&n%100!=0)||n%400==0)
		return 1;
	else
		return 0;
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int sum = 0;
	for (int i = a+1;i < b;i++)
	{
		if (judge(i))
			sum += i;
	}
	printf("%d", sum);
	return 0;

}*/

//#include<stdio.h>
//int main()
//{
//	int arr[101];
//	int i = 0;
//	do {
//		scanf("%d", &arr[i]);
//	} while (arr[i++]);
//	for (int j = i - 2;j >= 0;j--)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[5][5];
//	for(int =0;)
//
//	return 0;
//}
//#include<stdio.h>
//void dectobin(int n) {
//
//	if (n / 2 > 0) {
//		dectobin(n / 2);
//	}
//	printf("%d", n % 2);
//
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	dectobin(n);
//	return 0;
//}

#include<stdio.h>
void f(int n) {
    if (n == 1) {
        printf("%dx%d=%2d", 1, 1, 1);
        printf("\n");
    }
    else {
        f(n - 1);
        for (int k = 1;k <= n;k++) {
            if (k < n)
                printf("%dx%d=%2d ", k, n, k * n);
            else
                printf("%dx%d=%2d", k, n, k * n);
        }
        printf("\n");
    }

}
int main() {
    int n;
    int k = 1;
    scanf("%d", &n);
   
        f(n);
     

    return 0;
}