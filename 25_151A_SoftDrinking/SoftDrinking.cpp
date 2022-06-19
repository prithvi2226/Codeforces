#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;


int main(){

  int n, k, l, c, d, p, nl, np;

  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  //Total drinks possible
  int total_drinks;
  total_drinks = k * l;
  total_drinks = total_drinks/nl;

  //Total slices of lime possible
  int slices;
  slices = c * d;

  //Total salts possible
  int salts;
  salts = p/np;

  int ans = min(min(total_drinks, slices), salts)/n;

  cout << ans << endl;
    


  return 0;



}

