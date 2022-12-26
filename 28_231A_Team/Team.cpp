#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>


using namespace std;


int main(){

  int n, p, v, t;

  cin >> n;

  int count = 0;

  for(int j = 0; j < n; j++){

    cin >> p >> v >> t;


    if((p == 1 && v == 1) || (p == 1 && t == 1) || (v == 1 && t == 1)){
      count += 1;
    }
  }

  cout << count;





  return 0;
}




