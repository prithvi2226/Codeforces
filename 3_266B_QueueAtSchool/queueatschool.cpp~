#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<cstdlib>

using namespace std;

int main(){
	int n, t;
	cin >> n;
	cin >> t;

	string s;
	cin >> s;

	while(t--){
		for(int i = 0; i <= n-1; i++){
			if(s[i] == 'B' && s[i+1] == 'G'){
				swap(s[i], s[i+1]);
				i++;//we already swapped the characters
				//i++ so we move 1 character ahead of the swapped ones

			}
		}
	}

	cout << s << endl;



	return 0;
}


