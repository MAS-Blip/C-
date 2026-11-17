#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0;i < 10;i++) {
//		arr[i] = -arr[i];
//		printf("%d", arr[i]);
//
//	}
//
//	return 0;
//}

//int main() {
//	int arr[10];
//	for (int i = 0;i < 10;i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d\n", arr[i]);
//		printf("arr[%d]=%p\n", i, &arr[i]);
//
//	}
//	
//	return 0;
//}

//int main()
//{
//	int arr[] = { 2,3,55,23,5,6,4,5,};
//	int number = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", number);
//
//	return 0;
//}
//
//int main()
//
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6, };
//	int i, j;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 5;j++)
//		{
//			printf("arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return  0;
//}

//int main() {
//	char arr1[] = "ming ze jun xi";
//	char arr2[] = "##############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n",arr2);
//	while (left <= right) {
//	    arr2[left]= arr1[left];
//	    arr2[right] = arr1[right];
//	
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);
//
//
//
//
//	return 0;
//}

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int k = 0;
//
//	for (;i < sz;i++) {
//		if (arr[i] == 7)
//		{
//			printf("找到了7，下标是：%d\n", i);
//			k = 1;
//			break;
//		}
//	}
//	if (k ==0)
//		printf("没找到\n");
//
//	
//	return 0;
//}

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (1) {
//		int mid = (left + right) / 2;
//		if (arr[mid] < 7) {
//			left = mid + 1;
//
//		}
//		else if (arr[mid] > 7)
//			right = mid - 1;
//		else if (arr[mid] == 7) {
//			printf("找到了7，下标是：%d\n", mid);
//			break;
//		}
//
//	}
//	return 0;
//}

//int main()
//{
//	printf("%zu\n", strlen("c:\add\test\007\vip.c"));
//	return 0;
//}

int main() {
	float i = 3.2;
	scanf("%lf", &i);
	printf("%f", i);
	return 0;
}