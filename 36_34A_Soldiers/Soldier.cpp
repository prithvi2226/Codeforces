/*
    Name : Prithvi Prathapan
    Application : Soldier
    Lang : C++
    Date : 28 - 3 - 23
*/

#include <iostream>
#include <vector>
#include <climits>

std::vector<int> soldier(int n);

std::vector<int> soldier(int n){
    int min_diff = INT_MAX, left, right, max = INT_MAX;

    std::vector<int> arr(n);

    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    for(int i = 0; i < n-1; i++){
        int diff = std::abs(arr[i] - arr[i+1]);
       
        if(diff < min_diff){
            min_diff = diff;
            left = i+1;
            right = i+2;
        }
    }
    
    int diff = std::abs(arr[n-1] - arr[0]);
    if(diff < min_diff){
        min_diff = diff;
        left = n;
        right = 1;
    }
    
    std::vector<int> result(2);
    result[0] = left;
    result[1] = right;

    return result;
}

int main(int argc, char const *argv[]){
    int n;
    std::cin >> n;

    std::vector<int> arr = soldier(n);

    std::cout << arr[0] <<" "<< arr[1] << std::endl;

    return 0;
}
