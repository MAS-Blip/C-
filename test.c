#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	float n = 3.14f;
//	printf("%f", n);
//	return 0;
//
//}
//#include <stdbool.h>
//
//#include <stdio.h>
//
//bool is_leap_year(int y)
//{
//    //如果y是闰年，返回1
//    if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//    {
//        return true;
//    }
//    else //不是闰年，返回0
//    {
//        return false;
//    }
//}
//
//int main()
//{
//    int year = 0;
//    scanf("%d", &year);
//    //判断year是否为闰年 - 函数实现
//    if (is_leap_year(year)==1)
//        printf("闰年\n");
//    else
//        printf("不是闰年\n");
//
// 

#include<stdio.h>
int main() {
	int year;
	for (year = 1000;year <= 2000 && year >= 1000;year++)
	{
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
			printf("%d", year);
	}
	return 0;

}

