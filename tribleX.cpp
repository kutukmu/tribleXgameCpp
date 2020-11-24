#include <iostream>

void PrintIntroduction(int diff)
{
    std::cout << "You are a secret agent breaking into ";
    std::cout << diff << " level secure server room" << std::endl;
    std::cout << "You need to enter the correct code to continue... " << std::endl;
}

bool Playgame(int difficulty, int maxLevel)
{

    PrintIntroduction(difficulty);

    int CodeA = 10;
    int CodeC = 20;
    int CodeB = 30;

    int CodeSum = CodeA + CodeC + CodeB;
    int CodeProduct = CodeA * CodeC * CodeB;

    std::cout << "\nThe codes add up to: " << CodeSum;
    std::cout << "\nCode Product: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;

    std::cout << "\nPlase guess the number " << std::endl;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {

        if (difficulty < maxLevel)
        {
            std::cout << "Great You are on the next level" << std::endl;
        }

        if (difficulty == maxLevel)
        {
            std::cout << "You win !!" << std::endl;
        }

        return true;
    }
    else
    {
        std::cout << "You Lost!!" << std::endl;
        return false;
    }
}

int main()
{

    int levelDiff = 1;
    const int MaxLevel = 10;
    while (levelDiff <= 10)
    {
        bool bLevelComplete;
        bLevelComplete = Playgame(levelDiff, MaxLevel);

        if (!bLevelComplete)
        {
            break;
        }
        else
        {
            levelDiff++;
        }

        std::cin.clear();
        std::cin.ignore();
    }

    return 0;
}