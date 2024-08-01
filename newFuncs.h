//
// Created by studiotwentyone on 01/08/2024.
//

#ifndef NEWFUNCS_H
#define NEWFUNCS_H

#include <string>
#include <iostream>


struct Question
{
    int id;
    std::string question;
    std::string answers[4];
    std::string rightAnswer;
    /* data */
};

void examTest(Question questions[]);



void beginTest(const std::string& sentence);

void addInts(int x, int y);

void substractInts(int x, int y);


#endif //NEWFUNCS_H
