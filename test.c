#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int  get_peach(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	else
//		return (get_peach(n - 1) + 1) * 2;
//
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	
//	int sum=get_peach(n);
//	printf("%d", sum);
//	return  0;
//}

//#include<stdio.h>
//int main()
//{
//	long long int n;
//	int exchange = 0;
//	scanf("%lld", &n);
//	int n1 = n;
//	while (n) {
//		exchange =exchange*10 +n % 10;
//		n = n / 10;
//	}
//	if (n1 > 0) {
//		printf("%d", exchange);
//	}
//	else if (n1 == 0)
//		printf("0");
//	else
//		printf("-%d", exchange);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	printf("%d%d", a, b);
//	return 0;
//}

#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%.2f%%", a * 100.0 / b);
//	return 0;
//}
//
//int a, b;
//(double)a*100/b
//(double)a/b*100

//int main()
//{
//	char arr[20];
//	scanf("%s", arr);
//	int len = strlen(arr);
//	int left = 0;
//	int right = len - 1;
//
//	if (arr[0] == '-')
//		left++;
//	while (left < right) {
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//	int start = 0;
//	if (arr[0] == '-') {
//		printf("%c", arr[0]);
//		start++;
//	}
//	while (arr[start] == '0') {
//		start++;
//	}
//	while (arr[start]) {
//		printf('%c', arr[start]);
//		start++;
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//int main() {
//	char arr[100] = {0};
//	scanf("%[^\n]", arr);
//	int count = 0;
//	int word = 0;
//	for (int i = 0;arr[i] != 0;i++) {
//		if (isalpha(arr[i]))
//			if (word == 0)
//			{
//				word = 1;
//				count++;
//			}
//			else
//				word = 0;
//	}
//	printf("%d", count);
//
//
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",& n);
//	int arr[n][n];
//	for (int i = 0;i < n;i++) {
//		for (int j = 0;j < i+1;j++) {
//			arr[i][j] = 1;
//		}
//	}
//	for (int i = 2;i < n;i++) {
//		for (int j = 1;j < i -;j++) {
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (int i = 0;i < n;i++) {
//		for (int j = 0;j < i+1;j++) {
//			printf("%d", arr[i][j]);
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    int arr[25] = { 1 }; // 只需要一个一维数组，第一项初始为 1
//
//
//
//    for (int i = 0; i < n; i++) {
//        // 关键：从后往前算，避免覆盖上一行的数据
//        // 第 i 行有 i+1 个元素
//        for (int j = i; j > 0; j--) {
//            arr[j] = arr[j] + arr[j - 1];
//        }
//
//        // 打印当前行的结果
//        for (int j = 0; j <= i; j++) {
//            printf("%d ", arr[j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//#include<ctype.h>
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int arr[105];
//	for (int i = 1;i <= n;i++) {
//		arr[i] = 1;
//	}
//	int count = 0;
//	int out = 0;
//	int i = 1;
//	while (out < n) {
//		if (arr[i] == 1) {
//			count;
//
//			if (count == m) {
//				printf("%d ", i);
//				arr[i] = 0;
//				count = 0;
//				out++;
//			}
//
//
//			i++;
//			if (i > n) {
//				i = 1;
//				printf("\n");
//			}
//		}
//
//	return 0;
//}

//#include<math.h>
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	char arr1[1001];
//	scanf("%s", arr1);
//	
//
//	char*p=strstr(arr1,"KMP");
//	if (p != NULL)
//		printf("Yes");
//	else
//		printf("NO");
//	return 0;
//}




//#include<stdio.h>
//int main() {
//	unsigned int a, b;
//	scanf("%u%u", &a, &b);
//	if (a > b) {
//		printf("Resonance: %u\n", b);
//		printf("Remaining: %u", a - b);
//	}
//	else if (a == b) {
//		printf("Resonance: %u\n", b);
//		printf("Remaining: %u", a - b);
//	}
//	else if (a < b) {
//		printf("Resonance: %u\n", a);
//		printf("Remaining: %u", b-a);
//	}
//	return 0;
//}

#include<stdio.h>
int main() {
	int q;
	scanf("%d", &q);
	int step;
	int x[200001];
	int* p = x;
	int* start = p;
	int max = 0;
	for (int i = 1;i <= q;i++) {
		scanf("%d", &step);
		if (step == 1) {
			scanf("%d", p++);
			
			if (*(p-1) > *(p - 2)&&p-1!=x)
			    max = *(p-1);
			if (p - 1 == x)
				max = *(p - 1);
		}
		if (step == 2) {
			max = x[0];
			
			*(p - 1) = *(p-2);
			p--;
			for (int i = 0;i < start - p;i++) {
				if (x[i] < x[i + 1])
					max = x[i + 1];
			}
		}
		if (step == 3)
			printf("%d\n", *(p - 1));
		if (step == 4)
			printf("%d\n", max);



	}
	return 0;
}