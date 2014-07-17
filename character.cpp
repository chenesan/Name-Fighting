#include<iostream>
#include "character.h"

using namespace std;

//constructor
character::character(string s)
{

    name=s;
    attack=rand()%100;
    defense=rand()%100;
    agility=rand()%100;
    speed=rand()%100;
    health=400-attack-defense-agility-speed;
}

character::character():character::character("wretch"){ }

//check the person live or not
bool character::live_or_not()
{
    if(health<=0)
        live=0;
    else live=1;

    return live;

}

//print ability
void character::print_total()
{
    cout<<name<<"\n"<<"---------\n"
        <<"attack "<<attack<<"defense "<<defense<<"\n"
        <<"agility "<<agility<<"speed "<<speed<<"\n"
        <<"health "<<health<<"\n";

}

