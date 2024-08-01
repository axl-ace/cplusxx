

#include <iostream>
#include  "newFuncs.h"

Question questions[4] = {
    {1, "What is the capital of France?", {"London", "Paris", "Berlin", "Madrid"}, "Paris"},
    {2, "What is the capital of England?", {"Rome", "London", "Naples", "Florence"}, "London"},
    {3, "What is the capital of Ukraine?", {"Rome", "Milan", "Kiev", "Florence"}, "Kiev"},
    {4, "What is the capital of Rusia?", {"Rome", "Moscow", "Naples", "Florence"}, "Moscow"},
};

void printHi() {
    std::cout << "Hello and how are you doing today?" << std::endl;
}

int main()
{
    printHi();
    addInts(9,4);
    substractInts(5, 2);

    beginTest("Please answer the following questions:");
    examTest(questions);
    return 0;
};

