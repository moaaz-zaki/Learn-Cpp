#ifndef _PERSON_H
#define _PERSON_H
#include <iostream>
#include <string>
using namespace std;

class person
{
private:
    string name, gander;
    int age;

public:
    // person(){
    //     name = "Unknown";
    //     gander = "Unknown";
    //     age = 0;
    // }

    // person(string n, string g, int a) : name(n), gander(g), age(a){
    // }

    void set_name(string n){
        name = n;
    }

    string get_name(){
        return name;
    }

    void set_gander(string g){
        gander = g;
    }

    string get_gander(){
        return gander;
    }

    void set_age(int a){
        age = a;
    }

    int get_age(){
        return age;
    }

    void display_info(){
        cout << "==========================\n";
        cout << "#Information:  \n";
        cout << "==========================\n";
        cout << "#Name: " << name << "\n#Gander: " << gander << "\n#Age: " << age << endl;
    }

};

#endif