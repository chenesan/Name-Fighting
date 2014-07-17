#ifndef BATTLE_H_INCLUDED
#define BATTLE_H_INCLUDED

#include"character.h"
#include<ctime>
#include<cstdlib>
#include<iostream>

//calculate to check whether the attack succeeds
bool hit_or_not(character hitter, character defenser);

//calculate the damage
int damage_cal(character hitter, character &defenser);

//fighting process
bool fighting(character player1,character &player2);


#endif // BATTLE_H_INCLUDED
