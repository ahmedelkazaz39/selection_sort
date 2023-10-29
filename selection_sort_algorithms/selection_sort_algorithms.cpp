#include <iostream>
#include<algorithm>
using namespace std;

void selectionSort(int arr[], int n)
{
	int minIndex;
	for (int i = 0;i < n;i++)
	{
		minIndex = i;
		for (int j = i + 1;j < n;j++)
		{
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
				swap(arr[minIndex], arr[i]);
			}
		}
	}
}

void printSelectionSot(int arr[], int size)
{
	for (int i = 0;i < size;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int arr[] = { 60,40,50,30,10,20 };
	int n = sizeof(arr) / sizeof(arr[0]);
	selectionSort(arr, n);
	printSelectionSot(arr,n);

}

 
