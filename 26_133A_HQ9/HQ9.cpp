#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main(){

  string s;
  cin >> s;

  for(int i = 0; s[i] != '\0'; i++){

    if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
      
      cout << "YES"<< endl;
      return 0;
    }

  }

  cout << "NO" << endl;
  return 0;



}
