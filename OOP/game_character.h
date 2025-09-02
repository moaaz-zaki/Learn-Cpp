#ifndef _GAME_CHARACTER_H
#define _GAME_CHARACTER_H

#include <string>
using namespace std;

class game_character
{
    private:
    string gamer;
    int health;

    public:
    game_character (string name , int age);
    game_character ();
    ~game_character();
    string get_name ();
    int get_health ();

};

#endif