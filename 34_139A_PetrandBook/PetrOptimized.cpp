/*
	Name : Prithvi Prathapan
	Application : 139A petr and Book OPTIMIZED
	Lang : CPP
	Date : 20 - 3 - 23

*/

#include<iostream>
#include<cstdlib>
#include<math.h>
#include<array>



int Days(int num);

int Days(int num){
	
	int arr[7];
	int a = num;
	int read;

	for(int i = 0; i < 7; i++){

		std::cin >> arr[i];
	}

	int count = 0;

	while(num > 0){

		if(count > 6){
			count = 0;
		}
	
		num = num - arr[count];

		count ++;
	}

	return count;


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




