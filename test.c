#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int cmp(const void* p1, const void* p2) {
	return *((int*)p1) - *((int*)p2);
}
void swap(const void* p1, const void* p2, size_t width) {
	for (int i = 0;i < width;i++)
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char* )p2 + i) = tmp;
	}
}
void bubble_sort(void* base, size_t sz, size_t width, int (*cmp) (const void* p1, const void* p2))
{
	

	for (int i = 0;i < sz - 1;i++)
	{
		int flag = 1;
		for (int j = 0;j < sz - 1 - i;j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width  ) > 0)
			{
				flag = 0;
				swap((char*)base + j * width, (char*)base + (j+1) * width , width);

			}

			
				
		}
		if (flag ==  1)
			break;
	}


	
}
int main()
{
	int arr[10] = { 4,5,6,7,3,2,1,8,9,0 };
	size_t sz = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(arr[0]);
	bubble_sort(arr, sz, width, cmp);
	for (int i = 0;i < sz;i++) {
		printf("%d", arr[i]);
	}
	return 0;
}