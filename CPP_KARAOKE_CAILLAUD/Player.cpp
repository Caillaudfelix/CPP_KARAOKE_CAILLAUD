#include <iostream>
#include <string>
#include "Player.h"

void Player::getName()
{
    string name;
    name = "Jean-Eudes";
    std::cout << "Votre nom est" << name << std::endl;
    return 0;
}

void Player::getScore1()
{
    int score1;
    score1 = 67;
    std::cout << "Score 1 : " << score1 << std::endl;
    currentScore = score1;
    return 0;
}

void Player::getScore2()
{
    int score2;
    int currentScore;
    score2 = 98;
    std::cout << "Score 1 : " << score2 << std::endl;
    currentScore = score2;
    return 0;   
}

void Player::getScore3()
{
    int score3;
    int currentScore;
    score3 = 76;
    std::cout << "Score 3 : " << score3 << std::endl;
    currentScore = score3;
    return 0;    
}

void Player::getScore4()
{
    int score4;
    int currentScore;
    score4 = 53;
    std::cout << "Score 4 : " << score4 << std::endl;
    currentScore = score4;
    return 0;   
}

void Player::getScore5()
{
    int score5;
    int currentScore;
    score5 = 61;
    std::cout << "Score 5 : " << score5 << std::endl;
    currentScore = score5;
    return 0;     
}

void Player::getBestScore(int currentScore, int bestScore)
{
    if (currentScore > score1) || (currentScore > score2) || (currentScore > score3) || (currentScore > score4) || (currentScore > score5)
        currentScore = bestScore;
        std::cout << "Votre meilleur score est de" << bestScore << std::endl;
        bestScore = currentScore;
    return 0;
}

void Player::getWorstScore(int currentScore, int worstScore)
{
    if (currentScore < score 1) || (currentScore < score2) || (currentScore < score3) || (currentScore < score4) || (currentScore < score5)
        currentScore = worstScore;
        std::cout << "Votre pire score est de" << worstScore << std::endl;
    return 0;
}