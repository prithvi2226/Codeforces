/*
	Name : Prithvi Prathapan
	Application : 224A-parallelpiped
	Lang : CPP
	Date : 23 - 3 - 23

*/


#include<iostream>
#include<cstdlib>
#include<math.h>

int Sum(int x, int y, int z);

int Sum(int x, int y, int z){

	int A = sqrt(x*y/z);
	int B = sqrt(y*z/x);
	int C = sqrt(x*z/y);



	int result = 4*(A + B + C);

	return result;

}


int main(int argc, char const *argv[])
{
	/* code */

	int x, y, z;

	std::cin >> x;
	std::cin >> y;
	std::cin >> z;

	int res = Sum(x, y, z);


	std::cout << res << std::endl;


	return 0;
}










