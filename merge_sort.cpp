#include <bits/stdc++.h>
using namespace std;

void print(int *arr, int l, int n)
{
	for (int i = l; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void merge(int *arr, int start, int mid, int end)
{
	int ls = mid - start + 1, rs = end - mid;
	int leftArray[ls], rightArray[rs];

	// Copy data to temp arrays leftArray[] and rightArray[]
	for (int i = 0; i < ls; i++)
		leftArray[i] = arr[start + i];
	for (int j = 0; j < rs; j++)
		rightArray[j] = arr[mid + 1 + j];

	int li = 0, ri = 0;
	int newI = start;
	while (li < ls && ri < rs)
	{
		if (leftArray[li] < rightArray[ri])
		{
			arr[newI++] = leftArray[li++];
		}
		else
		{
			arr[newI++] = rightArray[ri++];
		}
	}
	while (li < ls)
	{
		arr[newI++] = leftArray[li++];
	}
	while (ri < rs)
	{
		arr[newI++] = rightArray[ri++];
	}
}
void mergeSort(int *arr, int l, int r)
{
	if (l >= r)
		return;

	int mid = l + (r - l) / 2;

	mergeSort(arr, l, mid);
	mergeSort(arr, mid + 1, r);
	merge(arr, l, mid, r);
}
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	print(arr, 0, n);
	mergeSort(arr, 0, n - 1);
	print(arr, 0, n);

	return 0;
}
