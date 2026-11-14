//Pairs of neighbouring elements with exactly one minimum
//
// Reads N, creates a dynamic array of N integers and fills it.
// The array is split into disjoint pairs of neighbours:
// (0,1), (2,3), ... If N is odd, the last element has no pair.
// Prints every pair that contains exactly one occurrence of the
// smallest value in the whole array, and counts such pairs.
//
// Example: 1 -2 2 2 1 0 1 4 -2 2 3 1 -2 -2 4
//  pairs (1,-2) and (-2,2), 2 pairs in total.

#include<iostream>

int main(){
    int N = 0, licznik = 0;
    std::cout << "Enter the number of array elements: ";
    std::cin >> N;

    int *arr = new int[N];

    for(int i = 0; i < N; i++){
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int min_element = arr[0];
    for(int i = 0; i < N; i++){
        std::cout << "Element " << i + 1 << ": " << arr[i] << '\n';
        if(min_element > arr[i]){
            min_element = arr[i];
        }
    }

    for(int i = 0; i < N - 1; i += 2){
        if((arr[i] == min_element && arr[i + 1] != min_element) ||
           (arr[i] != min_element && arr[i + 1] == min_element)){
            licznik++;
            std::cout << "Pair " << licznik << ": " << arr[i] << ", " << arr[i + 1] << '\n';
        }
    }

    delete[] arr;

    if(licznik == 0){
        std::cout << "There were no such pairs\n";
    }else{
        std::cout << "Number of such pairs: " << licznik << '\n';
    }

    return 0;
}
