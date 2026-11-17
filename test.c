#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int b;
//	scanf("%d", &b);
//	int arr[40001];
//	for (int i = 0;i < 4 * n;i++) {
//		arr[i] = (b >> i) & 1;
//	}
//	int count = 0;
//	for (int i = 0;i < 4 * n;i += 4)
//	{
//		if (arr[i] + arr[i + 1] * 2 + arr[i + 2] * 4 + arr[i + 3] * 8 == 10){
//			count++;
//		}
//	}
//	printf("%d",count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	long long int N;
//	
//	scanf("%lld", &N);
//	long long int M=N;
//	long long int mul=1;
//	while (N)
//	{
//		int add = 0;
//		while (N) {
//			if (N % 10 % 2 == 0) {
//				add += N % 10 ;
//				N = N / 10;
//			}
//
//			else 
//				break;
//		}
//		if(add!=0)
//		mul *= add;
//	
//	add = 0;
//	while (N) {
//		if (N % 10 % 2 == 1) {
//			add += N % 10 ;
//			N = N / 10;
//		}
//
//		else
//
//			break;
//	}
//	if(add!=0)
//	mul *= add;
//}
//	printf("%lld", mul);
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int conceal = 0;
//	int count = 0;
//	int N;
//	scanf("%d", &N);
//	int i = 1;
//	while (1)
//	{
//		int flag = 0;
//		int m = i;
//		while (m) {
//			if (m % 10 == 3) {
//				flag = 1;
//				
//			}
//			m = m / 10;
//		}
//		if (i % 3 == 0 || flag==1)
//			conceal++;
//		else if (conceal >= 2)
//		{
//			count += 2;
//		conceal = 0;
//	}
//		else
//			count++;
//		if (count >= N) {
//			printf("%d", i);
//			break;
//		}
//		i++;
//	}
//	
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int P, Q;
//	scanf("%d%d", &P, &Q);
//	int arr[10000] = { 1,1 };
//	do
//	{
//		int i = 2;
//		arr[i] = arr[i - 1] + arr[i - 2];
//		if (arr[i] == Q && arr[i - 1] == P) {
//			printf("%d", i + 1);
//			return 0;
//		}
//		else if (arr[i] == Q && arr[i - 1] != P) {
//			printf("-1");
//			return 0;
//		}
//		else if (arr[i] > Q) {
//			printf("-1");
//			return 0;
//		}
//	} while (1);
//
//
//	
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
int int_cmp(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}
int main()
{
	int T;
	scanf("%d", &T);
	int n;
	while (T)
	{
		int count = 0;
		scanf("%d", &n);
		if (n >= 10000||n<=1000) {
			printf("-1\n");
			T--;
			continue;
		}
		int arr[4];
		int sub = n;
		
		
		while (sub != 6174) {
			
			for (int i = 0;i < 4;i++) {
				arr[i] = sub % 10;
				sub /= 10;
			}
			
			qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
			if (count == 0) {
				if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3])
				{
					printf("-1\n");
					break;
				}
			}
			int max = arr[0] + arr[1] * 10 + arr[2] * 100 + arr[3] * 1000;
			int min = arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3];
			sub = max - min;
			count++;
		}
		if(sub==6174)
			printf("%d\n", count);
			
		T--;
	}
	return 0;
}