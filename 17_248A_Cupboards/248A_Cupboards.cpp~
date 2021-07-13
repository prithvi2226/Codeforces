#include<iostream>
#include<string>
#include<cstdlib>
#include<cstring>
#include<cmath>

using namespace std;

int min(int a, int b){
	return a>b ? b:a;
}

int main(){
	int n;
	cin >> n;

	int left[10001];
	int right[10001];

	for(int i = 0; i < n; i++){
		cin >> left[i] >> right[i];
	}


	int l0 = 0;
	int l1 = 0;
	int r0 = 0;
	int r1 = 0;
	int count = 0;

	for(int i = 0; i < n; i++){
		if(left[i] == 1){
			l1++;
		}
		else{
			l0++;
		}
	}

	count = min(l1, l0);

	for(int i = 0; i < n; i++){
		if(right[i] == 1){
			r1 ++;
		}
		else{
			r0++;
		}
	}

	count = count + min(r1, r0);

	cout << count << endl;

	return 0;
	
}
