#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define NDEBUG
#include<assert.h>
#include<string.h>

//int main()
//{
//	int* p = NULL;
//	assert(p != NULL);
//	return 0;
//	//double r;
//	//scanf("%lf", &r);
//	//printf("%.3lf", r * r * 3.1415);
//	//return 0;
//
//}
//size_t my_strlen(const char* p) {
//	size_t count=0;
//	assert(p != NULL);
//	while (*p != 0) {
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zu", len);
//	
//	return 0;
//}
//void Swap(int* p1, int* p2) {
//    int temp = *p1;
//    *p1 = *p2;
//    *p2 = temp;
//
//}
//int main()
//{
//    int a, b;
//    int* p1= &a;
//    int* p2 = &b;
//
//       
//    scanf("%d%d", &a, &b);
//    printf("交换前：a=%d b=%d", a, b);
//    Swap(p1,p2);
//    printf("交换后：a=%d b=%d", a, b);
//    
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("&arr[0] = %p\n", &arr[0]);
//	printf("&arr[0]+1 = %p\n", &arr[0] + 1);
//	printf("arr = %p\n", arr);
//	printf("&arr+2 = %p\n", &arr + 2);
//	printf("&arr = %p\n", &arr);
//	printf("&arr+1 = %p\n", &arr + 1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for(int i=0;i<sz;)
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	int* pi = &n;
//	*pi = 0;
//}
//void print_arr(int arr[],int sz) {
//	for (int i = 0;i < sz;i++) {
//		printf("%d ", arr[i]);
//	}
//}
//void bubble_sort(int*arr, int sz) {
//
//	for (int i = 0;i < sz-1;i++) //趟数
//	{
//		int flag = 1;
//		for (int k = 0;k < sz - i-1;k++)
//		{
//			if (arr[k] > arr[k + 1]) {
//				flag = 0;
//				int temp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = temp;
//			}
//		}
//		if (flag == 1)
//			break;
//	 }
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz );
//	print_arr(arr, sz);
//
//
//	return 0;
//}

int main() {
	char arr[] = "a, b, c, d, e, f ";
	printf("%s",*arr);
	return 0;
}
