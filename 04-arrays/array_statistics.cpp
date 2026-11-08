#include<iostream>

int main(){
    const int N = 5;
    int arr[N];

    for(int i = 0; i < N; i++){
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    int sum = 0, max_el = arr[0], min_el = arr[0], negative_count = 0, positive_count = 0, zero_count = 0, max_index = 0;

    for(int i = 0; i < N; i++){
        std::cout << "Element " << i + 1 << ": " << arr[i] << '\n';
        sum += arr[i];
        if(max_el < arr[i]){
            max_el = arr[i];
            max_index = i;
        }
        if(min_el > arr[i]){
            min_el = arr[i];
        }
        if(arr[i] > 0){
            positive_count++;
        }
        else if(arr[i] < 0){
            negative_count++;
        }
        else{
            zero_count++;
        }
    }
    std::cout << "The sum is: " << sum << '\n';
    std::cout << "The average is: " << double(sum) / N << '\n';
    std::cout << "The maximum element is: " << max_el << '\n';
    std::cout << "The minimum element is: " << min_el << '\n';
    std::cout << "Number of positive elements: " << positive_count << '\n';
    std::cout << "Number of negative elements: " << negative_count << '\n';
    std::cout << "Number of zeros: " << zero_count << '\n';
    std::cout << "Index of the maximum element: " << max_index + 1 << '\n';

    return 0;
}
