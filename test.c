#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//#include<math.h>
//int main()for(
//{
//	printf("%d", (int)pow(2,3));
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int* a = malloc(sizeof(int) * n);
//	if (a == NULL)
//	{
//		perror("malloc:");
//		return 1;
//	}
//	else
//	{
//		for (int i = 0;i < n;i++)
//		{
//			*(a + i) = i * 10;
//			printf("%d ", *(a + i));
//
//		}
//	}
//	printf("\n";)
//	free(a);
//	a = NULL;
//	return 0;
//}

int main()
{
	int n;
	scanf("%d", &n);
	int* a = (int*)calloc(n,sizeof(int));
	if (a == NULL)
	{
		perror("malloc:");
	}
	else
	{
		for (int i = 0;i < n;i++)
		{
			printf("%d ", a[i]);
		}
	}
	printf("\n");
	free(a);
	a = NULL;

	return 0;
}