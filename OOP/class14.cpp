#include "game_character.h"
#include <iostream>
using namespace std;

int main ()
{
    game_character char1("mohame" , 99);
    cout << "Character Name Is " << char1.get_name() << " Health Is " << char1.get_health() << endl;
    return 0;
}