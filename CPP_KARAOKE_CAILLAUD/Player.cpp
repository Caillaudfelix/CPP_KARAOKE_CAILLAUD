#include <iostream>
#include <string>
#include "Player.h"

void Player::getName()
{
    string name;
    std::cout << "Votre nom est" << name << std::endl;
    return 0;
}

void Player::getScore1(int Score1)
{

}

void Player::getScore2(int Score2)
{
    
}

void Player::getScore3(int Score3)
{
    
}

void Player::getScore4(int Score4)
{
    
}

void Player::getScore5(int Score5)
{
    
}

void Player::getBestScore(int currentScore, int bestScore)
{
    string currentScore;
    string bestScore;
    if (currentScore >= score2) || (currentScore >= score3) || (currentScore >= score4) || (currentScore >= score5)
        currentScore = bestScore;
        std::cout << "Votre meilleur score est de" << bestScore << std::endl;
        bestScore = currentScore;
    return 0;
}

void Player::getWorstScore(int currentScore, int worstScore)
{
    string currentScore;
    string worstScore;
    if (currentScore <= score2) || (currentScore <= score3) || (currentScore <= score4) || (currentScore <= score5)
        currentScore = worstScore;
        std::cout << "Votre pire score est de" << worstScore << std::endl;
}