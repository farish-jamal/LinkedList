#include<bits/stdc++.h>
using namespace std;

// Greedy Aligment
// Padding
// Creation of class
class Hero{
    int health;
    char level;

    
    public:
    // Construcutor ->
    Hero(int health, char level){
        this->health = health;
        this->level = level;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char l){
        level = l;
    }

    void print(){
        cout << "Level -> " << level << endl << "Health -> " << health << endl; 
    }

    // Destructor
    ~Hero(){
        cout << "Destructor Called" << endl;
    }

};

int main(){
    // Creation of Object
    // Hero farish; // Static Allocation

    Hero *don = new Hero(21, 'A');

    // don -> setHealth(72);
    // don -> setLevel('A');

    // cout << "Health : " << (*don).getHealth() << endl;
    // cout << "Level : " << (*don).getLevel() << endl;

    // // Alternative ways to print dynamic object


    // cout << "Health : " << don -> getHealth() << endl;
    // cout << "Level : " << don -> getLevel() << endl;

    // Setter ->
    // farish.setHealth(70);
    // farish.setLevel('A');

    // // Getter ->
    // cout << "Health -> " << farish.getHealth() << endl;
    // cout << "Level -> " << farish.getLevel();

    // farish.health = 7;
    // farish.level = 'B';

    // cout << "Health -> " << farish.health << endl;
    // cout << "Level -> " << farish.level;


    // Copy Contructor ->

    Hero Krish(32, 'Z');
    // Hero Batman(Krish);

    // Krish.print();
    // Batman.print();

    Krish.print();
    don->print();

    // For Dynamic Object Creation
    delete don;

    return 0;
}