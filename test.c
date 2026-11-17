#define _CRT_SECURE_NO_WARNINGS

//void print_multiplication_table(int n) {
//	for (int i = 1;i <= n;i++) {
//		for (int k = 1;k <= i;k++) {
//			printf("%d*%d=%-4d", i, k, i * k);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	print_multiplication_table(n);
//	return 0;
//}
//void is_leap_year(int n) {
//	if ((n / 4 == 0 && n / 100 != 0) || n / 400 == 0)
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//
//
//}
//
//int main() {
//	int year;
//	scanf("%d", &year);
//	is_leap_year(year);
//	return 0;
//}
//int is_prime(int n) {
//	if (n <= 1 || (n % 2 == 0&&n!=2))
//		return 0;
//	for (int i = 2;i * i <= n;i ++) {
//		if (n % i == 0)
//		return 0;
//	}
//	return 1;
//
//}
//
//int main() {
//	for (int i = 100;i <= 200;i++) {
//		if (is_prime(i))
//			printf("%d ", i);
//	}
//	return 0;
//}
//void init(char arr[][], int sz) {
//	for (int i = 0;i < sz;i++) {
//		for (int k = 0;i < sz;k++) {
//			scanf("%d", &arr[i][k]);
//		}
//	}
//}
//void print(char arr[][], int sz) {
//	for (int i = 0;i < sz;i++) {
//		for (int k =0;i < sz;k++) {
//			printf("%d", arr[i][k]);
//		}
//	}
//}
//void reverse(char arr[][], int sz) {
//	int temp;
//	for (int i = 0;i < sz;i++) {
//		for (int k = 0;i < sz;k++) {
//			temp=arr[i][k]
//			arr[i][k] = arr[i][]
//
//		}
//	}
//
//}
//
//
//int main() {
//	int arr[5][5];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);
//	print(arr,sz);
//	reverse(arr,sz);
//}


//int bin_search(int arr[], int left, int right, int key) {
//	int find = 0;
//	int mid = 0;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (arr[mid] < key)
//			right = mid - 1;
//
//		else if (arr[mid] > key)
//			left = mid + 1;
//		else {
//			find = 1;
//			break;
//		}
//
//
//
//	}
//
//}
//int main() {
//	int arr[10] = { 1,3,5,7,9,11,13,15,17,19 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	int key;
//	scanf("%d", &key);
//	bin_search(arr, left, right, key);
//
//
//}

//int main()
//{
//    int n;
//    int sum = 0;
//    while (scanf("%d", &n) !=EOF)
//    {
//        sum += n;
//    }
//    printf("%d", sum);
//
//    return 0;
//}


//int main()
//{
//    int m;
//    float n;
//    scanf("%d",&m);
//    scanf("%f",&n);
//    if(m<0)
//        printf("%d\n",-m);
//        else
//        printf("%d\n",m);
//    if(n<0)
//        printf("%.0f",-n);
//        else
//        printf("%.0f",n);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("(%d)%d-%d", &a, &b, &c);
//	printf("0086%d%d%d", a, b, c);
//	return 0;
//#include<stdio.h>
//int bin_search(int arr[], int left, int right, int key) {
//	int mid = 0;
//	if()
//}
//int main() {
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int key;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int bin_searclh(arr, left, right, key);
//	scanf("%d", &key);
//	return 0;
//}
#include<stdio.h>
int DigitSum(int n) {
	if (n < 9)
		return n;
	else
		return n % 10 + DigitSum(n / 10);
}
			

int main() {
	int n;
	scanf("%d", &n);
	int sum=DigitSum(n);
	printf("%d", sum);
	return 0;

}
