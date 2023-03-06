/*
	Name : Prithvi Prathapan
	Application : 450 A Jzzhu & Children
	Lang : CPP
	Date : 6 - 2 - 23

*/


#include<iostream> 
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<queue>

int lastkid(int num, int candi);

using std::string;

int lastkid(int num, int candi){

	std::queue<std::pair<int, int>> q;
	int a;

	for(int i = 1; i <= num; i ++){

		std::cin >> a;
		q.push({i, a});
	}

	int last_child = 0;


	while(!q.empty()){
		auto child = q.front();
		q.pop();

		if(child.second <= candi){
			last_child = child.first;
		}
		else{
			child.second = child.second - candi;
			q.push(child);
		}
	}

	return last_child;

}


int main(int argc, char const *argv[])
{
	int n, m;

	std::cin >> n;

	std::cin >> m;

	int last = lastkid(n, m);

	std::cout << last << std::endl;


	return 0;
}


