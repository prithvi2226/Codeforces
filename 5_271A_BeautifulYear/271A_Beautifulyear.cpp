
/*
	User: Prithvi Prathap
	Application: Codeforces Beautiful Year
	Language: CPP
	Date: 5 - 1 - 23

*/


#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>


using namespace std;

int main(int argc, char const *argv[])
{

	int year;

	cin >> year;

	//1987

	int ear = year;

	while(1){
		ear ++;
		int a = ear % 10;
		ear = ear /10;
		int b = ear % 10;
		ear = ear/10;
		int c = ear % 10;
		ear = ear/10;
		int d = ear;

		if(a == b || b == c || a == d || a == c || b == d || d == c){
			year ++;
		}
		else{
			// cout << ear << endl;
			cout << year + 1 << endl;
			break;
		}
		ear = year;
	}


	
	return 0;
}




















































































