#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void* my_memcpy(void* dest, void* src, size_t num) {
//	void* ret = dest;
//	while (num--)
//	{
//		*(char)*
//	}
//
//}
//int main()
//{
//
//	return 0;
//}
//void* my_memove
//void* my_memcpy(void* dest, void* src, size_t num) {
//	if (dest > src) {
//		while (num--) {
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*(char*)dest+num=*(char*)src+num
//		}
//	}
//	
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memcpy(arr + 2, arr, 20);
//
//	return 0;
//
//}

//int main()
//{
//	int a = 3;
//	printf("%03x", a);
//	return  0;
//}'
//#include<stdio.h>
//int main() {
//	int a = 0;
//	if (*(char*)&a == 1)
//	{
//		printf("小端");
//
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}
//
//
//int judge() {
//	union
//	{
//		int a;
//		char b;
//	}un;
//	un.a = 1;
//	return un.b;
//	
//}

//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	for (int i = 0;i < 32;i+=2) {
//		printf("%d", (a >> i) & 1);
//	}
//	printf("\n");
//	for (int i = 1;i < 32;i += 2) {
//		printf("%d", (a >> i) & 1);
//	}
//
//	return 0;
//}

//int count_diff_bits(int m, int n){
//	int count = 0;
//	for (int i = 0;i < 32;i++) {
//		if (((m >> i) & 1 )!= ((n >> i) & 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int a = count_diff_bits(m, n);
//	printf("%d", a);
//	
//}
//int count_diff_bits(int m, int n) {
//	int a = m ^ n;
//	int count = 0;
//	while (a) {
//		count++;
//		a = a & (a - 1);
//	}
//	return count;
//
//}
//int main() {
//	int m, n;
//	scanf("%d%d", &m, &n);
//	printf("%d", count_diff_bits(m,n));
//	return 0;
//}
//void print_arr(int* p, size_t sz) {
//	int* end = p + sz;
//	while (p < sz) {
//		printf("%d", *p);
//		p++;
//	}
//}
//int main() {
//
//}

//size_t my_strlen(const char* p) {
//	size_t count=0;
//	while (*p) {
//		count++;
//		p++;
//	}
//	return count;
//}
//#include<stdio.h>
//void bubble_sort(int* p, size_t sz)
//{
//	int flag = 1;
//	for (int i = 0;i < sz;i++) {
//		for (int j = 0;j < sz - i-1;j++) {
//			if (*(p + j) > *(p + j + 1)) {
//				flag = 0;
//				int temp = *(p + j);
//				*(p + j) = *(p + j + 1);
//				*(p + j + 1) = temp;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//void print_arr(int* p, size_t sz) {
//	for (int i = 0;i < sz;i++)
//		printf("%d ", *(p + i));
//}
//#include<stdio.h>
//int main()
//{
//	int arr[9] = { 3, 2, 6, 1, 7, 4, 9, 8, 5, };
//	size_t sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	
//	print_arr(arr, sz);
//	return 0;
//}

#include<stdio.h>
#include<string.h>
//int is_exchange(const char* p1,const char* p2) {
//	if (p1 == NULL || p2 == NULL) {
//		return 0;
//	}
//	int len1 = strlen(p1);
//	int len2 = strlen(p2);
//	if (len1 != len2)
//		return 0 ;
//	if (len1 == 0)
//		return 1;
//	char double_p1[256];
//	strcpy(double_p1,p1);
//	strcat(double_p1, p1);
//	if (strstr(double_p1, p2) != NULL)
//		return 1;
//	else
//		return 0;
//
//}

//int is_exchange(const char* p1, const char* p2)
//{
//	if (p1 == NULL || p2 == NULL)
//	{
//		return 0;
//	}
//	int len1 = strlen(p1);
//	int len2 = strlen(p2);
//	if (len1 != len2)
//		return 0;
//	int match = 1;
//	for (int i = 0;i < len1;i++) {
//		
//		for(int j=0;j<len2;j++)
//			if (p1[j] != p2[(j + i) % len1])
//			{
//				match = 0;
//				break;
//			}
//		if (match == 1)
//			return 1;
//
//
//	}
//	return 0;
//}
//int main()
//{
//
//	char arr1[] = "aabcd";
//	char arr2 [] = "bcdaa";
//	if (is_exchange(arr1, arr2))
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}

//#include<stdio.h>
//int find(int key, int(*p)[5]) {
//	int flag = 0;
//	while (1) {
//		if()
//	}
//}
//int  main()
//{
//	int arr[3][5];
//	int key;
//	scanf("%d", &key);
//	find(key, arr);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//
//	return 0;
//}

//#include<stdio.h>
//void print_yanghui(int* arr, int n)
//{
//	for (int i = 1;i <= n;i++) {
//		for (int j = i;j > 0;j--) {
//			arr[j] = arr[j] + arr[j - 1];
//
//		}
//		for (int k = 1;k <= i;k++) {
//			printf("%d", arr[k]);
//		}
//		printf("\n");
//	}
//	
//}
//int main()
//
//{
//	int arr[10000] = { 0,1 };
//	int n;
//	scanf("%d" ,&n);
//	print_yanghui(arr, n);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//
//	return 0;
//}

#include<stdio.h>
//int main()
//{
//	int N;
//	int a, b;
//	scanf("%d", &N);
//	while (N--) {
//		scanf("%d%d", &a, &b);
//		printf("%d\n", a + b);
//
//	}
//}
//int search(int(*p)[5], int rows, int cols, int target)
//{
//	int row = 0;
//	int col = col - 1;
//	while (row < rows || col >= 0)
//	{
//		if (p[row][col] == target)
//		{
//			return 1;
//		}
//		else if (p[row][col] > target)
//		{
//			col--;
//		}
//		else
//		{
//			row++;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	int target;
//	scanf("%d", &target);
//	search(arr, 3, 5, target);
//
//
//	return 0;
//}
//
//int search2(int(* p)[5], int rows, int cols, int target)
//{
//	int row = 0;
//	while (row < rows)
//	{
//		int left = 0;
//		int right = cols - 1;
//		
//
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//			if (p[row][mid] > target)
//				left = mid + 1;
//			else if (p[row][mid] < target) {
//				right = mid - 1;
//			}
//			else
//				return 1;
//			
//
//		}
//		row++;
//	}
//	return 0;
//
//
//}

#include<stdio.h>
int main()
{
	char killer;
	for (killer = 'a';killer <= 'd';killer++)
	{
		int true_killer = (killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'c');
		if (true_killer == 3)
			printf("凶手是%c", killer);
	}
	return 0;
}