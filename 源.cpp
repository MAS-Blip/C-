#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//in
//int main() {
// 
//	printf("%zu", sizeof
//int main() {
//	int a;
//	double b;
//	char c;
//	scanf("%d\n%lf\n%c", &a, &b, &c);
//	printf("%d\n%f\n%c", a, b, c);
//	return 0;
//
//}
int main() {
	int a;
	int b;
	scanf("%d %d", &a, &b);
	printf("ºÍ=%d\n", a + b);
	printf("²î=%d\n", a - b);
	printf("»ý=%d\n", a * b);
	printf("ÉÌ=%d\n", a / b);
	return 0;
}
