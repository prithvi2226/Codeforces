#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<string>

using namespace std;

int main(){

	string A, B;

	cin >> A;
	cin >> B;

	string res;
	string str = "0";
	string str2 = "1";

	int bruh;
	bruh = A.size();

	for(int i = 0; i < bruh; i++){
		if(A[i] == B[i]){
//			cout << 0 << endl;
			res.append(str);
		}
		else{
			//cout << 1 << endl;
			res.append(str2);
		}
	}

	cout << res << endl;



	return 0;
}




