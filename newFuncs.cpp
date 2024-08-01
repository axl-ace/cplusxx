//
// Created by studiotwentyone on 01/08/2024.
//

#include "newFuncs.h"
#include  <iostream>
#include <string>


void examTest(Question questions[]){
    int sumx = 0;
    for (int i = 0; i < 4; i++)
    {
        const Question &question = questions[i];
        std::string myAnswer;
        std::cout << question.question << std::endl;
        for (const auto & answer : question.answers)
        {
            std::cout << answer << std::endl;
        }
        std::cout << " " << std::endl;
        std::cout << "Your answer: ";
        std::cin >> myAnswer;

        if (myAnswer == question.rightAnswer)
        {
            sumx += 1;
            std::cout << "Correct!" << std::endl;
            std::cout << " " << std::endl;
        }
        else
        {
            std::cout << "Incorrect!" << std::endl;
            std::cout << " " << std::endl;
        }
    }
    std::cout << "Your score: " << sumx << std::endl;
};


void beginTest(const std::string& sentence) {
    std::cout << sentence << std::endl;
}


void addInts(int x, int y) {
    int sum = x + y;
    std::cout << "The sum of " << x << " and " << y << " is " << sum << std::endl;
}


void substractInts(int x, int y) {
    int difference = x - y;
    std::cout << "The difference  of " << x << " and " << y << " is " << difference << std::endl;
}
