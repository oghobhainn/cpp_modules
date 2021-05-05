#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "LightSaber.hpp"
#include "Feather.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Werewolf.hpp"
#include "Droid.hpp"
#include "Character.hpp"

int main()
{
	// AWeapon awp("sniper", 50, 50); ===== can't do that because it's an abstract class
	//PlasmaRifle pr;
	//PowerFist pf;
	//LightSaber ls;
	//Feather fe;
	
	std::cout << "========= HORDE OF MONSTERS ==========" << std::endl << std::endl;

	SuperMutant *sm = new SuperMutant();
	RadScorpion *rs = new RadScorpion();
	Werewolf *ww = new Werewolf();
	Droid *dr = new Droid();

	std::cout << std::endl << "========= BADASS HERO ==========" << std::endl << std::endl;
	Character *bill = new Character("BillyBoy");
	std::cout << *bill;
	AWeapon* pr = new PlasmaRifle();
	bill->equip(pr);
	std::cout << *bill;
	AWeapon* pf = new PowerFist();
	bill->equip(pf);
	std::cout << *bill;
	AWeapon* fe = new Feather();
	bill->equip(fe);
	std::cout << *bill;
	bill->attack(dr);
	AWeapon *ls = new LightSaber();
	bill->equip(ls);
	std::cout << *bill;
	bill->attack(ww);
	bill->attack(rs);
	bill->attack(sm);

	std::cout << *bill;
	
	delete bill;
	bill = NULL;
	//delete pr;
	//pr = NULL;
	//delete pf;
	//pf = NULL;
	
//	if (bill)
//		delete bill;
	
	/*
Character* me = new Character("me");
std::cout << *me;
Enemy* b = new RadScorpion();
AWeapon* pr = new PlasmaRifle();
AWeapon* pf = new PowerFist();
me->equip(pr);
std::cout << *me;
me->equip(pf);
me->attack(b);
std::cout << *me;
me->equip(pr);
std::cout << *me;
me->attack(b);
std::cout << *me;
me->attack(b);
std::cout << *me;*/
return 0;
}