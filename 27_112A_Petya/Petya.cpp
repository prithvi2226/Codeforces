#include<iostream>
#include<cstdio>
#include<string>

using namespace std;


int main(){

  string s;
  string a;

  cin >> s;
  cin >> a;
  
  for(int i = 0; i < s.size(); i ++){

    if(s[i] <= 92){
      s[i] = s[i] + 32;
    }

    if(a[i] <= 92){
      a[i] = a[i] + 32;
    }
  }


  if(s < a){

    cout << -1 << endl;
  }

  if(s == a){
    cout << 0 << endl;
  }

  if(s > a){
    cout << 1 << endl;
  }



//  cout << s << endl;
  
  return 0;


}
