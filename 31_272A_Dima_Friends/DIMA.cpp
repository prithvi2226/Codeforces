/*
	Name : Prithvi Prathapan
	Application : 272A - Dima & Friends BruteForce 
	Lang : CPP
	Date : 3 - 2 - 23

*/


#include<iostream>
#include<cstdlib>
#include<algorithm>

int Dima(int num);

using std::string;


int Dima(int num){

	int arr[num];
	int count = 0, sum = 0;

	int total_peeps = num + 1;

	//int temp = num;

	for(int i = 0; i < num; i++){
		
		std::cin >> arr[num];
		sum += arr[num];
	}


	for(int i = 1; i <= 5; i ++){

		if((i + sum) % total_peeps != 1){

			count ++;
		}

	}

	return count;


}



int main(int argc, char const *argv[])
{
	
	int num_friends;

	std::cin >> num_friends;

	int dima = Dima(num_friends);

	std::cout << dima << std::endl;

	return 0;
}







