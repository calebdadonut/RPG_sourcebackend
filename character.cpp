/**
 * character.cpp - CPE 212-01, Spring 2020 - Project02 - Class Inheritance
 */
#include "character.hpp"

// Implement the Constructors here
Character::Character()
{
}
Character::Character(string characterName, Race characterRace)
{
    name = characterName;
    race = characterRace;
}
// Implement the Observers here
string Character::GetName() const
{
    return name;

}
Race Character::GetRace() const
{
    return race;
}
int Character::GetLevel() const
{
    return level;
}
Weapon Character::GetWeapon() const
{
    return weapon;
}
int Character::GetExp() const
{
    return exp;
}
string Character::GetJob() const
{
    return job;
}
int Character::GetHealth() const
{
    return health;
}

// Implement the Transformers here
void Character::AddExp(int amount)
{
    cout << "adding exp..." << endl;
    exp = exp + amount;
}
void Character::SetHealth(int h)
{
    health = health + h;
}
void Character::SetJob(string j)
{
    job = j;
}

/**
 * Public method TakeDamage
 * @param damage The amount of damage taken by the Character
 * @attention DO NOT MODIFY
 */
void Character::TakeDamage(int damage) 
{
    cout << name << " takes " << damage << " points of damage." << endl;
    if ((health - damage) < 0)
    {
        cout << name << " has died." << endl;
        health = 0;
    }
    else 
    {
        health -= damage;
    }
}

/**
 * Public method to print the base Character's Status
 * @attention DO NOT MODIFY
 */
void Character::Status() {
    cout << job << " Status" << endl;
    cout << "Name: " << name << endl;
    cout << "Race: " << RaceStrings[race] << endl;
    cout << "Level: " << level << endl;
    cout << "Exp: " << exp << endl;
    cout << "Health: " << health << endl;
}
 void Character::SetWeapon(Weapon w)
{
     weapon.name = w.name;
     weapon.damage = w.damage;
     weapon.cost = w.cost;
     
}