/*
	Name : Prithvi Prathapan
	Application : 165A Supercentral
	Lang : CPP
	Date : 6 - 2 - 23

*/



#include<iostream>
#include<array>
#include<string>
#include<vector>
#include<utility>

int Supercentral(int num);

using std::string;

int Supercentral(int num){

	std::vector<std::pair<int, int>> cord;

	int x, y;

	int count = 0;
	

	for(int i = 0; i < num; i ++){

		std::cin >> x >> y;
		cord.push_back(std::make_pair(x, y));
	}

	for(auto c : cord){

		bool has_up = false, has_down = false, has_right = false, has_left = false;
		for(auto d : cord){

			if(d.first > c.first && d.second == c.second){
				has_right = true;
			}
			if(d.first < c.first && d.second == c.second){
				has_left = true;
			}
			if(d.first == c.first && d.second < c.second)
			{
				has_down = true;
			}
			if(d.first == c.first && d.second > c.second){
				has_up = true;
			}

		}

		if(has_up && has_down && has_left && has_right){
			count ++;
		}

	}

	return count;

}


int main(int argc, char const *argv[])
{
	/* code */
	int n;

	std::cin >> n;

	int supercent = Supercentral(n);

	std::cout << supercent << std::endl;

	return 0;
}

