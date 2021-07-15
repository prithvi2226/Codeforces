#include<iostream>
#include<string>
#include<cmath>
#include<cstring>
#include<cstdlib>

using namespace std;

int main(){

	int n, i;

	cin >> n;

	int out[n];
	int in[n];

	for(i = 0; i < n; i++){
		cin >> out[i] >> in[i];
	}

	int max = 0;
	int bmax = 0;

	for(i = 0; i < n; i++){
		bmax = (bmax - out[i]) + in[i];
		if(bmax > max){
			max = bmax;
		}
	}

	cout << max << endl;
	
	return 0;


}





