#include<iostream>
using namespace std;
void swap(int&x , int&y) 
{
	int Temp = x;
	x = y;
	y = Temp;
}
void selectionSort(int arr[] , int size)
{

	for (int i = 0; i < size-1; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (arr[j]<arr[i])
			{
				swap(arr[j], arr[i]);

			}
		}

	}


}
void printArray(int arr[] , int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "	";
	}
}
int main()
{
	int arr[1000], size;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	selectionSort(arr, size);
	printArray(arr , size);
	

	
}
