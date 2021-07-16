#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){

	int n, i;
	
	string s;
	char array[101];

	cin >> s;

	int k = 0;

	n = s.length();

	for(i = 0; i < n; i++){
		if(s[i] != '+'){
			array[k] = s[i];
			k++;
		}
	}

	sort(array, array + k);

	for(i = 0; i < k; i++){
		if(i == k-1){
			cout << array[i];
		}
		else{
			cout << array[i] << "+";
		}

	}
	

	return 0;

}



