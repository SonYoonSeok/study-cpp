//#pragma warning(disable: 4996)
//#include <stdio.h>
//
//int array[1001];
//
//int main()
//{
//	int number, i, j, min, index, tmp;
//	scanf("%d", &number);
//	for (i=0; i<number; i++)
//	{
//		scanf("%d", &array[i]);
//	}
//
//	for (i = 0; i < number; i++)
//	{
//		min = 1001;
//		for (j=i; j<number; j++)
//		{
//			if (min > array[j])
//			{
//				min = array[j];
//				index = j;
//			}
//		}
//		tmp = array[i];
//		array[i] = array[index];
//		array[index] = tmp;
//	}
//
//	for (i = 0; i < number; i++)
//	{
//		printf("%d ", array[i]);
//	}
//}