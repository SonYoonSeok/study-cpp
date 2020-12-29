//#pragma warning(disable:4996)
//#include <stdio.h>
//
//int sorted[8];
//
//void merge(int a[], int m, int middle, int n)
//{
//	int i = m;
//	int j = middle + 1;
//	int k = m;
//
//	while (i <= middle && j <= n)
//	{
//		if (a[i] <= a[j])
//		{
//			sorted[k] = a[i];
//			i++;
//		}
//		else
//		{
//			sorted[k] = a[j];
//			j++;
//		}
//		k++;
//	}
//
//	if (i > middle)
//	{
//		for (int t = j; t <= n; t++)
//		{
//			sorted[k] = a[t];
//			k++;
//		}
//	}
//	else
//	{
//		for (int t = j; t <= middle; t++)
//		{
//			sorted[k] = a[t];
//			k++;
//		}
//	}
//
//	for (int t = m; t <= n; t++)
//	{
//		a[t] = sorted[t];
//	}
//}
//
//void mergeSort(int a[], int m, int n)
//{
//	if (m < n)
//	{
//		int middle = (m + n) / 2;
//		mergeSort(a, m, middle);
//		mergeSort(a, middle + 1, n);
//		merge(a, m, middle, n);
//	}
//}
//
//int main()
//{
//	int arr[8] = { 3,4,6,8,10,9,2,1 };
//	int num;
//	//scanf("%d ", &num);
//
//	/*for (int a=0; a<num; a++)
//	{
//		scanf("%d", &array[a]);
//	}*/
//	mergeSort(arr, 0, 7);
//
//	for (int a = 0; a < 8; a++)
//	{
//		printf("%d\n", arr[a]);
//	}
//}