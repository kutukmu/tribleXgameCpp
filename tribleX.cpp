#include <iostream>

int main()
{

    std::cout << "You are a secret agent breaking into a secure server room " << std::endl;
    std::cout << "You need to enter the correct code to continue... " << std::endl;

    int CodeA = 10;
    int CodeC = 20;
    int CodeB = 30;

    int CodeSum = CodeA + CodeC + CodeB;
    int CodeProduct = CodeA * CodeC * CodeB;

    std::cout << "There are 3 numbers in the code: " << CodeA << ", " << CodeB << ", " << CodeC << std::endl;
    std::cout << "The codes add up to: " << CodeSum << std::endl;

    int GuessA, GuessB, GuessC;

    std::cout << "Plase guess the number " << std::endl;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You Win!!" << std::endl;
    }
    else
    {
        std::cout << "You lost!!" << std::endl;
    }

    return 0;
}