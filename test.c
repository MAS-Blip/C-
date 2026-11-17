#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int int_cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//int main()
//{
//	int n, d;
//	scanf("%d%d", &n, &d);
//	int arr[1000];
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	qsort(arr, n, sizeof(int), int_cmp);
//	int count = 0;
//	for (int i = 0;i < n - 1;i++)
//	{
//		for (int j = i + 1;j < n;j++) {
//			if (arr[j ] - arr[i] <= d)
//			{
//				count++;
//			}
//			else
//				break;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>
//int is_daffodil(int n)
//{
//	if (n < 100 || n >= 1000)
//		return 0;
//	int sum = 0;
//	int temp = n;
//	while (temp)
//	{
//		sum += (temp % 10) *( temp % 10) * (temp % 10);
//		temp /= 10;
//	}
//	if (n == sum)
//		return 1;
//	else
//		return 0;
//}
//#include<stdio.h>
//int is_leap_year(int n)
//{
//	if((n%4==0&&n%100!=0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//#include<stdio.h>
//int is_vocals(char c)
//{
//	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
//		return 1;
//		
//	else
//		return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int l, m;
//	scanf("%d%d", &l, &m);
//	int arr1[100];
//	int arr2[100];
//	for(int i=0;i<m;i++){
//		scanf("%d%d", &arr1[i], &arr2[i]);
//		
//	}
//	
//	int arr[1001]={0};
//	int count = 0;
//	for (int i = 0;i < m;i++)
//	{
//		int j = arr1[i];
//		for (;j <= arr2[i];j++)
//		{
////			if (arr[j] != 0)
////				continue;
////			else
////			{
////				count++;
////				arr[j] = j;
////			}
////		}
////	}
////	
////	printf("%d", l - count+1);
////	return 0;
////}
//
//#include<stdio.h>
//int main()
//{
//	int t;
//		scanf("%d", &t);
//	while (t--)
//	{
//		int n = 0;
//		int arr[101];
//		scanf("%d", &n);
//
//		for (int i = 0;i < n;i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		int len = 0;
//		for (int i = 0;i < n;i++)
//		{
//			int count = 1;
//			for (int j = i +1;j < n;j++)
//			{
//				if(arr[i]==arr[j+1])
//				{
//					count++;
//				}
//				else
//					break;
//			}
//			if (count >len)
//			{
//				len = count;
//			}
//		}
//		printf("%d\n", len);
//	}
//	
//	return 0;
//}
#include<stdio.h>
int main() {

}
