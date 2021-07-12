#include<iostream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<cstring>

using namespace std;

int main(){
	int n, i;
	cin >> n;

	int array[n];
	int no = 0;

	for(i = 0; i < n; i++){
		
		cin >> array[i];		
		no = array[i] + no;
	}

	//cout << no;

	float x;
	double bruh;

	x = (double)no/100;
	//cout << x;

	bruh = (double)x/n;

	bruh = (double)bruh*100;
	
	cout << bruh << endl;


	

	return 0;

}





