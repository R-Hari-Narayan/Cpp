//Object oriented programming

#include<iostream>
using namespace std;

class hero{

    //Properties
    char level;
    int health;
    
    public:

    hero(int health, char level){
        this->health= health;
        this->level= level;
        
        cout<< "constructor is constructing"<< endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void putHealth(int h){
        health= h;
    }

    void putLevel(char l){
        level= l;
    }

};

int main(){

    //Creating objects
    hero Saitama(100, 'C');
    hero *Genos= new hero(20,'S');
    Saitama.putHealth(100);
    Saitama.putLevel('C');
    (*Genos).putHealth(25);
    Genos->putLevel('S');
    cout<< "Heath of Saitama: "<< Saitama.getHealth()<< endl;  
    cout<< "Level of Saitama: "<< Saitama.getLevel()<< endl;
    cout<< "Health of Genos: "<< Genos->getHealth()<< endl;
    cout<< "Level of Genos: "<< Genos ->getLevel()<< endl;
    delete Genos;
    return 0;
}