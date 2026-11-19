// Reads the size of an array and its elements (negative values are not
// allowed, the user is asked again). Then two different random indices
// M < N are drawn from 0..size-1. The program prints the array and, for
// the elements from index M to index N (both included), every distinct
// value together with the number of times it occurs in that range.
// Values are printed in order of their first appearance.
//
// Example: array 4 3 5 1 2 3 4 6 4 2 5 6, M = 3, N = 10
//          -> (1,1) (2,2) (3,1) (4,2) (6,1) (5,1)
#include<iostream>
#include<ctime>

int main(){
    srand(time(0));
    int size = 0, count = 0, seen_before = 0;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    if(size <= 1){
        std::cout << "The size of the array must be greater than 1\n";
        return 1;
    }
    int *arr = new int[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
        while(arr[i] < 0){
            std::cout << "The value must not be negative, enter it again: ";
            std::cin >> arr[i];
        }
    }

    int M = rand() % size;
    int N = rand() % size;

    while(M == N){
        M = rand() % size;
        N = rand() % size;
    }

    if(M > N){
        int temp = M;
        M = N;
        N = temp;
    }

    for(int i = 0; i < size; i++){
        std::cout << "Element " << i + 1 << ": " << arr[i] << '\n';
    }

    for(int i = M; i <= N; i++){
        int value = arr[i];

        for(int j = i; j > M; j--){
            if(value == arr[j - 1]){
                seen_before++;
                break;
            }
        }
        if(seen_before > 0){
            seen_before = 0;
            continue;
        }

        for(int j = i; j <= N; j++){
            if(arr[i] == arr[j]){
                count++;
            }
            if(j == N){
                std::cout << "(" << arr[i] << "," << count << ") ";
                count = 0;
            }
        }
    }
    std::cout << '\n';

    delete[] arr;

    return 0;
}
