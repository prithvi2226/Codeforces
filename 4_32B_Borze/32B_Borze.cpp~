#include<iostream>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>

using namespace std;

int main(){
	string s, count;
	int m;
	cin >> s;
	m = s.length();
	for(int i = 0; i <= m; i++){
		if(s[i] == '.'){
			count += '0';
		}
		else if(s[i] == '-' && s[i+1] == '.'){
			count += '1';
			i++;
		}
		else if(s[i] == '-' && s[i+1] == '-'){
			count += '2';
			i++;
		}


	}
	cout << count << endl;
	return 0;
}



