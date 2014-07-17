#include <iostream>
#include <string>
#include "character.h"
#include "battle.h"

using namespace std;

int main()
{

    srand(time(NULL));

    //build characters
    string name_player,name_opposite;
    cout<<"你的名字："<<endl;
    cin>>name_player;
    cout<<"對手的名字："<<endl;
    cin>>name_opposite;
    character player(name_player);
    character opposite(name_opposite);

    //print the ability
    player.print_total();
    opposite.print_total();

    //decide which one attack at first
    system("pause");
    character first_fighter,back_fighter;
    if(player.access_spd()>opposite.access_spd())
    {
        first_fighter=player;
        back_fighter=opposite;
    }
    else
    {
        first_fighter=opposite;
        back_fighter=player;
    }

    cout<<"戰鬥開始!!\n";

    //start battle
    while(1)
    {

        if(fighting(first_fighter,back_fighter))
            break;
        back_fighter.print_total();
        _sleep(1500);//time dilation
        if(fighting(back_fighter,first_fighter))
            break;
        first_fighter.print_total();
        _sleep(1500);
    }
        system("pause");


    return 0;
}
