#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<string>


using namespace std;

int main(){
	int n, i;
	cin >> n;

	int maxval = 0;
	int minval = 101;
	int maxindex, minindex;


	for(i = 0; i < n; i++){
		int x;
		cin >> x;
		if(x > maxval){
			maxval = x;
			maxindex = i;
		}
		if(x <= minval){
			minval = x;
			minindex = i;
		}

	}

	if(maxindex > minindex){
		int g;
		g = (maxindex - 1) + (n - minindex) - 1;
		cout << g << endl;
	}
	else{
		int b;
		b = (maxindex - 1) + (n - minindex);
		cout << b << endl;
	}

	return 0;

}
