/**
 * rogue.cpp - CPE 212-01, Spring 2020 - Project02 - Class Inheritance
 */
#include "rogue.hpp"

/**
 * Rogue Class constructor
 * @param characterName The name of the character being created
 * @param characterRace The race of the character being created. This is a enum value.
 * @extends This constructor extends the base Character constructor
 * @attention Follow these instructions:
 *  Cleric starts with 100 health
 *  Assign the starter weapon for the Cleric
 *      Weapon
 *         name : "Starter Daggers"
 *         cost : 100
 *         damage : 5
 *  Add the weapon to the Clerics inventory
 *  Assign a value of 10 for the base Rogue characteristic
 */
Rogue::Rogue(string characterName, Race characterRace) : Character(characterName,characterRace)
{
	this->SetHealth(100);
	Weapon dagger;
	dagger.name = "dagger";
	dagger.damage = 5;
	dagger.cost = 100;
	this->SetWeapon(dagger);
	dexterity = 10;
}
/**
 * Public method of Rogue that attacks an enemy Character
 * @param enemy Pointer to the enemy Character
 * @attention Follow these instructions:
 *  1. The damage for a Rogue is calculated by the weapon damage + half the dexterity value
 *  2. The enemy Character must take the damage dealt by the Rogue
 *  3. Please print out the details of the attack in the following format
 *      <Character Name> attacks <Enemy Name> with <Character's Weapon Name> for <damage> points
 */
void Rogue::Attack(Character* target)
{
	int damage = GetWeapon().damage + (this->dexterity / 2);
	target->TakeDamage(damage);
	cout << "character rouge attacks character" << target << " with " << this->GetWeapon().name << " for " << damage << " points " << endl;
}
/**
 * Public method of Rogue that Back Stabs a target Character
 * @param target Pointer to the Character to be healed
 * @attention Follow these instructions:
 *  1. The Back Stab damage for a Rogue is calculated by the weapon damage + base damage value 50 + half the dexterity value
 *  2. The target Character must take damage the amount dealt by the Rogue
 *  3. Please print out the details of the attack in the following format
 *      <Character Name> Back Stabs <Target Name> for <damage amount> points
 */
void Rogue::BackStab(Character* target)
{
	int damage = this->GetWeapon().damage + 50 + int(this->dexterity / 2);
	target->TakeDamage(damage);
	cout << "Rogue back stabs " << target << " with " << this->GetWeapon().name << " for " << damage << " points " << endl;
	//print
	//l8ter
}
/**
 * Public method Status that prints out the Status of the Rogue
 * @attention You MUST print out the local Rogue variables.
 *  The format for the print must be "PrivateVar: PrivateVal" where the name of the private variable is capitalized
 * @example For the private variable luck which is set to 7 you would print the following
 *      "Luck: 7"
 */ 
void Rogue::Status()
{
	cout << "Dexterity: " << dexterity << endl;
}