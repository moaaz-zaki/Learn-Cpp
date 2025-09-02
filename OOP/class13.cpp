#include <iostream>
#include <string>
using namespace std;

class game_character
{
    private:
    string name;
    int health;

    public:
    game_character (string gamer , int died)
    {
        name = gamer ;
        health = died;
        cout << "Character " << name << " Enter To Game\n";
    }
    game_character ()
    {
        name = "moaaz" ;
        health = 90 ;
        cout << "Character " << name << " Enter To Game\n";
    }
    ~game_character ()
    {
        cout << "Character " << name << " Remove Game\n";
    }
    string get_name ()
    {
        return name;
    }

    int get_health ()
    {
        return health;
    }

};

int main ()
{
    game_character char1 ("mohamed" , 99);
    cout << "Your Name Is " << char1.get_name() << " And Health Is " << char1.get_health() << endl;
    return 0;
}