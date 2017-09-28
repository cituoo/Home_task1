#include <iostream>

int main() {
// Задание 6
    int threeDigitNum = 0;
    std::cout << "Enter three-digit number: " << std::endl;
    std::cin >> threeDigitNum;
    int doubleDigitNum = threeDigitNum % 10;
    int newThreeDigitNum = threeDigitNum / 10;

    std::cout << "New number is: " <<doubleDigitNum  << newThreeDigitNum << std::endl;

// Задание 19
    int givenNum = 546;
    int primaryNum = ((givenNum%100)/10)*100 + ((givenNum - givenNum%100)/100)*10 + givenNum%10;
    std::cout << primaryNum << std::endl;
    return 0;
}
