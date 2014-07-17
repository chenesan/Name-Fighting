#include<iostream>
#include "battle.h"

using namespace std;

//decide the defenser is hit or not
bool hit_or_not(character hitter,character defenser)
{

    if((defenser.agility)*((double)(rand()%10/10)+0.5>rand()%100))//rand()%10 is unsigned,do the cast to
        return 0;                                                 //get ratio.
    else return 1;
}

//calculate the damage of defenser
int damage_cal(character hitter,character& defenser)
{
    int damage;
    double ratio_damage;
    ratio_damage=((double)(rand()%10)/10)+0.5;
    if(hitter.attack>defenser.defense)
        damage=(5+hitter.attack-defenser.defense)*ratio_damage;
    else damage=5*ratio_damage;
    defenser.health-=damage;

    return damage;

}

//total fighting process
bool fighting(character attacker,character &defenser)
{
    cout<<attacker.name<<"對"
        <<defenser.name<<"展開攻擊!!\n";
    if(!hit_or_not(attacker,defenser))
    {
        cout<<defenser.name<<"躲過了"
            <<attacker.name<<"的攻擊!!\n";
    }
    else
    {
        cout<<defenser.name<<"受到"
            <<damage_cal(attacker,defenser) <<"點傷害!!\n";
    }
    if(!defenser.live_or_not())
    {
        cout<<defenser.name<<"失去戰鬥能力!\n"
            <<attacker.name<<"獲勝!\n";
        return 1;
    }
    return 0;
}

