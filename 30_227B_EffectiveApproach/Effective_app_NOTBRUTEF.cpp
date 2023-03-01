
/*
	Name : Prithvi Prathapan
	Application : 228B - Effective Approach Codeforces Maps
	Lang : CPP
	Date : 2 - 2 - 23

*/


#include<iostream>
#include<string>
#include<cstdlib>
#include<unordered_map>


using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	int n, q;
	int x, y;

	cin >> n;

	unordered_map<int, int> pos;

	for(int i = 0; i < n; i ++){
		cin >> x;
		pos[x] = i;
	}
	
	cin >> q;
	
	long long vatsya = 0;
	long long petya = 0;

	for(int i = 0; i < q; i++){
		cin >> y;

		vatsya = vatsya + static_cast<long long>(pos[y] + 1);
		petya = petya + static_cast<long long>(n - pos[y]);
	}


	cout << vatsya << " " << petya << endl;




	return 0;
}







