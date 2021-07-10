#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cmath>

using namespace std;

int main(){

	int n, i;
	cin >> n;

	if(n%2 == 1){
		cout << -1 << endl;
	}
	else{
		cout << "2 1";

		for(i = 3; i < n; i = i+2){
			cout << " " << i+1 << " " << i;
		}
		
	}
	cout << endl;



	return 0;
}




