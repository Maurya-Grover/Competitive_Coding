#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*Merge Function merges the two arrays that have bee sorted
and mergesort function repeatedly separates it into two halves
and keeps halving till an independant element or no element remains
as each of them is sorted in itself. Then the function merges these elements
into 2 and keeps on repeatimg till original array is formed.
*/

void merge(vector<int> &a, int low, int high, int mid)
{
	//Assuming from low to mid and mid+1 to high array is already sorted
	int i, j, k, temp[high + low - 1];
	i = low;
	j = mid + 1;
	k = 0;
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			i++;
		}
		else
		{
			temp[k] = a[j];
			j++;
		}
		k++;
	}
	//Filling The Rest Of The Array With The Sorted Elements
	//If first half is left with elements and all elements of second half have been used
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
	//If second half is left with elements and all elements of first half jave been used
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}

	//Assigning The elements Of Temp in The Original Array
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i - low];
	}
}
void mergesort(vector<int> &a, int low, int high)
{
	if (low < high)
	{
		int mid = (low + high) / 2;
		//Splitting Array Into 2
		//Sending The First Half To be Sorted
		mergesort(a, low, mid);
		//Sending The Second Half To be Sorted
		mergesort(a, mid + 1, high);
		//Merging Them Into Sorted Array
		merge(a, low, high, mid);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cout << "Enter Number Of Elements : ";
	cin >> n;
	vector<int> a(n);
	cout << "\n";
	cout << "Enter The Elements : ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	mergesort(a, 0, n - 1); //Sending the entire array for sorting
	cout << "\n";
	cout << "The Sorted Array Is : ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}