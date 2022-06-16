#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>

using namespace std;

int main(){

  string s, a, k, j;

  cin >> s >> a >> k;

  //s = "arab";

  //a = "saddam";
  
  //sort(s.begin(), s.end());

  j = s + a;

  sort(j.begin(), j.end());
  sort(k.begin(), k.end());

  if(j == k){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }


  return 0;

}






