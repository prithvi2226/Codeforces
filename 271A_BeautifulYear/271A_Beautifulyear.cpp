#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>

using namespace std;

int main(){

	int year, ans, a, b, c, d;
	cin >> year;

	while(1){
		year++;
		ans = year;
		a = year%10;
		year = year/10;
		b = year%10;
		year = year/10;
		c = year%10;
		year = year/10;
		d = year;
		
		if(a != b && a != c && a != d && b != c && c != d && b != d){
			cout << ans;
			break;
		}
		year = ans;
		

	}
	return 0;
}


