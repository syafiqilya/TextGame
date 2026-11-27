#include <algorithm>
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
    //float spawn_rate;
    stats stats;
    int hp;
    int mana;
    void TakeDamage(int damage){
    if (damage <= 0) {
        return;
    }
    hp = max(0, hp - damage);
};
    
};





int main(){
    string usn;
    character player;
    cout << " enter character name ; ";
    getline(cin, usn);
    player.name = usn;
    player.stats = {100, 200, 20, 10};
    player.hp = player.stats.MaxHP;
    player.mana = player.stats.MaxMana;
    cout << player.name << " |HP " << player.hp << " |Mana " << player.mana << "|attack " << player.stats.attack << "|Intelegence " << player.stats.MaxMana << "\n";
    enemy slime; 
    slime.stats = {20, 0, 20, 4};
    slime.hp = slime.stats.MaxHP;
    slime.mana = slime.stats.MaxMana;
    cout << "you encounter a slime!!" << "\n"<<  "|HP"  << slime.stats.MaxHP << "|attack " << slime.stats.attack;
    slime.TakeDamage(player.stats.attack);
    if (slime.hp == 0) {
    cout << "slime has been defeated";
    }
    return 0; 
    //scanf("enter character name %s", &character.name)

}
