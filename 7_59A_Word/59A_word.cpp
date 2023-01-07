
/*
	User: Prithvi Prathap
	Application: Codeforces Word
	Language: CPP
	Date: 6 - 1 - 23

*/



#include<iostream>
#include<cstdlib>
#include<string>
#include<math.h>
#include<cmath>
#include<cctype>
#include<ctype.h>


using namespace std;


int main(int argc, char const *argv[])
{
	
	string word;
	int low = 0;
	int high = 0;

	cin >> word;



	int len;

	len = word.length();

	for(int i = 0; i < len; i ++){
		if(islower(word[i])){
			low ++;
		}
		if(isupper(word[i])){
			high ++;
		}

	}

	//cout << low << endl;
	//cout << high << endl;


	if(low > high){
		for(int i = 0; i < len; i ++){
			word[i] = tolower(word[i]);
		}
	}
	else if(high > low){
		for(int i = 0; i < len; i ++){
			word[i] = toupper(word[i]);
		}

	}
	else{
		for(int i = 0; i < len; i ++){
			word[i] = tolower(word[i]);
		}
	}

	cout << word << endl;




	return 0;
}





















































































































































