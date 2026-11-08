#include<iostream>

int main(){
    double score, grade;

    std::cout << "Enter your score (0-100): ";
    std::cin >> score;

    if (score < 0 || score > 100)
    {
        std::cout << "Invalid score. \n";
        return 1;
    }

    if (score < 50) {
        grade = 2.0;
    } else if (score <= 60) {
        grade = 3.0;
    } else if (score <= 70) {
        grade = 3.5;
    } else if (score <= 80) {
        grade = 4.0;
    } else if (score <= 90) {
        grade = 4.5;
    } else {
        grade = 5.0;
    }

    std::cout << "Your grade: " << grade << '\n';

    return 0;
}
