# define _CRT_SECURE_NO_WARNINGS
#define size 7
#include <stdio.h>;
#include <stdlib.h>;
#include <string.h>;

int main(void)
{
	

	struct stud
	{
		int num;
		char sur[35];
		float sr;

	};
	
	
	struct stud arr[size]=
	{
		{751002, "Peredery", 5.7},
		{751002,"Tarasenko",6.8 },
	    {751003,"galay", 6.6},
	    {751002, "Chesnok", 2.2},
	    {751003,"Petrov",5.5},
	    {751002,"Pobol", 8.3},
	{751003,"Yagmin", 7.7}
    };
	struct stud t;
	
	
	int i, j;

	for (i = 0; i < size; i++)
	{
		printf("%d %s %f", arr[i].num, arr[i].sur, arr[i].sr);
		printf("\n");

	}

	printf("\n"); printf("\n");

	for (i = 0; i < size; ++i) {
		for (j = size - 1; j > i; --j) 
		{
			if (arr[j].num < arr[j - 1].num) 
			{
				 t = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = t;
			}
		}
	}


	for (i = 0; i < size; i++)
	{
		printf("%d %s %f", arr[i].num, arr[i].sur, arr[i].sr);
		printf("\n");

	}
	int q;
	i = 0;
	int countw = 0;
	while (i < size)
	{
		t.num = arr[i].num;
		q = i;
		i++;
		while (t.num == arr[i].num)
		{
			i++;
		}
		countw++;
		for (q = q; q < i; q++)
		{
			for (j = i - 1; j > q; --j)
			{
				if (arr[j].sr > arr[j - 1].sr)
				{
					t = arr[j - 1];
					arr[j - 1] = arr[j];
					arr[j] = t;
				}
			}


		}

	}

	
	printf("\n"); printf("\n");

	for (i = 0; i < size; i++)
	{
		printf("%d %s %f", arr[i].num, arr[i].sur, arr[i].sr);
		printf("\n");

	}


	getchar();

	return 0;

}


