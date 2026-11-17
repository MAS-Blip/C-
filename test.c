#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	int sum = 0;
//	for (int n = 1;n <= 3;n++) {
//		int ret = 1;
//		for (int i = 1;i <= n;i++) {
//			
//			ret*=i;
//
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main() {
//	unsigned int n;
//	scanf("%u", &n);
//	int a, b, c;
//	for (int i = 1;i <= n;i++) {
//		if (i == 1 || i == 2) {
//			a = 1;
//			b = 1;
//			c = 1;
//		}
//		else {
//			c = a + b;
//			a=b;
//			b = c;
//
//		}
//	}
//	printf("%d", c);
//	return 0;
//}
int Hannuotan(int n) {
	if (n == 1)
		return 1;
	return 2 * Hannuotan(n - 1) + 1;

}

int main() {
	int n = 0;
	scanf("%d", &n);
	printf("%d", Hannuotan(n));
	return 0;
}