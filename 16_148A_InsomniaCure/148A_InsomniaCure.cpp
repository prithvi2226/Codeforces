#include<iostream>
#include<cstdlib>
#include<string>
#include<cstring>
#include<cmath>

using namespace std;

int main(){

	int array[5];

	int i;

	for(i = 0; i < 5; i++){
		cin >> array[i];
	}

	int  j, c;
	int count = 0;
	c = array[4];
	
	for(j = 0; j <= c; j++){
		if(j % array[0] != 0 && j % array[1] != 0 && j % array[2] != 0 && j % array[3] != 0){
			count ++;
		}
		
	}

	int x;
	x = array[4] - count;
	
	cout << x << endl;



	return 0;
}



