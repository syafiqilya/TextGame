#include <iostream>
#include <string>


using namespace std;

struct stats{
    int MaxHP;
    int MaxMana;
    int intelegence;
    int attack;
};

class item{
    string name;
    stats bonus;
};
class character{
    public:
   string name;
   stats stats; 
    int hp;
    int mana;

};
class enemy{
    public:
    string name;
    stats stats
    
}

int main(){
    string usn;
    character player;
    cout << " enter character name ; ";
    getline(cin, usn);
    player.name = usn;
    player.hp = 100;
    player.mana = 20;
    player.stats = {100, 200, 20, 10};
    cout << player.name << " |HP " << player.stats.MaxHP << " |Mana " << player.stats.MaxMana << "|Sttack " << player.stats.attack << "|Intelegence" << player.stats.MaxMana;
    return 0;
    //scanf("enter character name %s", &character.name)

}
