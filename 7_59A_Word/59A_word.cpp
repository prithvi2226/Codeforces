#include<iostream>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>

using namespace std;


int main(){

	string s;
	cin >> s;
	int n;
	int upper = 0;
	int lower = 0;

	n = s.size();

	for(int i = 0; i < n; i++){
		if (isupper(s[i])){
			upper++;
		}
		else{
			lower++;
		}
	}

	if(lower > upper){
		for(int i = 0; i < n; i++){
			s[i] = tolower(s[i]);
		}
	}
	else if(upper > lower){
		for(int i = 0; i < n; i++){
			s[i] = toupper(s[i]);
		}
	}
	else if(upper == lower){
		for(int i = 0; i < n; i++){
			s[i] = tolower(s[i]);
		}
	}

	cout << s << endl;

	return 0;
}
