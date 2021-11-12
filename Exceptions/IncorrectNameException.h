#ifndef FIGHT_GAME_DEMO_INCORRECT_NAME_EXCEPTION_H
#define FIGHT_GAME_DEMO_INCORRECT_NAME_EXCEPTION_H
#include<exception>

using namespace std;

class IncorrectNameException : public exception{
public:
    IncorrectNameException();

};


#endif
