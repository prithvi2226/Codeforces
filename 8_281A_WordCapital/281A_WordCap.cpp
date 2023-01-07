

/*
	User: Prithvi Prathap
	Application: Codeforces Capitalize Word
	Language: CPP
	Date: 6 - 1 - 23

*/

#include<iostream>
#include<cstdlib>
#include<cmath>
#include<string>


using namespace std;


int main(int argc, char const *argv[])
{
	
	string word;

	cin >> word;

	int len;

	len = word.length();

	for(int i = 0; i < 1; i ++){

		word[i] = toupper(word[i]);

	}

	cout << word << endl;


	return 0;
}



























































