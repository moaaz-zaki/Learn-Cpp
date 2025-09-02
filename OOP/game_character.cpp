#include "game_character.h"
#include <iostream>
#include <string>
using namespace std;

game_character::game_character(string name, int age)
{
    gamer = name;
    health = age;
    cout << "Character Enter To Game\n";
}

game_character::game_character()
{
    gamer = "moaaz";
    health = 90;
    cout << "Character Enter To Game\n";
}

game_character::~game_character()
{
    cout << "Character Remove From Game\n";
}

string game_character::get_name()
{
    return gamer;
}

int game_character::get_health()
{
    return health;
}
