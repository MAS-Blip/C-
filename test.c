#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//char* my_strcat(char* p1, const char* p2) {
//	int i = 0;
//	int k = 0;
//
//	while (p1[i]) {
//		i++;
//	}
//	while (p2[k]) {
//		p1[i + k] = p2[k];
//		k++;
//	}
//	p1[i + k] = 0;
//}
//int main() {
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//int my_strcmp(char* str1, char* str2) {
//	whlie(*str1 == *str2++) {
//		if (*str1 == 0) {
//			return 0;
//		}
//	}
//	return *str1 - *str;
//
//}
//char s1[] = "123456\0";
//char s2[] = "123456\0 32";

//int main()
//{
//	int x, y;
//
//	for (x = 1;x <= 20;x++) {
//		for (y = 1;y <= 33;y++) {
//			int z = 100 - x - y;
//			if (z > 0 && z % 3 == 0 && 5*x + 3*y + z / 3 == 100)
//				printf("%d %d %d\n", x, y, z);
//
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int n;
//	int x;
//	scanf("%d%d", &n, &x);
//	int arr[101];
//	for (int i = 0;i < n;i++) {
//		scanf("%d", arr[i]);
//
//	}
//	int pos = -1;
//	for (int i = 0;i < n;i++) {
//		if (arr[i] = x)
//			pos = i + 1;
//		break;
//	}
//	printf("%d", pos);
//
//	return 0;
//}

//int main() {
//int year, month,day;
//scanf("%d%d%d", &year, &month, &day);
//int sum = 0;
//int arr1[13] = { 0,31,28,31,30,31,30,31,31.30,31,30,31 };
//int arr2[13] = { 0,31,29,31,30,31,30,31,31.30,31,30,31 };
//	
//if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//for (int i = 0;i < month;i++) {
//sum += arr2[i];
//}
//}
//else {
//for (int i = 0;i < month;i++) {
//sum += arr1[i];
//}
//}
//printf("%d", sum + day);
//return 0;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d" & a, &b);
//	while (b) {
//		int temp = a % b;
//		a = b;
//		b = temp;
//	}
//	printf("%d ", a,a);
//	
//	return 0;
//}
//#include<stdio.h>
//#include<ctype.h>
//#include<string.h>
//int main() {
//	char arr[] = "aDHFsfhk asF";
//	int len = strlen(arr);
//	for (int i = 0;i < len;i++)
//	{
//		if (islower(arr[i])) {
//			arr[i] = toupper(arr[i]);
//			printf("%c", arr[i]);
//		}
//
//		else if(isupper(arr[i])) {
//			arr[i] = tolower(arr[i]);
//			printf("%c", arr[i]);
//		}
//		else
//			printf("%c",arr[i]);
//	}
//
//	return 0;
//}

#include<stdio.h>
int main()
{
	int n,i;
	
	scanf("%d", &n);
	for ( i = 1; i <= n;i++) {
		int sum = 0;
		for (int j = 1;j <= i/2;j++) {
			if (i % j == 0) {
				sum += j;
			}
		}
		if (sum == i)
			printf("%d ", i);

	}
	
	return 0;
}