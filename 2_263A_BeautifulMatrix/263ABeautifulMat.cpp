
/*
#include<iostream>


using namespace std;

int main(){
	int pmatrix[5][5], i, j, m = 0, n = 0, count = 0, sum = 0, k = 0;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			cin >> pmatrix[i][j];
			
			sum = sum + pmatrix[i][j];
			if(sum == 1){
				k++;
				if(k == 1){
					m = i;
					n = j;
				}

			}
		}
	}

	while(m != 2){
		count++;
		if(m >= 3){
			m--;
		}
		else{
			m++;
		}
	}

	while(n != 2){
		count++;
		if(n >= 3){
			n--;
		}
		else{
			n++;
		}
	}

	cout << count << endl;

}
*/


/*
	Name : Prithvi Prathap
	Email : ppratha1@asu.edu
	Application : Codeforces Beautiful Matrix
	Language : C++
	Date : 21 - 12 - 2022
*/



#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	
	int count = 0;

	int matrix[5][5];

	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){

			cin >> matrix[i][j];

		}
	}

	int row = 0, col = 0;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){

			if(matrix[i][j] == 1){

				row = i;
				col = j;


			}


		}
	}

	//cout << matrix[row][col] << endl;

	while(row != 2){

		count ++;

		if(row < 2){
			row ++;
		}
		else{
			row --;
		}
	}

	

	while(col != 2){

		count ++;

		if(col < 2){
			col ++;
			
		}
		else{
			col --;
		}


	}
		
	

	cout << count << endl;








	return 0;
}




































































































