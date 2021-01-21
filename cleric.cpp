/**
 * cleric.cpp - CPE 212-01, Spring 2020 - Project02 - Class Inheritance
 */
#include "cleric.hpp"

/**
 * Cleric Class constructor
 * @param characterName The name of the character being created
 * @param characterRace The race of the character being created. This is a enum value.
 * @extends This constructor extends the base Character constructor
 * @attention Follow these instructions:
 *  Cleric starts with 50 health
 *  Assign the starter weapon for the Cleric
 *      Weapon
 *         name : "Simple Wand"
 *         cost : 100
 *         damage : 5
 *  Add the weapon to the Clerics inventory
 *  Assign a value of 10 for the base Cleric characteristic
 */
Cleric::Cleric(string characterName, Race characterRace) : Character::Character(characterName , characterRace)
{
	this->SetHealth(30);
	Weapon sw;
	sw.name = "simple wand";
	sw.cost = 100;
	sw.damage = 5;

	this->SetWeapon(sw);
	willpower = 10;
}

/**
 * Status Function
 * Public method Status that prints out the Status of the Cleric
 * @attention You MUST print out the local Cleric variables.
 *  The format for the print must be "PrivateVar: PrivateVal" where the name of the private variable is capitalized
 * @example For the private variable luck which is set to 7 you would print the following
 *      "Luck: 7"
 */
void Cleric::Status()
{
	cout << "willpower: " << willpower << endl;
}

/** 
 * Attack Function
 * Public method of Cleric that attacks an enemy Character
 * @param enemy Pointer to the enemy Character
 * @attention Follow these instructions:
 *  1. The damage for a Cleric is calculated by the weapon damage + half the willpower value
 *  2. The enemy Character must take the damage dealt by the Cleric
 *  3. Please print out the details of the attack in the following format
 *      <Character Name> attacks <Enemy Name> with <Character's Weapon Name> for <damage> points
 */
void Cleric::Attack(Character* enemy)
{
	int damage = GetWeapon().damage + willpower / 2;
	enemy->TakeDamage(damage);
	cout << "Cleric attacks " << enemy << " with " << this->GetWeapon().name << " for " << damage << " points " << endl;
}



/** 
 * Heal Function
 * Public method of Cleric that heals a target Character
 * @param target Pointer to the Character to be healed
 * @attention Follow these instructions:
 *  1. The heal amount for a Cleric is calculated by the base heal value 10 + half the willpower value
 *  2. The target Character must heal the amount dealt by the Cleric
 *  3. Please print out the details of the attack in the following format
 *      <Character Name> heals <Target Name> for <heal amount> points
 */
void Cleric::Heal(Character* target)
{
	int heal = 10 + willpower / 2;
	target->SetHealth(heal);
	cout << "Cleric heals " << target << " for " << heal << " points " << endl;
}