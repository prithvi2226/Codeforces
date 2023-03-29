/*
	Name : Prithvi Prathapan
	Application : 139A petr and Book
	Lang : CPP
	Date : 20 - 3 - 23

*/

#include<iostream>
#include<cstdlib>
#include<math.h>
#include<utility>
#include<vector>


int Days(int num);

int Days(int num){
	
	std::vector<std::pair<int, int>> week;
	int a = num;
	int read;

	for(int i = 1; i <= 7; i++){

		std::cin >> read;
		week.push_back(std::make_pair(i, read));
	}

	int count = 1;

	while(num > 0){

		if(count > 7){
			count = 1;
		}
	
		num = num - week[count].second;

		count ++;
	}

	return count - 1;


}


int main(int argc, char const *argv[])
{
	/* code */
	int n;

	std::cin >> n;

	int day = Days(n);

	std::cout << day << std::endl;


	return 0;
}




