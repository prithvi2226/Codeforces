
/*
	Name : Prithvi Prathap
	Email : ppratha1@asu.edu
	Application : Codeforces Young Physicist
	Language : C++
	Date : 21 - 12 - 2022
*/


#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{

	int n, a, b, c;

	cin >> n;

	int count = 0, x1 = 0, y1 = 0, z1 = 0;

	while(n--){
		
		cin >> a >> b >> c;

		x1 += a;
		y1 += b;
		z1 += c;

	}

	if(x1 == 0 & y1 == 0 & z1 == 0){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}


	return 0;
}
















































































