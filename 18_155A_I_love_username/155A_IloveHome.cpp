#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

int main(){

	int n, i;

	int count = 0;

	cin >> n;

	int scores[n];

	for(i = 0; i < n; i++){
		cin >> scores[i];
	}

	int max = scores[0];
	int min = scores[0];

	for(i = 0; i < n; i++){
		if(scores[i] > max){
			max = scores[i];
			count ++;
		}
		if(scores[i] < min){
			min = scores[i];
			count ++;
		}

	}

	cout << count << endl;

	return 0;

}











