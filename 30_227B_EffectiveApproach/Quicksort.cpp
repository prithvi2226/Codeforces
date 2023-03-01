/*
	Name : Prithvi Prathapan
	Application : QuickSort
	Lang : CPP
	Date : 2 - 2 - 23

*/

#include<iostream>

void swap(int *a, int *b);
void printArray(int arr[], int size);
int partition(int arr[], int low, int high);
void quicksort(int arr[], int low, int high);

using namespace std;


void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void printArray(int arr[], int size){
	int i;

	for(int i = 0; i < size; i ++){
		cout << arr[i] << " ";
	}

	cout << endl;

}




int partition(int arr[], int low, int high){

	int pivot = arr[high];
	int p_index = low-1;

	for(int i = low; i < high; i ++){
		
		if(arr[i] <= pivot){
			
			p_index ++;

			swap(&arr[i], &arr[p_index]);
		
		}

	}

	swap(&arr[p_index + 1], &arr[high]);

	return p_index + 1;


}



void quicksort(int arr[], int low, int high){
	
	if(low < high){

		int pivot = partition(arr, low, high);
		quicksort(arr, low, pivot-1);
		quicksort(arr, pivot+1, high);

	}
}





int main(int argc, char const *argv[])
{
	/* code */

	int n;

	
	cin >> n;



	int data[n];

	
	for(int i = 0; i < n; i++){

		cin >> data[i];
	}

	cout << "Unsorted Array: \n";
	printArray(data, n);

	/* quicksort */	
	quicksort(data, 0, n - 1);


	cout << "Sorted array in ascending order: \n";
	printArray(data, n);


	return 0;
}



