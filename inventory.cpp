#include "inventory.hpp"

/**
 * Inventory Constructor
 * Add the following item to the inventory
 * Item:
 *  name : "Basic Health Potion"
 *  value: 10
 *  type: POTION
 */
Inventory::Inventory()
{
	this->length = 0;
	Item bhp;
		bhp.name = "basic health postion";
		bhp.value = 10;
		bhp.type = POTION;

		this->AddToInventory(bhp);
		
}
/**
 * AddToInventory Function
 * Function that adds items to the inventory
 */ 
void Inventory::AddToInventory(Item i)
{
	//set up logic to add item to a array if not full
	
	if (length < 10)
	{
		items[length] = i;
		length++;
		cout << "sucessfully added to inventory!" << endl;
	}
	else
	{
		cout << "cannot add because inventory full..." << endl;

	}
}
/**
 * ShowInventory Function
 * Function that shows all items in the inventory
 * @attention Make sure that you format the output string as follows:
 *  Item - <Item Name> Value: <Item Value>
 */  
void Inventory::ShowInventory()
{
	for (auto v : items)
	{

		cout << "Item - " << v.name << " value: " << v.value << endl;
	}

}