#define _CRT_SECURE_NO_WARNINGS

//void init(int arr[], size_t sz) {
//	for (int i = 0;i < sz;i++) {
//		arr[i] = 0;
//	}
//	
//}
//void print(int* p, size_t sz) {
//	for (int i = 0;i < sz;i++) {
//		printf("%d", p[i]);
//	}
//}
//void reverse(int* p, size_t sz) {
//	int left = 0;
//	int right = sz - 1;
//	int tmp;
//	while (left < right) {
//		tmp=p[left];
//		p[left] =p[ right];
//		p[right] = tmp;
//		left++;
//		right--;
//
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	size_t sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr, sz);
//	print(arr, sz);
//	reverse(arr, sz);
//	return 0;
//}
 
//int main()
//{
//	int money = 20;
//	int price = 1;
//	int total = money / price;
//	int empty = total;
//	while ( empty>= 2) {
//		int exchanged= empty / 2;
//		total += exchanged;
//		empty =  exchanged+ empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}

//int main()
//{
//	for
//	return 0;
//}

//int main() {
//	for (int i = 0;i <= 10000;i++) {
//		int tmp = i;
//		int sum = 0;
//		int count = 0;
//		do {
//			count++;
//			tmp = tmp / 10;
//		} while (tmp);
//		tmp = i;
//		for (int k = 1;k <= count;k++) {
//			int mul = 1;
//			
//			for (int j = 1;j <= count;j++) {
//				mul *= tmp % 10;
//			}
//			tmp /= 10;
//			sum += mul;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//}

//int main()
//{
//	int a;
//	int Sn = 0;
//	scanf("%d", &a);
//	for (int i = 1;i <= 5;i++) {
//		int every = 0;
//		int temp = a;
//		
//			for (int k = 1;k <= i;k++) {
//				
//				every+=temp;
//				temp *= 10;
//
//			
//			
//		}
//		Sn += every;
//	}
//	printf("%d", Sn);
//	return 0;
//}


//int main()
//{
//	for (int i = 1;i <= 13;i++)
//	{
//		if (i <= 6 && i >= 1) {
//			for (int j = 1;j <=6-i+1;j++) {
//				printf(" ");
//			}
//			for (int k = 1;k <= i*2-1;k++) {
//				printf("*");
//			}
//			printf("\n");
//		}
//		if (i == 7) {
//			for (int j = 1;j <= 2 * i - 1;j++) {
//				printf("*");
//			}
//			printf("\n");
//		}
//		if (i >= 8) {
//			for (int j = 1;j <= i - 7;j++) {
//				printf(" ");
//			}
//			for (int k = 1;k <= 13 - (i-7) * 2;k++) {
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//void reverse(const char* arr, size_t sz) {
//	while (sz) {
//		printf("%c", arr[sz--]);
//		
//	}
//
//}

//void leftmove(char* p,size_t sz,int k) {
//	char arr[sz] = { 0 };
//	for (int i = 0;i <k ;i++)
//	{
//		arr[i] = p[i];
//	}
//	for (int i = 0;i < sz-k;i++) {
//		p[i] = p[k+i];
//	}
//	for (int i = 0;i < k;i++) {
//		p[sz - k+i] = arr[i];
//	}
//
//}

//size_t my_strlen(const char* p) {
//	int count = 0;
//	while (*p != 0) {
//		count++;
//		p++;
//	}
//	return count;
//}

//void reorderOddEven(int* p, size_t sz) {
//	int arr1[sz];
//	int arr2[sz];
//	int k = 0, j = 0;
//	for (int i = 0;i < sz;i++) {
//		
//		if (*(p + i) % 2 == 1) {
//			arr1[k] = *(p + i);
//			k++;
//		}
//		else
//		{
//			arr2[j] = *(p + i);
//		}
//		
//
//	}
//	for (int i = 0;i < k;i++) {
//		*(p + i) = arr1[i];
//	}
//	for(int i=0;i<j;i++){
//		*(p + k+i - 1) = arr2[i];
//}}

//#include<stdio.h>
//int main()
//{
//	unsigned int a, b, c;
//	unsigned int sum;
//	int A, B, C;
//	scanf("%u%u%u%u%u%u%u", &a, &b, &c, &sum, &A, &B, &C);
//	if (A >= a && B >= b && C >= c && (A + B + C) >= sum)
//		printf("congratulations");
//	else
//		printf("sorry");
//	return 0;
//}


//int main()
//{
//	int arr[9] = { 4,4,5,7,8,8,7,5,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (int i = 0;i < sz;i++) {
//		int flag = 1;
//		for (int j = 0;j < sz;j++) {
//			if (i == j)
//				continue;
//			if (arr[i] == arr[j])
//				flag = 0;
//		}
//		if (flag) {
//			printf("%d", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}
//void exchange(long long int a, long long int b) {
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//}
//#include<stdio.h>
//int main()
//{
//
//	return  0;
//}
//int number_zero1(int a){
//    int count = 0;
//    while (a) {
//        if (a % 2 == 1)
//            count++;
//        a /= 2;
//    }
//    return count;
//}
//int number_zero2(int a) {
//    int count = 0;
//    for (int i = 0;i < 32;i++) {
//        if (a & (1 << i)) {
//            count++;
//        }
//    }
//    return count;
//}
//int number_zero3(int a) {
//    int count;
//    while (a) {
//        count++;
//        a = a & (a - 1);
//    }
//    return count;
//}

#include<stdio.h>
int main() {
	int num=0;
	scanf("%d", &num);
	for (int i = 0;i < 32;i += 2) {
		if (((num >> i) & 1 )== 0)
			printf("0");
		else
			printf("1");
		
	}
	printf("\n");
	for (int i = 1;i < 32;i += 2) {
		if (((num >> i) & 1)== 0)
			printf("0");
		else
			printf("1");
		
	}
	printf("\n");


		return 0;
}