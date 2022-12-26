

/*
	Name : Prithvi Prathap
	Email : ppratha1@asu.edu
	Application : Codeforces Borze 
	Language : C++
	Date : 25 - 12 - 2022
*/

#include<iostream>
#include<cstdlib>
#include<string>
#include<cstdlib>
#include<cstring>
#include<cmath>



using namespace std;


int main(int argc, char const *argv[])
{
	string code, num = "";

	cin >> code;

	//cout << code << endl;

	int len;

	len = code.length();

	//cout << len << endl;

	for(int i = 0; i <= len; i++)
	{
		/* code */
		if(code[i] ==	 '.'){
			num += '0';
		}
		else if(code[i] == '-' && code[i+1] == '.'){
			num += '1';
			i++;
		}
		else if(code[i] == '-' && code[i+1] == '-'){
			num += '2';
			i++;
		}
	}


	cout << num << endl;

	return 0;
}


















































































