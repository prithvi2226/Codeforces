
/*
	Name : Prithvi Prathapan
	Application : 228B - Effective Approach Codeforces BruteForce
	Lang : CPP
	Date : 2 - 2 - 23

*/


#include<iostream>
#include<string>
#include<cstdlib>


int Petya(int arr[], int arr2[], int n, int q);
int Vatsya(int arr[], int arr2[], int n, int q);

using namespace std;



int Petya(int arr[], int arr2[], int n, int q){

	int pcount = 0;

	for(int i = 0; i < q; i ++){
		for(int j = n - 1; j >= 0; j--){
			pcount ++;
			if(arr2[i] == arr[j]){
				break;
			}
			
		}
	}

	return pcount;

}

int Vatsya(int arr[], int arr2[], int n, int q){

	int vcount = 0;

	for(int i = 0; i < q; i ++){
		for(int j = 0; j < n ; j++){
			vcount ++;
			//cout << vcount << endl;
			if(arr2[i] == arr[j]){
				break;
			}


		}
	}

	return vcount;

}



int main(int argc, char const *argv[])
{
	/* code */
	int n, q;

	cin >> n;

	int arr[n];
	

	for(int i = 0; i < n; i++) {

		cin >> arr[i];
	}

	cin >> q;
	int num_q[q];

	for(int i = 0; i < q; i++){
		cin >> num_q[i];
	}

	int vatsya = Vatsya(arr, num_q, n, q);
	int petya = Petya(arr, num_q, n, q);

	cout << vatsya << " " << petya << endl;




	return 0;
}







