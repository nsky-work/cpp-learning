#include<iostream>

int main()
{
    const int N = 5;
    int arr[N];

    for(int i = 0; i < N; i++){
        std::cout << "El" << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int max_el = arr[0], second_Max;
    bool foundSecond = false;

    for(int i = 0; i < N; i++){
        if(arr[i] > max_el){
            second_Max = max_el;
            foundSecond = true;
            max_el = arr[i];
        }else if(foundSecond == false && arr[i] < max_el){
            second_Max = arr[i];
            foundSecond = true;
        }else if(foundSecond == true && arr[i] < max_el && arr[i] > second_Max){
            second_Max = arr[i];
        }
    }

    std::cout << "Maximum: " << max_el << std::endl;

    if(foundSecond){
        std::cout << "Second maximum: " << second_Max << std::endl;
    }else{
        std::cout << "Second maximum doesnt exist" << std::endl;
    }

    return 0;
}
