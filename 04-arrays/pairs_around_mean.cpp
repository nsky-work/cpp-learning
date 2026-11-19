 //Reads N, creates a dynamic array of N integers and fills it.
// Prints the array, then every unordered pair of elements standing on
// different positions where one element is smaller and the other one
// is greater than the arithmetic mean of the whole array.
// Pairs are listed by position: (0,1), (0,2), ..., (1,2), ...
//
// Example: N = 5, array 1 6 3 4 3 -> 1 6, 1 4, 6 3, 6 3, 3 4, 4 3
//          N = 4, array 7 2 0 -1  -> 7 0, 7 -1

#include<iostream>

int main(){
    int N = 0, sum = 0, count = 0;
    std::cout << "Enter the number of array elements: ";
    std::cin >> N;
    if(N < 1){
        std::cout << "The number of elements must be greater than 0\n";
        return 1;
    }
    int *arr = new int[N];
    for(int i = 0; i < N; i++){
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    for(int i = 0; i < N; i++){
        std::cout << "Element " << i + 1 << ": " << arr[i] << '\n';
        sum += arr[i];
    }
    double mean = sum / double(N);

    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if((arr[i] > mean && arr[j] < mean) || (arr[i] < mean && arr[j] > mean)){
                count++;
                if(count == 1){
                    std::cout << arr[i] << " " << arr[j];
                }else{
                    std::cout << ", " << arr[i] << " " << arr[j];
                }
            }
        }
    }

    delete[] arr;

    if(count == 0){
        std::cout << "There were no such pairs\n";
    }else{
        std::cout << '\n';
    }

    return 0;
}
