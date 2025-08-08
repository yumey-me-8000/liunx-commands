#include <iostream>
#include <time.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

string answer;
string name = "Larry";
string cheat;
string enemyname = "Slime A";
string enemyname2 = "Slime B";
string enemyname3 = "Slime C";
string weptype = "Rusty Knife";
string bowtype = "Old Bow";
string dtype = "One Handed";
string mdebuff = "";
string enchantment = "";
string benchantment = "";
string bdebuff = "";
string fastlevel; // This is the class variable, it is called fastlevel because if I name it 'class' it doesn't compile, probably because classes are a thing in cpp so it thinks i am trying to make one of those.
string minionname;
string minionname2;
bool minionsummoned = 0;
bool minion2summoned = 0;
int minionlevel;
int miniondamage = 3;
int miniondamage2;
int minionmagic = 1;
int minionmagic2 = 1;
int minionhealth = 30;
int minionhealth2;
int minionmaxhealth = 30;
int minionmaxhealth2;
int lightdamage = 0;
int heavydamage = 0;
int magicdamage = 0;
int bowleveldamage = 0;
int which = 0;
int rare;
string gweptype = "Mossy Wand";
string spell = "Fireball";
string spell2 = "";
string spell3 = "";
string lastweapon;
float lifestealamount = 0;
int bitedamage = 5;
int isdefending = 0;
int alldamage;
int enemylevel;
int atb = 0;
int one = 0;
int commonchance = 100; // if the random value that randoms when you kill a guy is less than this value it will be common, same for other rarities.
int uncommonchance = 20;
int rarechance = 6;
int legendarychance = 2;
int islifesteal = 0;
int ismagiclifesteal = 0;
int stolenlife = 0;
int extracritchance = 0;
float defence = 1;
float armordefence = 1;
int damage = 4;
int damage2 = 6;
int critchance = 4; // out of 100
int mdebuffdamage = 0;
int mdlength = 0;
int mdleft = 0;
int bdleft = 0;
int bdlength = 0;
int bdebuffdamage = 0;
int wepdamage;
int gwepdamage;
int bowdamage;
int arrows = 13;
int bdamage = 6;
int bdamage2 = 8;
int health = 130;
int maxhealth = 130;
int dropgold = 5;
int gold = 15;
int ammo = 5;
int fireammo;
int iceammo;
int magic = 10;
int usemagic = 1;
int usemagic2 = 0;
int usemagic3 = 1;
int mdamage = 8;
int mdamage2 = 10;
int fdamage = 0;
int fdamage2 = 0;
int idamage = 0;
int idamage2 = 0;
int debuff1 = 0;
int debuff2 = 0;
int debuff3 = 0;
int dlength1 = 0;
int dlength2 = 0;
int dlength3 = 0;
int dleft1 = 0;
int dleft2 = 0;
int dleft3 = 0;
string debuffname1 = "";
string debuffname2 = "";
string debuffname3 = "";
int type1 = 0;
int type2 = 0;
int isboss = 1;
int healchance = 0;
int healchance2 = 0;
int healchance3 = 0;
int emagic = 0;
int emagic2 = 0;
int emagic3 = 0;
int canheal = 0;
int canheal2 = 0;
int canheal3 = 0;
int eheal = 0;
int eheal2 = 0;
int eheal3 = 0;
int etotal2;
int etotal3;
int strong = 0;
int strong2 = 0;
int strong3 = 0;
int ehealth = 10;
int ehealth2 = 10;
int ehealth3 = 10;
int edamage = 2;
int edamage2 = 3;
int edamage3 = 2;
int edamage4 = 3;
int edamage5 = 2;
int edamage6 = 3;
int eamount = 1;
int turn = 1;
int attacked;
int heal = 16;
int first;
int droppedxp = 30;
int neededxp = 100;
int needmore;
int xp = 0;
int enxp = 0;
int level = 1;
int chance;
int wanted = 0;
int mission = 1;
int isdead;
void enemydie();
void fight();
void enemyattack();
void stats();

int
main()
{

	srand(time(NULL));
	cout << "Do you want to read tutorial? y/n\n";
	while (true)
	{
		cin >> answer;
		if (answer == "y" || answer == "n" || answer == "snek" || answer == "metalslime")
		{
			break;
		}
		if (answer == "p")
		{
			stats();
		}

	}
	if (answer == "snek")
	{
		cheat = "snek";
		damage = damage + 18262;
		damage2 = damage2 + 27422;
		health = health + 18262;
		defence = defence + 272;
		mdamage = 27482;
		mdamage2 = 24355;
		fdamage = 123332;
		fdamage2 = 1344;
		idamage = 12344;
		idamage2 = 12344;
		spell = "Shredded Cheese";
		spell2 = "Cheesebunger";
		spell3 = "Big Cheese";
		legendarychance = 100;

	}
	if (answer == "y")
	{
		cout << "if you pick a class it automatically levels up in that thing, and you can pick to get more leveled in that thing or level in something else.\n";
	}
	cout << "What class do you want to be?\n1: Fighter(One Handed, less damage but more defence)\n2: Barbarian(Two Handed, more damage but less defence)\n3: Sorcerer(Magic)\n4: Battlemage(One handed and magic, but less defence)\n5: Necromancer(Necromancy)\n6: Vampire(Vampire)\n";
	cout << "To select a class press the number next to it.\n";
	while (true)
	{
		cin >> answer;
		if (answer == "1" || answer == "2" || answer == "3" || answer == "4" || answer == "5" || answer == "6")
		{
			break;
		}
		if (answer == "p")
		{
			stats();
		}

	}
	if (answer == "6")
	{
		fastlevel = "Vampire";
		defence = defence - 0.04;
		lifestealamount = 0.1;
	}
	if (answer == "1")
	{
		fastlevel = "Fighter";
		defence = defence + 0.02;
	}
	if (answer == "2")
	{
		fastlevel = "Barbarian";
		defence = defence - 0.02;
	}
	if (answer == "3")
	{
		fastlevel = "Sorcerer";
		gweptype = "Wand";
		if (cheat != "metalslime")
		{
			gwepdamage = 2;
		}

	}
	if (answer == "4")
	{
		fastlevel = "Battlemage";
		heal = heal + 1;
		defence = defence - 0.04;
		gweptype = "Worn Wand";
		gwepdamage = 1;

	}
	if (answer == "5")
	{
		fastlevel = "Necromancer";
		damage = 5;
		damage2 = 6;
		defence = defence - 0.02;
		minionname = "Zombie";

	}
	cout << "You are Larry sitting in a room.\nYour child is driving you crazy so you go outside, 3 slimes try to murderate you!\n";
	fight();
	if (health < 1)
	{
		return 0;
	}
	cout << "When you kill the slimes they drop a magic lamp. You rub the lamp and an tasty genie comes out. 'Why you wake me up from naptime!!!\nThat is big rude so I put you in jail now, haha. ' He says.\n";
	cout << "Then you get teleported into a cell.\n";
	cout << "But this cell was made by Bethesda so you get a wooden plate put it in front of your face and you clip through.\n";
	cout << "When you escape the cell a bunch of goblins attempt keel you.\n";
	ehealth = 30;
	ehealth2 = 30;
	ehealth3 = 30;
	droppedxp = 50;
	isboss = 0;
	one = 0;
	emagic = 0;
	emagic2 = 0;
	emagic3 = 0;
	healchance = 0;
	healchance2 = 0;
	healchance3 = 0;
	canheal = 0;
	canheal2 = 0;
	canheal3 = 0;
	eheal = 0;
	eheal2 = 0;
	eheal3 = 0;
	enemyname = "Goblin A";
	enemyname2 = "Goblin B";
	enemyname3 = "Goblin C";
	edamage = 2; // 1st enemy damage 1
	edamage2 = 3; // 1st enemy damage 2
	edamage3 = 3; // 2nd enemy damage 1
	edamage4 = 4; // 2nd enemy damage 2
	edamage5 = 2; // 3rd enemy damage 1
	edamage6 = 3; // 3rd enemy damage 2
	attacked = 0;
	fight();
	if (health < 1)
	{
		return 0;
	}
	cout << "After that you find 2 Nintendo Ninjas that are coming for you because you made a Mario fan game! ";
	ehealth = 25;
	ehealth2 = 25;
	ehealth3 = 0;
	droppedxp = 50;
	isboss = 0;
	one = 0;
	enemyname = "Nintendo Ninja A";
	enemyname2 = "Nintendo Ninja B";
	enemyname3 = "";
	canheal = 1;
	canheal2 = 1;
	canheal3 = 0;
	eheal = 6;
	eheal2 = 5;
	eheal3 = 0;
	emagic = 0;
	emagic2 = 0;
	emagic3 = 0;
	healchance = 20;
	healchance2 = 20;
	healchance3 = 0;
	edamage = 3; // 1st enemy damage 1
	edamage2 = 4; // 1st enemy damage 2
	edamage3 = 3; // 2nd enemy damage 1
	edamage4 = 4; // 2nd enemy damage 2
	edamage5 = 0; // 3rd enemy damage 1
	edamage6 = 0; // 3rd enemy damage 2
	attacked = 0;
	fight();
	if (health < 1)
	{
		return 0;
	}
	cout << "After that you see some more Goblins, and a Goblin Leader. ";
	ehealth = 25;
	ehealth2 = 40;
	ehealth3 = 25;
	droppedxp = 50;
	isboss = 0;
	canheal = 0;
	canheal2 = 0;
	canheal3 = 0;
	eheal = 0;
	eheal2 = 0;
	eheal3 = 0;
	emagic = 0;
	emagic2 = 0;
	emagic3 = 0;
	healchance = 0;
	healchance2 = 0;
	healchance3 = 0;
	enemyname = "Goblin A";
	enemyname2 = "Goblin Leader B";
	enemyname3 = "Goblin C";
	edamage = 4; // 1st enemy damage 1
	edamage2 = 5; // 1st enemy damage 2
	edamage3 = 4; // 2nd enemy damage 1
	edamage4 = 5; // 2nd enemy damage 2
	edamage5 = 4; // 3rd enemy damage 1
	edamage6 = 5; // 3rd enemy damage 2
	attacked = 0;
	fight();
	if (health < 1)
	{
		return 0;
	}
	cout << "After that you see a Giant Slug, Skeleton, and a Slime. ";
	one = 0;
	ehealth = 28;
	ehealth2 = 42;
	ehealth3 = 11;
	droppedxp = 50;
	isboss = 0;
	emagic = 0;
	emagic2 = 0;
	emagic3 = 0;
	healchance = 0;
	healchance2 = 0;
	healchance3 = 0;
	enemyname = "Giant Slug A";
	enemyname2 = "Skeleton B";
	enemyname3 = "Slime C";
	edamage = 3; // 1st enemy damage 1
	edamage2 = 4; // 1st enemy damage 2
	edamage3 = 3; // 2nd enemy damage 1
	edamage4 = 4; // 2nd enemy damage 2
	edamage5 = 3; // 3rd enemy damage 1
	edamage6 = 4; // 3rd enemy damage 2
	canheal = 0;
	canheal2 = 0;
	canheal3 = 0;
	eheal = 0;
	eheal2 = 0;
	eheal3 = 0;
	attacked = 0;
	fight();
	if (health < 1)
	{
		return 0;
	}
	cout << "After that you see 3 Skeletons. ";
	ehealth = 32;
	ehealth2 = 32;
	ehealth3 = 32;
	droppedxp = 50;
	isboss = 0;
	one = 0;
	emagic = 0;
	emagic2 = 0;
	emagic3 = 0;
	healchance = 0;
	healchance2 = 0;
	healchance3 = 0;
	enemyname = "Skeleton A";
	enemyname2 = "Skeleton B";
	enemyname3 = "Skeleton C";
	edamage = 2; // 1st enemy damage 1
	edamage2 = 3; // 1st enemy damage 2
	edamage3 = 2; // 2nd enemy damage 1
	edamage4 = 3; // 2nd enemy damage 2
	edamage5 = 2; // 3rd enemy damage 1
	edamage6 = 3; // 3rd enemy damage 2
	attacked = 0;
	canheal = 0;
	canheal2 = 0;
	canheal3 = 0;
	eheal = 0;
	eheal2 = 0;
	eheal3 = 0;
	fight();
	if (health < 1)
	{
		return 0;
	}
	cout << "After that you find a Big Goblin with a Big Sword and Armor. ";
	ehealth = 75;
	ehealth2 = 0;
	ehealth3 = 0;
	droppedxp = 150;
	isboss = 1;
	one = 1;
	emagic = 0;
	emagic2 = 0;
	emagic3 = 0;
	healchance = 20;
	healchance2 = 0;
	healchance3 = 0;
	enemyname = "Big Goblin A";
	enemyname2 = "";
	enemyname3 = "";
	edamage = 5; // 1st enemy damage 1
	edamage2 = 6; // 1st enemy damage 2
	edamage3 = 0; // 2nd enemy damage 1
	edamage4 = 0; // 2nd enemy damage 2
	edamage5 = 0; // 3rd enemy damage 1
	edamage6 = 0; // 3rd enemy damage 2
	attacked = 0;
	canheal = 1;
	canheal2 = 0;
	canheal3 = 0;
	eheal = 2;
	eheal2 = 0;
	eheal3 = 0;
	fight();
	if (health < 1)
	{
		return 0;
	}
	cout << "After that you see 3 Very Big Boy Slugs. ";
	ehealth = 32;
	ehealth2 = 32;
	ehealth3 = 32;
	droppedxp = 120;
	isboss = 0;
	one = 0;
	emagic = 0;
	emagic2 = 0;
	emagic3 = 0;
	healchance = 0;
	healchance2 = 0;
	healchance3 = 0;
	enemyname = "Big Slug A";
	enemyname2 = "Big Slug B";
	enemyname3 = "Big Slug C";
	edamage = 4; // 1st enemy damage 1
	edamage2 = 5; // 1st enemy damage 2
	edamage3 = 4; // 2nd enemy damage 1
	edamage4 = 5; // 2nd enemy damage 2
	edamage5 = 4; // 3rd enemy damage 1
	edamage6 = 5; // 3rd enemy damage 2
	attacked = 0;
	canheal = 0;
	canheal2 = 0;
	canheal3 = 0;
	eheal = 0;
	eheal2 = 0;
	eheal3 = 0;
	fight();
	if (health < 1)
	{
		return 0;
	}
	cout << "After that you see 2 Rodents of Unusual Size. ";
	ehealth = 32;
	ehealth2 = 32;
	ehealth3 = 0;
	droppedxp = 100;
	isboss = 0;
	one = 0;
	canheal = 0;
	canheal2 = 0;
	canheal3 = 0;
	eheal = 0;
	eheal2 = 0;
	eheal3 = 0;
	emagic = 0;
	emagic2 = 0;
	emagic3 = 0;
	healchance = 0;
	healchance2 = 0;
	healchance3 = 0;
	enemyname = "Rodent of Unusual Size A";
	enemyname2 = "Rodent of Unusual Size B";
	enemyname3 = "";
	edamage = 5; // 1st enemy damage 1
	edamage2 = 6; // 1st enemy damage 2
	edamage3 = 5; // 2nd enemy damage 1
	edamage4 = 6; // 2nd enemy damage 2
	edamage5 = 0; // 3rd enemy damage 1
	edamage6 = 0; // 3rd enemy damage 2
	attacked = 0;
	fight();
	if (health < 1)
	{
		return 0;
	}
	cout << "After that you see 2 Steffans. ";
	ehealth = 40;
	ehealth2 = 40;
	ehealth3 = 0;
	droppedxp = 100;
	isboss = 0;
	one = 0;
	canheal = 0;
	canheal2 = 0;
	canheal3 = 0;
	eheal = 0;
	eheal2 = 0;
	eheal3 = 0;
	emagic = 0;
	emagic2 = 0;
	emagic3 = 0;
	healchance = 0;
	healchance2 = 0;
	healchance3 = 0;
	enemyname = "Steffan A";
	enemyname2 = "Steffan B";
	enemyname3 = "";
	edamage = 5; // 1st enemy damage 1
	edamage2 = 5; // 1st enemy damage 2
	edamage3 = 5; // 2nd enemy damage 1
	edamage4 = 5; // 2nd enemy damage 2
	edamage5 = 0; // 3rd enemy damage 1
	edamage6 = 0; // 3rd enemy damage 2
	attacked = 0;
	fight();
	if (health < 1)
	{
		return 0;
	}
	cout << "After that you see 3 Racoons, You cannot run away from them because there are too many and they are too fast! ";
	ehealth = 20;
	ehealth2 = 20;
	ehealth3 = 20;
	droppedxp = 25;
	isboss = 1;
	one = 0;
	canheal = 0;
	canheal2 = 0;
	canheal3 = 0;
	eheal = 0;
	eheal2 = 0;
	eheal3 = 0;
	emagic = 0;
	emagic2 = 0;
	emagic3 = 0;
	healchance = 0;
	healchance2 = 0;
	healchance3 = 0;
	enemyname = "Racoon A";
	enemyname2 = "Racoon B";
	enemyname3 = "Racoon C";
	edamage = 1; // 1st enemy damage 1
	edamage2 = 2; // 1st enemy damage 2
	edamage3 = 1; // 2nd enemy damage 1
	edamage4 = 2; // 2nd enemy damage 2
	edamage5 = 1; // 3rd enemy damage 1
	edamage6 = 2; // 3rd enemy damage 2
	attacked = 0;
	fight();
	if (health < 1)
	{
		return 0;
	}
	cout << "After that you see 3 Racoons, You cannot run away from them because there are too many and they are too fast! ";
	ehealth = 20;
	ehealth2 = 20;
	ehealth3 = 20;
	droppedxp = 25;
	isboss = 1;
	one = 0;
	canheal = 0;
	canheal2 = 0;
	canheal3 = 0;
	eheal = 0;
	eheal2 = 0;
	eheal3 = 0;
	emagic = 0;
	emagic2 = 0;
	emagic3 = 0;
	healchance = 0;
	healchance2 = 0;
	healchance3 = 0;
	enemyname = "Racoon A";
	enemyname2 = "Racoon B";
	enemyname3 = "Racoon C";
	edamage = 1; // 1st enemy damage 1
	edamage2 = 2; // 1st enemy damage 2
	edamage3 = 1; // 2nd enemy damage 1
	edamage4 = 2; // 2nd enemy damage 2
	edamage5 = 1; // 3rd enemy damage 1
	edamage6 = 2; // 3rd enemy damage 2
	attacked = 0;
	fight();
	if (health < 1)
	{
		return 0;
	}
	cout << "After that you see a 2 Pokemons that Nintendo sent at you because you made a mario fan game! ";
	ehealth = 36;
	ehealth2 = 36;
	ehealth3 = 0;
	droppedxp = 100;
	isboss = 1;
	one = 0;
	canheal = 1;
	canheal2 = 1;
	canheal3 = 0;
	eheal = 10;
	eheal2 = 10;
	eheal3 = 0;
	emagic = 0;
	emagic2 = 0;
	emagic3 = 0;
	healchance = 10;
	healchance2 = 10;
	healchance3 = 0;
	enemyname = "Pokemon A";
	enemyname2 = "Pokemon B";
	enemyname3 = "";
	edamage = 5;
	edamage2 = 6;
	edamage3 = 5;
	edamage4 = 6;
	edamage5 = 0;
	edamage6 = 0;
	attacked = 0;
	fight();
	if (health < 1)
	{
		return 0;
	}
	cout << "After that you see one of those fire dragons from Pokemon that Nintendo sent at you because you made a mario fan game! ";
	ehealth = 65;
	ehealth2 = 0;
	ehealth3 = 0;
	droppedxp = 100;
	isboss = 1;
	one = 0;
	canheal = 1;
	canheal2 = 1;
	canheal3 = 0;
	eheal = 0;
	eheal2 = 0;
	eheal3 = 0;
	emagic = 0;
	emagic2 = 0;
	emagic3 = 0;
	healchance = 0;
	healchance2 = 0;
	healchance3 = 0;
	enemyname = "Fire Dragon thing from Pokemon A";
	enemyname2 = "";
	enemyname3 = "";
	edamage = 5;
	edamage2 = 6;
	edamage3 = 0;
	edamage4 = 0;
	edamage5 = 0;
	edamage6 = 0;
	attacked = 0;
	fight();
	if (health < 1)
	{
		return 0;
	}
	cout << "Then you see a a group of cheeses!!";
	ehealth = 40;
	ehealth2 = 40;
	ehealth3 = 40;
	droppedxp = 100;
	isboss = 1;
	one = 0;
	canheal = 0;
	canheal2 = 0;
	canheal3 = 0;
	eheal = 0;
	eheal2 = 0;
	eheal3 = 0;
	emagic = 0;
	emagic2 = 0;
	emagic3 = 0;
	healchance = 0;
	healchance2 = 0;
	healchance3 = 0;
	enemyname = "Cheeses A";
	enemyname2 = "Cheeses B";
	enemyname3 = "Cheeses C";
	edamage = 5;
	edamage2 = 5;
	edamage3 = 5;
	edamage4 = 5;
	edamage5 = 5;
	edamage6 = 5;
	attacked = 5;
	fight();
	if (health < 1)
	{
		return 0;
	}
	return 0;

} //main








void enemyattack()
{
	if (turn == 0)
	{
		if (ehealth <= 0)
		{
			if (ehealth2 <= 0)
			{
				if (ehealth3 <= 0)
				{
					enemydie();
				}
			}
		}

		if (minionsummoned == 1)
		{
			int mrandom = (rand() % 3);
			if (mrandom == 1)
			{
				if (ehealth > 0)
				{
					cout << "Your " << string(minionname) << " attacks and deals " << int(miniondamage) << " damage to the " << string(enemyname) << "!\n";
					ehealth = ehealth - miniondamage;
					cout << "The " << string(enemyname) << " has " << int(ehealth) << " health left!\n";
				}
				else
				{
					if (ehealth2 > 0)
					{
						cout << "Your " << string(minionname) << " attacks and deals " << int(miniondamage) << " damage to the " << string(enemyname2) << "!\n";
						ehealth2 = ehealth2 - miniondamage;
						cout << "The " << string(enemyname2) << " has " << int(ehealth2) << " health left!\n";
					}
					else
					{
						if (ehealth3 > 0)
						{
							cout << "Your " << string(minionname) << " attacks and deals " << int(miniondamage) << " damage to the " << string(enemyname3) << "!\n";
							ehealth3 = ehealth3 - miniondamage;
							cout << "The " << string(enemyname3) << " has " << int(ehealth3) << " health left!\n";
						}
					}
				}
			}
			if (mrandom == 2)
			{
				if (ehealth2 > 0)
				{
					cout << "Your " << string(minionname) << " attacks and deals " << int(miniondamage) << " damage to the " << string(enemyname2) << "!\n";
					ehealth2 = ehealth2 - miniondamage;
					cout << "The " << string(enemyname2) << " has " << int(ehealth2) << " health left!\n";
				}
				else
				{
					if (ehealth3 > 0)
					{
						cout << "Your " << string(minionname) << " attacks and deals " << int(miniondamage) << " damage to the " << string(enemyname3) << "!\n";
						ehealth3 = ehealth3 - miniondamage;
						cout << "The " << string(enemyname3) << " has " << int(ehealth3) << " health left!\n";
					}
					else
					{
						if (ehealth > 0)
						{
							cout << "Your " << string(minionname) << " attacks and deals " << int(miniondamage) << " damage to the " << string(enemyname) << "!\n";
							ehealth = ehealth - miniondamage;
							cout << "The " << string(enemyname) << " has " << int(ehealth) << " health left!\n";
						}
					}
				}
			}
			if (mrandom == 3)
			{
				if (ehealth3 > 0)
				{
					cout << "Your " << string(minionname) << " attacks and deals " << int(miniondamage) << " damage to the " << string(enemyname3) << "!\n";
					ehealth3 = ehealth3 - miniondamage;
					cout << "The " << string(enemyname3) << " has " << int(ehealth3) << " health left!\n";
				}
				else
				{
					if (ehealth > 0)
					{
						cout << "Your " << string(minionname) << " attacks and deals " << int(miniondamage) << " damage to the " << string(enemyname) << "!\n";
						ehealth = ehealth - miniondamage;
						cout << "The " << string(enemyname) << " has " << int(ehealth) << " health left!\n";
					}
					else
					{
						if (ehealth2 > 0)
						{
							cout << "Your " << string(minionname) << " attacks and deals " << int(miniondamage) << " damage to the " << string(enemyname2) << "!\n";
							ehealth2 = ehealth2 - miniondamage;
							cout << "The " << string(enemyname2) << " has " << int(ehealth2) << " health left!\n";
						}
					}
				}
			}
		}
		if (minion2summoned == 1)
		{
			if (ehealth <= 0)
			{
				if (ehealth2 <= 0)
				{
					if (ehealth3 <= 0)
					{
						enemydie();
					}
				}
			}
			int mrandom = (rand() % 3);
			if (mrandom == 1)
			{
				if (minionhealth2 > 0)
				{
					if (ehealth > 0)
					{
						cout << "Your " << string(minionname2) << " attacks and deals " << int(miniondamage2) << " damage to the " << string(enemyname) << "!\n";
						ehealth = ehealth - miniondamage2;
						cout << "The " << string(enemyname) << " has " << int(ehealth) << " health left!";
					}
					else
					{
						if (ehealth2 > 0)
						{
							cout << "Your " << string(minionname2) << " attacks and deals " << int(miniondamage2) << " damage to the " << string(enemyname2) << "!\n";
							ehealth2 = ehealth2 - miniondamage2;
							cout << "The " << string(enemyname2) << " has " << int(ehealth2) << " health left!";
						}
						else
						{
							if (ehealth3 > 0)
							{
								cout << "Your " << string(minionname2) << " attacks and deals " << int(miniondamage2) << " damage to the " << string(enemyname3) << "!\n";
								ehealth3 = ehealth3 - miniondamage2;
								cout << "The " << string(enemyname3) << " has " << int(ehealth3) << " health left!";
							}
						}
					}
				}
			}

			if (mrandom == 2)
			{
				if (minionhealth2 > 0)
				{
					if (ehealth2 > 0)
					{
						cout << "Your " << string(minionname2) << " attacks and deals " << int(miniondamage2) << " damage to the " << string(enemyname2) << "!\n";
						ehealth2 = ehealth2 - miniondamage2;
						cout << "The " << string(enemyname2) << " has " << int(ehealth2) << " health left!";
					}
					else
					{
						if (ehealth > 0)
						{
							cout << "Your " << string(minionname2) << " attacks and deals " << int(miniondamage2) << " damage to the " << string(enemyname) << "!\n";
							ehealth = ehealth - miniondamage2;
							cout << "The " << string(enemyname) << " has " << int(ehealth) << " health left!";
						}
						else
						{
							if (ehealth3 > 0)
							{
								cout << "Your " << string(minionname2) << " attacks and deals " << int(miniondamage2) << " damage to the " << string(enemyname3) << "!\n";
								ehealth3 = ehealth3 - miniondamage2;
								cout << "The " << string(enemyname3) << " has " << int(ehealth3) << " health left!";
							}
						}
					}
				}
			}
			if (mrandom == 3)
			{
				if (minionhealth2 > 0)
				{
					if (ehealth3 > 0)
					{
						cout << "Your " << string(minionname2) << " attacks and deals " << int(miniondamage2) << " damage to the " << string(enemyname3) << "!\n";
						ehealth3 = ehealth3 - miniondamage2;
						cout << "The " << string(enemyname3) << " has " << int(ehealth3) << " health left!";
					}
					else
					{
						if (ehealth > 0)
						{
							cout << "Your " << string(minionname2) << " attacks and deals " << int(miniondamage2) << " damage to the " << string(enemyname) << "!\n";
							ehealth = ehealth - miniondamage2;
							cout << "The " << string(enemyname) << " has " << int(ehealth) << " health left!";
						}
						else
						{
							if (ehealth2 > 0)
							{
								cout << "Your " << string(minionname2) << " attacks and deals " << int(miniondamage2) << " damage to the " << string(enemyname2) << "!\n";
								ehealth2 = ehealth2 - miniondamage2;
								cout << "The " << string(enemyname2) << " has " << int(ehealth2) << " health left!";
							}
						}
					}
				}
			}
		}
		int erand = rand();
		int edamagerange = edamage2 - edamage;
		int etotaldamage = edamage + erand % (edamagerange + 1);
		etotal2 = edamage4;
		etotal3 = edamage6;
		if (ehealth > 0)
		{
			health = health - etotaldamage;
		}
		else
		{
			etotaldamage = 0;
		}
		if (ehealth2 > 0)
		{
			health = health - edamage4;
		}
		else
		{
			edamage4 = 0;
		}
		if (ehealth3 > 0)
		{
			health = health - edamage6;
		}
		else
		{
			edamage6 = 0;
		}
		if (ehealth > 0)
		{
			if (strong == 1)
			{
				cout << "The " << string(enemyname) << " does a strong attack! ";
				etotaldamage = etotaldamage * 2.5;
				strong = 0;
			}
			int drandom = (rand() % 100);
			if (drandom < 5)
			{
				cout << "The " << string(enemyname) << " will do a strong attack next turn!\n";
				strong = 1;
			}
			else
			{
				int hrandom = (rand() % 100);
				if (hrandom < 25)
				{
					if (canheal == 1)
					{
						int erandom = (rand() % 4);
						if (erandom == 1)
						{
							if (ehealth > 0)
							{
								cout << "The " << string(enemyname) << " heals itself!\n";
								ehealth = ehealth + eheal;
							}
						}
						if (erandom == 2)
						{
							if (ehealth2 > 0)
							{
								cout << "The " << string(enemyname) << " heals the " << string(enemyname2) << "!\n";
								ehealth2 = ehealth2 + eheal;
							}
						}
						if (erandom == 3)
						{
							if (ehealth3 > 0)
							{
								cout << "The " << string(enemyname) << " heals the " << string(enemyname3) << "!\n";
								ehealth3 = ehealth3 + eheal;
							}
						}

					}
				}
				strong = 0;
				cout << "The " << string(enemyname) << " attacks!\n";
			}

		}
		if (ehealth2 > 0)
		{

			if (strong2 == 1)
			{
				strong2 = 0;
				cout << "The " << string(enemyname2) << " does a strong attack! ";
				etotal2 = etotal2 * 2.5;
			}
			int drandom = (rand() % 100);
			if (drandom < 5)
			{
				cout << "The " << string(enemyname2) << " will do a strong attack next turn!\n";
				strong2 = 1;
			}
			else
			{
				int hrandom = (rand() % 100);
				if (hrandom < 25)
				{
					if (canheal2 == 1)
					{
						int erandom = (rand() % 4);
						if (erandom == 1)
						{
							if (ehealth2 > 0)
							{
								cout << "The " << string(enemyname2) << " heals itself!\n";
								ehealth2 = ehealth2 + eheal2;
							}
						}
						if (erandom == 2)
						{
							if (ehealth > 0)
							{
								cout << "The " << string(enemyname2) << " heals the " << string(enemyname) << "!\n";
								ehealth = ehealth + eheal2;
							}

						}
						if (erandom == 3)
						{
							if (ehealth3 > 0)
							{
								cout << "The " << string(enemyname2) << " heals the " << string(enemyname3) << "!\n";
								ehealth3 = ehealth3 + eheal2;
							}
						}

					}
				}
				strong2 = 0;
				cout << "The " << string(enemyname2) << " attacks!\n";
			}
		}
		if (ehealth3 > 0)
		{
			if (strong3 == 1)
			{
				strong3 = 0;
				cout << "The " << string(enemyname3) << " does a strong attack! ";
				etotal3 = etotal3 * 2.5;
			}
			int drandom = (rand() % 100);
			if (drandom < 5)
			{
				cout << "The " << string(enemyname3) << " will do a strong attack next turn!\n";
				strong3 = 1;
			}
			else
			{
				int hrandom = (rand() % 100);
				if (hrandom < 15)
				{
					if (canheal3 == 1)
					{
						int erandom = (rand() % 4);
						if (erandom == 1)
						{
							if (ehealth3 > 0)
							{
								cout << "The " << string(enemyname3) << " heals itself!\n";
								ehealth3 = ehealth3 + eheal3;
							}
						}
						if (erandom == 2)
						{
							if (ehealth2 > 0)
							{
								cout << "The " << string(enemyname3) << " heals the " << string(enemyname2) << "!\n";
								ehealth2 = ehealth2 + eheal3;
							}
						}
						if (erandom == 3)
						{
							if (ehealth3 > 0)
							{
								cout << "The " << string(enemyname3) << " heals the " << string(enemyname) << "!\n";
								ehealth = ehealth + eheal3;
							}
						}

					}
				}
				strong3 = 0;
				cout << "The " << string(enemyname3) << " attacks!\n";
			}
		}
		alldamage = etotal2 + etotal3;
		alldamage = alldamage + etotaldamage;
		if (isdefending == 1 || isdefending == 2)
		{
			alldamage = alldamage * 0.4;
			isdefending = isdefending - 1;
		}
		alldamage = alldamage / defence;
		alldamage = alldamage / armordefence;
		if (alldamage < 1)
		{
			alldamage = alldamage + 1;
		}
		cout << "They deal " << int(alldamage) << " damage!\n";
		if (health > maxhealth)
		{
			health = maxhealth;
		}
		cout << "You have ";
		cout << int(health) << "/" << int(maxhealth);
		cout << " health left!\n ";
		minionhealth = minionhealth - alldamage;
		minionhealth2 = minionhealth2 - alldamage;
		if (minionsummoned == 1)
		{
			cout << "Your " << string(minionname) << " has " << int(minionhealth) << " health left!\n";
		}
		if (minion2summoned == 1)
		{
			cout << "Your " << string(minionname2) << " has " << int(minionhealth2) << " health left!\n";
		}
		if (minionsummoned == 1)
		{
			if (minionhealth < 0)
			{

				if (minionhealth < 0)
				{
					cout << "Your " << string(minionname) << " died!\n";
					minionsummoned = 0;
				}
			}
		}
		if (minion2summoned == 1)
		{
			if (minionhealth2 < 0)
			{

				if (minionhealth2 < 0)
				{
					cout << "Your " << string(minionname2) << " died!\n";
					minion2summoned = 0;
				}
			}
		}
		turn = 1;
	}
}


void enemydie()
{
	first = 0;
	dleft1 = 0;
	if (ehealth < 1)
	{
		if (ehealth2 < 1)
		{
			if (ehealth3 < 1)
			{



				cout << "The enemy dropped ";
				cout << int(dropgold);
				cout << " Gold and ";
				gold = gold + dropgold;
				cout << int(droppedxp);
				cout << " XP!\n";
				xp = xp + droppedxp;
				cout << "You have ";
				cout << int(xp);
				cout << " XP!\n";
				needmore = neededxp - xp;
				cout << "You need ";
				cout << int(needmore);
				cout << " more XP to level up!\n";
				if (xp >= neededxp)
				{
					level = level + 1;
					cout << " You leveled up!\n";
					cout << "You are now level ";
					cout << int(level);
					cout << "!\n";
					if (fastlevel == "Necromancer")
					{
						cout << "Do you want to level in One Handed, Two Handed, Magic, Healing, Defence or Necromancy? o/t/m/h/d/n\n";
					}
					else
					{
						if (fastlevel == "Vampire")
						{
							cout << "Do you want to level in One Handed, Two Handed, Magic, Healing, Defence, or Vampire? o/t/m/h/d/v\n";
						}
						else
						{
							cout << "Do you want to level in One Handed, Two Handed, Magic, Healing, or Defence? o/t/m/h/d/\n";
						}

					}

					while (true)
					{
						cin >> answer;
						if (answer == "o" || answer == "t" || answer == "m" || answer == "h" || answer == "d" || answer == "n" || answer == "v")
						{
							break;
						}
						if (answer == "p")
						{
							stats();
						}

					}
					if (answer == "v")
					{
						lifestealamount = lifestealamount + 0.02;
						bitedamage = bitedamage + 1;
						cout << "You are better at Vampire now!\n";
					}
					if (answer == "d")
					{
						defence = defence + 0.02;
						cout << "Your Defence Increases!\n";
					}
					if (answer == "h")
					{
						heal = heal + 1;
						cout << "You heal better now!\n";
					}
					if (answer == "o")
					{

						if (dtype == "One Handed")
						{
							wepdamage = wepdamage - lightdamage;
						}
						lightdamage = lightdamage + 1;
						cout << "You deal more damage with One Handed weapons now!\n";
						if (dtype == "One Handed")
						{
							wepdamage = wepdamage + lightdamage;
						}

					}
					if (answer == "t")
					{

						if (dtype == "Two Handed")
						{
							wepdamage = wepdamage - heavydamage;
						}
						heavydamage = heavydamage + 1;
						cout << "You deal more damage with Two Handed weapons now!\n";
						if (dtype == "Two Handed")
						{
							wepdamage = wepdamage + heavydamage;
						}
					}
					if (answer == "m")
					{
						gwepdamage = gwepdamage - magicdamage;
						magicdamage = magicdamage + 1;
						cout << "You deal more magic damage now!\n";
						gwepdamage = gwepdamage + magicdamage;
					}
					if (answer == "n")
					{
						miniondamage = miniondamage - minionlevel;
						miniondamage2 = miniondamage2 - minionlevel;
						cout << "Your minions are more effective now!\n";
						minionlevel = minionlevel + 1;
						miniondamage = miniondamage + minionlevel;
						miniondamage2 = miniondamage2 + minionlevel;

					}
					enxp = enxp + 1;
					health = health + 50;
					heal = heal + 1;

					if (level > 8)
					{
						magic = magic + 8;
					}
					else
					{
						if (level > 5)
						{
							magic = magic + 6;
						}
						else
						{
							magic = magic + 3;
						}
					}
					if (fastlevel == "Sorcerer")
					{
						gwepdamage = gwepdamage - magicdamage;
						magicdamage = magicdamage + 1;
						cout << "You deal more magic damage now!\n";
						gwepdamage = gwepdamage + magicdamage;
					}
					if (fastlevel == "Fighter")
					{
						if (dtype == "One Handed")
						{
							wepdamage = wepdamage - lightdamage;
						}
						lightdamage = lightdamage + 1;
						defence = defence + 0.02;
						if (dtype == "One Handed")
						{
							wepdamage = wepdamage + lightdamage;
						}
					}
					if (fastlevel == "Vampire")
					{
						bitedamage = bitedamage + 1;
					}
					if (fastlevel == "Necromancer")
					{
						miniondamage = miniondamage - minionlevel;
						miniondamage2 = miniondamage2 - minionlevel;
						minionlevel = minionlevel + 1;
						miniondamage = miniondamage + minionlevel;
						miniondamage2 = miniondamage2 + minionlevel;

					}
					if (fastlevel == "Battlemage")
					{
						if (dtype == "One Handed")
						{
							wepdamage = wepdamage - lightdamage;
						}
						lightdamage = lightdamage + 1;
						if (dtype == "One Handed")
						{
							wepdamage = wepdamage + lightdamage;
						}
						gwepdamage = gwepdamage - magicdamage;
						magicdamage = magicdamage + 1;
						cout << "You deal more magic damage now!\n";
						gwepdamage = gwepdamage + magicdamage;
					}
					if (fastlevel == "Barbarian")
					{
						if (dtype == "Two Handed")
						{
							wepdamage = wepdamage - heavydamage;
						}
						heavydamage = heavydamage + 1;
						if (dtype == "Two Handed")
						{
							wepdamage = wepdamage + heavydamage;
						}
					}
					maxhealth = maxhealth + 20;
					health = maxhealth;
					dropgold = dropgold + 3;
					xp = xp - neededxp;
					neededxp = neededxp + 72;
					attacked = 1;
					turn = 1;
					arrows = arrows + 16;
					defence = defence + 0.01;
					legendarychance = legendarychance + 1;
					rarechance = rarechance + 5;
					uncommonchance = uncommonchance + 5;
					if (level == 8)
					{
						if (fastlevel == "Necromancer")
						{
							cout << "You learned to summon a Golem(7 damage, 60 health) from leveling up! Do you want to put it in the 1st or second slot? 1/2\n";
							while (true)
							{
								cin >> answer;
								if (answer == "1" || answer == "2")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}
							if (answer == "1")
							{
								cout << "You pick up the Golem!\n";
								minionname = "Golem";
								miniondamage = 7;
								minionhealth = 65;
								minionmaxhealth = 65;
								miniondamage = miniondamage + minionlevel;
								minionhealth = minionhealth + minionlevel;
							}
							if (answer == "2")
							{
								cout << "You pick up the Golem!\n";
								minionname2 = "Golem";
								miniondamage2 = 7;
								minionhealth2 = 65;
								minionmaxhealth2 = 65;
								miniondamage2 = miniondamage2 + minionlevel;
								minionhealth2 = minionhealth2 + minionlevel;
							}
						}
					}
					if (level == 6)
					{
						if (fastlevel == "Necromancer")
						{
							cout << "You learned to summon a Skeleton(5 damage, 45 health) from leveling up! Do you want to put it in the 1st or second slot? 1/2\n";
							while (true)
							{
								cin >> answer;
								if (answer == "1" || answer == "2")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}
							if (answer == "1")
							{
								cout << "You pick up the Skeleton!\n";
								minionname = "Skeleton";
								miniondamage = 5;
								minionhealth = 45;
								minionmaxhealth = 45;
								miniondamage = miniondamage + minionlevel;
								minionhealth = minionhealth + minionlevel;
							}
							if (answer == "2")
							{
								cout << "You pick up the Skeleton!\n";
								minionname2 = "Skeleton";
								miniondamage2 = 5;
								minionhealth2 = 45;
								minionmaxhealth2 = 45;
								miniondamage2 = miniondamage2 + minionlevel;
								minionhealth2 = minionhealth2 + minionlevel;
							}
						}
					}
					if (level == 3)
					{
						if (fastlevel == "Necromancer")
						{
							cout << "You learned to summon a Bigger Zombie(5 damage, 25 health) from leveling up! Do you want to put it in the 1st or second slot? 1/2\n";
							while (true)
							{
								cin >> answer;
								if (answer == "1" || answer == "2")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}
							if (answer == "1")
							{
								cout << "You pick up the Bigger Zombie!\n";
								minionname = "Big Zombie";
								miniondamage = 5;
								minionhealth = 25;
								minionmaxhealth = 25;
								miniondamage = miniondamage + minionlevel;
								minionhealth = minionhealth + minionlevel;
							}
							if (answer == "2")
							{
								cout << "You pick up the Bigger Zombie!\n";
								minionname2 = "Big Zombie";
								miniondamage2 = 5;
								minionhealth2 = 25;
								minionmaxhealth2 = 25;
								miniondamage2 = miniondamage2 + minionlevel;
								minionhealth2 = minionhealth2 + minionlevel;
							}
						}
					}
					if (level == 15)
					{
						cout << "You got an Ice Spell(23-25 damage, 2 magic usage) from leveling up! Do you want to pick it up? y/n\n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "y")
						{
							cout << "What slot do you want to put it in? 1/2/3";

						}
						while (true)
						{
							cin >> answer;
							if (answer == "1" || answer == "2" || answer == "3")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "3")
						{
							cout << "You pick up the spell! ";
							usemagic3 = 2;
							spell3 = "Ice";
							idamage = 23;
							idamage2 = 25;
						}
						if (answer == "2")
						{
							cout << "You pick up the spell! ";
							usemagic2 = 2;
							spell2 = "Ice";
							fdamage = 23;
							fdamage2 = 25;
						}
						if (answer == "1")
						{
							cout << "You pick up the spell! ";
							spell = "Ice";
							usemagic = 2;
							mdamage = 23;
							mdamage2 = 25;
						}



					}
					if (level == 10)
					{
						cout << "You got a Big Fireball Spell(20-22 damage, 2 magic usage) from leveling up! Do you want to pick it up? y/n\n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "y")
						{
							cout << "What slot do you want to put it in? 1/2/3";

						}
						while (true)
						{
							cin >> answer;
							if (answer == "1" || answer == "2" || answer == "3")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "3")
						{
							cout << "You pick up the spell! ";
							usemagic3 = 2;
							spell3 = "Big Fireball";
							idamage = 20;
							idamage2 = 22;
						}
						if (answer == "2")
						{
							cout << "You pick up the spell! ";
							usemagic2 = 2;
							spell2 = "Big Fireball";
							fdamage = 20;
							fdamage2 = 22;
						}
						if (answer == "1")
						{
							cout << "You pick up the spell! ";
							spell = "Big Fireball";
							usemagic = 2;
							mdamage = 20;
							mdamage2 = 22;
						}



					}
					if (level == 3)
					{
						cout << "You got a Lightning Spell(14-15 damage, 1 magic usage) from leveling up! Do you want to pick it up? y/n\n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "y")
						{
							cout << "What slot do you want to put it in? 1/2/3";

						}
						while (true)
						{
							cin >> answer;
							if (answer == "1" || answer == "2" || answer == "3")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "3")
						{
							cout << "You pick up the spell! ";
							usemagic3 = 1;
							spell3 = "Lightning";
							idamage = 14;
							idamage2 = 15;
						}
						if (answer == "2")
						{
							cout << "You pick up the spell! ";
							usemagic2 = 1;
							spell2 = "Lightning";
							fdamage = 14;
							fdamage2 = 15;
						}
						if (answer == "1")
						{
							cout << "You pick up the spell! ";
							spell = "Lightning";
							usemagic = 1;
							mdamage = 14;
							mdamage2 = 15;
						}



					}

					if (level == 6)
					{
						cout << "You got a Boulder Spell(17-18 damage, 2 magic usage) from leveling up! Do you want to pick it up? y/n\n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "y")
						{
							cout << "What slot do you want to put it in? 1/2/3";

						}
						while (true)
						{
							cin >> answer;
							if (answer == "1" || answer == "2" || answer == "3")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "3")
						{
							cout << "You pick up the spell! ";
							usemagic3 = 2;
							spell3 = "Boulder";
							idamage = 17;
							idamage2 = 18;
						}
						if (answer == "2")
						{
							cout << "You pick up the spell! ";
							usemagic2 = 2;
							spell2 = "Boulder";
							fdamage = 17;
							fdamage2 = 18;
						}
						if (answer == "1")
						{
							cout << "You pick up the spell! ";
							spell = "Boulder";
							usemagic = 2;
							mdamage = 17;
							mdamage2 = 18;
						}

					}


				}
				int drandom = (rand() % 100);
				if (drandom <= legendarychance)
				{
					int brandom = (rand() % 18);
					if (brandom == 1)
					{
						cout << "The enemy dropped a Legendary Iron Axe(16 Damage, One Handed)!\n";
						cout << "Do you want to pick it up?  y/n\n";

						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}

						if (answer == "y")
						{
							cout << "You pick up the axe!\n";
							dtype = "One Handed";
							weptype = "Legendary Iron Axe";
							enchantment = "";
							wepdamage = 16;
							wepdamage = wepdamage + lightdamage;
							mdebuff = "";
							enchantment = "";
							islifesteal = 0;
							mdebuffdamage = 0;
							mdlength = 0;
							mdleft = 0;
						}
					}

					if (brandom == 2)
					{
						cout << "The enemy dropped a Legendary Iron Greatsword(15 Damage, Two Handed)!\n";
						cout << "Do you want to pick it up? y/n\n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}


						if (answer == "y")
						{
							cout << "You pick up the sword!\n";
							dtype = "Two Handed";
							weptype = "Legendary Iron Greatsword";
							enchantment = "";
							wepdamage = 15;
							wepdamage = wepdamage + heavydamage;
							mdebuff = "";
							enchantment = "";
							islifesteal = 0;
							mdebuffdamage = 0;
							mdlength = 0;
							mdleft = 0;
						}
					}

					if (brandom == 3)
					{
						cout << "The enemy dropped a Legendary Iron Greataxe(17 Damage, Two Handed)!\n";
						cout << "Do you want to pick it up? y/n\n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}


						if (answer == "y")
						{
							cout << "You pick up the axe!\n";
							dtype = "Two Handed";
							weptype = "Legendary Iron Greataxe";
							enchantment = "";
							wepdamage = 17;
							wepdamage = wepdamage + heavydamage;
							mdebuff = "";
							enchantment = "";
							islifesteal = 0;
							mdebuffdamage = 0;
							mdlength = 0;
							mdleft = 0;
						}
					}


					if (brandom == 4)
					{
						cout << "The enemy dropped a Legendary Iron Sword(14 Damage, One Handed)!\n";
						cout << "Do you want to pick it up? y/n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}


						if (answer == "y")
						{
							cout << "You pick up the sword!\n";
							dtype = "One Handed";
							weptype = "Legendary Iron Sword";
							enchantment = "";
							wepdamage = 14;
							wepdamage = wepdamage + lightdamage;
							mdebuff = "";
							enchantment = "";
							islifesteal = 0;
							mdebuffdamage = 0;
							mdlength = 0;
							mdleft = 0;
						}
					}

					if (brandom == 5)
					{


						cout << "The enemy dropped a Legendary Steel Greatsword(19 Damage, Two Handed)!\n";
						cout << "Do you want to pick it up? y/n\n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "y")
						{
							cout << "You pick up the sword!\n";
							dtype = "Two Handed";
							weptype = "Legendary Steel Greatsword";
							enchantment = "";
							wepdamage = 19;
							wepdamage = wepdamage + heavydamage;
							mdebuff = "";
							enchantment = "";
							islifesteal = 0;
							mdebuffdamage = 0;
							mdlength = 0;
							mdleft = 0;
						}
					}

					if (brandom == 6)
					{


						cout << "The enemy dropped a Legendary Steel Greataxe(19 Damage, Two Handed)!\n";
						cout << "Do you want to pick it up? y/n\n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "y")
						{
							cout << "You pick up the axe!\n";
							dtype = "Two Handed";
							weptype = "Legendary Steel Greataxe";
							enchantment = "";
							wepdamage = 19;
							wepdamage = wepdamage + heavydamage;
							mdebuff = "";
							enchantment = "";
							islifesteal = 0;
							mdebuffdamage = 0;
							mdlength = 0;
							mdleft = 0;
						}
					}

					if (brandom == 7)
					{


						cout << "The enemy dropped a Legendary Steel Sword(17 Damage, One Handed)!\n";
						cout << "Do you want to pick it up? y/n\n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "y")
						{
							cout << "You pick up the Sword!\n";
							dtype = "One Handed";
							weptype = "Legendary Steel Sword";
							enchantment = "";
							wepdamage = 17;
							wepdamage = wepdamage + lightdamage;
							mdebuff = "";
							enchantment = "";
							islifesteal = 0;
							mdebuffdamage = 0;
							mdlength = 0;
							mdleft = 0;
						}
					}

					if (brandom == 8)
					{


						cout << "The enemy dropped a Legendary Steel Axe(18 Damage, One Handed)!\n";
						cout << "Do you want to pick it up? y/n\n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "y")
						{
							cout << "You pick up the axe!\n";
							dtype = "One Handed";
							weptype = "Legendary Steel Axe";
							enchantment = "";
							wepdamage = 18;
							wepdamage = wepdamage + lightdamage;
							mdebuff = "";
							enchantment = "";
							islifesteal = 0;
							mdebuffdamage = 0;
							mdlength = 0;
							mdleft = 0;
						}
					}
					if (brandom == 9)
					{
						cout << "The enemy dropped a Legendary Wooden Wand (14 damage, Magic)!\n Do you want to pick it up? y/n\n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "y")
						{
							cout << "You pick up the wand!\n";
							gweptype = "Legendary Wooden Wand";
							gwepdamage = 14;
							ismagiclifesteal = 0;
							gwepdamage = gwepdamage + magicdamage;
						}
					}

					if (brandom == 10)
					{
						cout << "The enemy dropped a Legendary Wyvern Wand (18 damage, Magic)!\n Do you want to pick it up? y/n\n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "y")
						{
							cout << "You pick up the wand!\n";
							gweptype = "Legendary Wyvern Wand";
							gwepdamage = 18;
							ismagiclifesteal = 0;
							gwepdamage = gwepdamage + magicdamage;
						}
					}

					if (brandom == 11)
					{
						cout << "The enemy dropped a Legendary Glow Stick (16 damage, Magic)!\n Do you want to pick it up? y/n\n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "y")
						{
							cout << "You pick up the wand!\n";
							gweptype = "Legendary Glow Stick";
							gwepdamage = 16;
							ismagiclifesteal = 0;
							gwepdamage = gwepdamage + magicdamage;
						}
					}

					if (brandom == 12)
					{
						cout << "The enemy dropped a Legendary Ruby Wand (16 damage, Magic)!\n Do you want to pick it up? y/n\n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "y")
						{
							cout << "You pick up the wand!\n";
							gweptype = "Legendary Ruby Wand";
							gwepdamage = 16;
							ismagiclifesteal = 0;
							gwepdamage = gwepdamage + magicdamage;
						}
					}

					if (brandom == 13)
					{
						cout << "The enemy dropped a Legendary Wyvern Greatsword(21 Damage, Two Handed)!\n";
						cout << "Do you want to pick it up? y/n\n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "y")
						{
							cout << "You pick up the Sword!\n";
							dtype = "Two Handed";
							weptype = "Legendary Wyvern Greatsword";
							enchantment = "";
							wepdamage = 21;
							wepdamage = wepdamage + heavydamage;
							mdebuff = "";
							enchantment = "";
							islifesteal = 0;
							mdebuffdamage = 0;
							mdlength = 0;
							mdleft = 0;
						}
					}

					if (brandom == 14)
					{
						cout << "The enemy dropped a Legendary Goblin Sword(17 Damage, One Handed)!\n";
						cout << "Do you want to pick it up? y/n\n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "y")
						{
							cout << "You pick up the Sword!\n";
							dtype = "One Handed";
							weptype = "Legendary Goblin Sword";
							enchantment = "";
							wepdamage = 17;
							wepdamage = wepdamage + lightdamage;
							mdebuff = "";
							enchantment = "";
							islifesteal = 0;
							mdebuffdamage = 0;
							mdlength = 0;
							mdleft = 0;
						}
					}

					if (brandom == 15)
					{
						cout << "The enemy dropped a Legendary Wraith Scythe(17 Damage, Two Handed, 2% Lifesteal)!\n";
						cout << "Do you want to pick it up? y/n\n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "y")
						{
							cout << "You pick up the Scythe!\n";
							dtype = "Two Handed";
							weptype = "Legendary Wraith Scythe";
							enchantment = "";
							wepdamage = 17;
							wepdamage = wepdamage + heavydamage;
							mdebuff = "";
							enchantment = "";
							islifesteal = 1;
							mdebuffdamage = 0;
							mdlength = 0;
							mdleft = 0;
						}
					}
					if (brandom == 16)
					{
						cout << "The enemy dropped a Legendary Wraith Sword(16 Damage, One Handed, 2% Lifesteal)!\n";
						cout << "Do you want to pick it up? y/n\n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "y")
						{
							cout << "You pick up the Sword!\n";
							dtype = "One Handed";
							weptype = "Legendary Wraith Sword";
							enchantment = "";
							wepdamage = 16;
							wepdamage = wepdamage + lightdamage;
							mdebuff = "";
							enchantment = "";
							islifesteal = 1;
							mdebuffdamage = 0;
							mdlength = 0;
							mdleft = 0;
						}
					}

					if (brandom == 17)
					{
						cout << "The enemy dropped a Legendary Diamond Wand (20 damage, Magic)!\n Do you want to pick it up? y/n\n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "y")
						{
							cout << "You pick up the wand!\n";
							gweptype = "Legendary Diamond Wand";
							gwepdamage = 20;
							ismagiclifesteal = 0;
							gwepdamage = gwepdamage + magicdamage;
						}

					}

					if (brandom == 18)
					{
						cout << "The enemy dropped a Legendary Wraith Wand (18 damage, Magic, 2% Lifesteal)!\n Do you want to pick it up? y/n\n";
						while (true)
						{
							cin >> answer;
							if (answer == "y" || answer == "n")
							{
								break;
							}
							if (answer == "p")
							{
								stats();
							}

						}
						if (answer == "y")
						{
							cout << "You pick up the wand!\n";
							gweptype = "Legendary Wraith Wand";
							gwepdamage = 18;
							ismagiclifesteal = 1;
							gwepdamage = gwepdamage + magicdamage;
						}

					}


					rare = 4;
				}
				else
				{
					if (drandom <= rarechance)
					{
						int brandom = (rand() % 18);
						if (brandom == 1)
						{
							cout << "The enemy dropped a Rare Iron Axe(6 Damage, One Handed)!\n";
							cout << "Do you want to pick it up?  y/n\n";

							while (true)
							{
								cin >> answer;
								if (answer == "y" || answer == "n")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}

							if (answer == "y")
							{
								cout << "You pick up the axe!\n";
								dtype = "One Handed";
								weptype = "Rare Iron Axe";
								enchantment = "";
								wepdamage = 6;
								wepdamage = wepdamage + lightdamage;
								mdebuff = "";
								enchantment = "";
								islifesteal = 0;
								mdebuffdamage = 0;
								mdlength = 0;
								mdleft = 0;
							}
						}

						if (brandom == 2)
						{
							cout << "The enemy dropped a Rare Iron Greatsword(7 Damage, Two Handed)!\n";
							cout << "Do you want to pick it up? y/n\n";
							while (true)
							{
								cin >> answer;
								if (answer == "y" || answer == "n")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}


							if (answer == "y")
							{
								cout << "You pick up the sword!\n";
								dtype = "Two Handed";
								weptype = "Rare Iron Greatsword";
								enchantment = "";
								wepdamage = 7;
								wepdamage = wepdamage + heavydamage;
								mdebuff = "";
								enchantment = "";
								islifesteal = 0;
								mdebuffdamage = 0;
								mdlength = 0;
								mdleft = 0;
							}
						}

						if (brandom == 3)
						{
							cout << "The enemy dropped a Rare Iron Greataxe(8 Damage, Two Handed)!\n";
							cout << "Do you want to pick it up? y/n\n";
							while (true)
							{
								cin >> answer;
								if (answer == "y" || answer == "n")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}


							if (answer == "y")
							{
								cout << "You pick up the axe!\n";
								dtype = "Two Handed";
								weptype = "Rare Iron Greataxe";
								enchantment = "";
								wepdamage = 8;
								wepdamage = wepdamage + heavydamage;
								mdebuff = "";
								enchantment = "";
								islifesteal = 0;
								mdebuffdamage = 0;
								mdlength = 0;
								mdleft = 0;
							}
						}


						if (brandom == 4)
						{
							cout << "The enemy dropped a Rare Iron Sword(5 Damage, One Handed)!\n";
							cout << "Do you want to pick it up? y/n\n";
							while (true)
							{
								cin >> answer;
								if (answer == "y" || answer == "n")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}


							if (answer == "y")
							{
								cout << "You pick up the sword!\n";
								dtype = "One Handed";
								weptype = "Rare Iron Sword";
								enchantment = "";
								wepdamage = 5;
								wepdamage = wepdamage + lightdamage;
								mdebuff = "";
								enchantment = "";
								islifesteal = 0;
								mdebuffdamage = 0;
								mdlength = 0;
								mdleft = 0;
							}
						}

						if (brandom == 5)
						{


							cout << "The enemy dropped a Rare Steel Greatsword(9 Damage, Two Handed)!\n";
							cout << "Do you want to pick it up? y/n\n";
							while (true)
							{
								cin >> answer;
								if (answer == "y" || answer == "n")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}
							if (answer == "y")
							{
								cout << "You pick up the sword!\n";
								dtype = "Two Handed";
								weptype = "Rare Steel Greatsword";
								enchantment = "";
								wepdamage = 9;
								wepdamage = wepdamage + heavydamage;
								mdebuff = "";
								enchantment = "";
								islifesteal = 0;
								mdebuffdamage = 0;
								mdlength = 0;
								mdleft = 0;
							}
						}

						if (brandom == 6)
						{


							cout << "The enemy dropped a Rare Steel Greataxe(10 Damage, Two Handed)!\n";
							cout << "Do you want to pick it up? y/n\n";
							while (true)
							{
								cin >> answer;
								if (answer == "y" || answer == "n")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}
							if (answer == "y")
							{
								cout << "You pick up the axe!\n";
								dtype = "Two Handed";
								weptype = "Rare Steel Greataxe";
								enchantment = "";
								wepdamage = 10;
								wepdamage = wepdamage + heavydamage;
								mdebuff = "";
								enchantment = "";
								islifesteal = 0;
								mdebuffdamage = 0;
								mdlength = 0;
								mdleft = 0;
							}
						}

						if (brandom == 7)
						{


							cout << "The enemy dropped a Rare Steel Sword(7 Damage, One Handed)!\n";
							cout << "Do you want to pick it up? y/n\n";
							while (true)
							{
								cin >> answer;
								if (answer == "y" || answer == "n")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}
							if (answer == "y")
							{
								cout << "You pick up the Sword!\n";
								dtype = "One Handed";
								weptype = "Rare Steel Sword";
								enchantment = "";
								wepdamage = 7;
								wepdamage = wepdamage + lightdamage;
								mdebuff = "";
								enchantment = "";
								islifesteal = 0;
								mdebuffdamage = 0;
								mdlength = 0;
								mdleft = 0;
							}
						}

						if (brandom == 8)
						{


							cout << "The enemy dropped a Rare Steel Axe(8 Damage, One Handed)!\n";
							cout << "Do you want to pick it up? y/n\n";
							while (true)
							{
								cin >> answer;
								if (answer == "y" || answer == "n")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}
							if (answer == "y")
							{
								cout << "You pick up the axe!\n";
								dtype = "One Handed";
								weptype = "Rare Steel Axe";
								enchantment = "";
								wepdamage = 8;
								wepdamage = wepdamage + lightdamage;
								mdebuff = "";
								enchantment = "";
								islifesteal = 0;
								mdebuffdamage = 0;
								mdlength = 0;
								mdleft = 0;
							}
						}
						if (brandom == 9)
						{
							cout << "The enemy dropped a Rare Wooden Wand (8 damage, Magic)!\n Do you want to pick it up? y/n\n";
							while (true)
							{
								cin >> answer;
								if (answer == "y" || answer == "n")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}
							if (answer == "y")
							{
								cout << "You pick up the wand!\n";
								gweptype = "Rare Wooden Wand";
								gwepdamage = 8;
								ismagiclifesteal = 0;
								gwepdamage = gwepdamage + magicdamage;
							}
						}

						if (brandom == 10)
						{
							cout << "The enemy dropped a Rare Wyvern Wand (11 damage, Magic)!\n Do you want to pick it up? y/n\n";
							while (true)
							{
								cin >> answer;
								if (answer == "y" || answer == "n")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}
							if (answer == "y")
							{
								cout << "You pick up the wand!\n";
								gweptype = "Rare Wyvern Wand";
								gwepdamage = 11;
								ismagiclifesteal = 0;
								gwepdamage = gwepdamage + magicdamage;
							}
						}

						if (brandom == 11)
						{
							cout << "The enemy dropped a Rare Glow Stick (9 damage, Magic)!\n Do you want to pick it up? y/n\n";
							while (true)
							{
								cin >> answer;
								if (answer == "y" || answer == "n")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}
							if (answer == "y")
							{
								cout << "You pick up the wand!\n";
								gweptype = "Rare Glow Stick";
								gwepdamage = 9;
								ismagiclifesteal = 0;
								gwepdamage = gwepdamage + magicdamage;
							}
						}

						if (brandom == 12)
						{
							cout << "The enemy dropped a Rare Ruby Wand (10 damage, Magic)!\n Do you want to pick it up? y/n\n";
							while (true)
							{
								cin >> answer;
								if (answer == "y" || answer == "n")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}
							if (answer == "y")
							{
								cout << "You pick up the wand!\n";
								gweptype = "Rare Ruby Wand";
								gwepdamage = 10;
								ismagiclifesteal = 0;
								gwepdamage = gwepdamage + magicdamage;
							}
						}

						if (brandom == 13)
						{
							cout << "The enemy dropped a Rare Wyvern Greatsword(11 Damage, Two Handed)!\n";
							cout << "Do you want to pick it up? y/n\n";
							while (true)
							{
								cin >> answer;
								if (answer == "y" || answer == "n")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}
							if (answer == "y")
							{
								cout << "You pick up the Sword!\n";
								dtype = "Two Handed";
								weptype = "Rare Wyvern Greatsword";
								enchantment = "";
								wepdamage = 11;
								wepdamage = wepdamage + heavydamage;
								mdebuff = "";
								enchantment = "";
								islifesteal = 0;
								mdebuffdamage = 0;
								mdlength = 0;
								mdleft = 0;
							}
						}

						if (brandom == 14)
						{
							cout << "The enemy dropped a Rare Goblin Sword(8 Damage, One Handed)!\n";
							cout << "Do you want to pick it up? y/n\n";
							while (true)
							{
								cin >> answer;
								if (answer == "y" || answer == "n")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}
							if (answer == "y")
							{
								cout << "You pick up the Sword!\n";
								dtype = "One Handed";
								weptype = "Rare Goblin Sword";
								enchantment = "";
								wepdamage = 8;
								wepdamage = wepdamage + lightdamage;
								mdebuff = "";
								enchantment = "";
								islifesteal = 0;
								mdebuffdamage = 0;
								mdlength = 0;
								mdleft = 0;
							}
						}

						if (brandom == 15)
						{
							cout << "The enemy dropped a Rare Wraith Scythe(9 Damage, Two Handed, 2% Lifesteal)!\n";
							cout << "Do you want to pick it up? y/n\n";
							while (true)
							{
								cin >> answer;
								if (answer == "y" || answer == "n")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}
							if (answer == "y")
							{
								cout << "You pick up the Scythe!\n";
								dtype = "Two Handed";
								weptype = "Rare Wraith Scythe";
								enchantment = "";
								wepdamage = 9;
								wepdamage = wepdamage + heavydamage;
								mdebuff = "";
								enchantment = "";
								islifesteal = 1;
								mdebuffdamage = 0;
								mdlength = 0;
								mdleft = 0;
							}
						}
						if (brandom == 16)
						{
							cout << "The enemy dropped a Rare Skeleton Sword(8 Damage, One Handed, 2% Lifesteal)!\n";
							cout << "Do you want to pick it up? y/n\n";
							while (true)
							{
								cin >> answer;
								if (answer == "y" || answer == "n")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}
							if (answer == "y")
							{
								cout << "You pick up the Sword!\n";
								dtype = "One Handed";
								weptype = "Rare Skeleton Sword";
								enchantment = "";
								wepdamage = 8;
								wepdamage = wepdamage + lightdamage;
								mdebuff = "";
								enchantment = "";
								islifesteal = 1;
								mdebuffdamage = 0;
								mdlength = 0;
								mdleft = 0;
							}
						}

						if (brandom == 17)
						{
							cout << "The enemy dropped a Rare Diamond Wand (11 damage, Magic)!\n Do you want to pick it up? y/n\n";
							while (true)
							{
								cin >> answer;
								if (answer == "y" || answer == "n")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}
							if (answer == "y")
							{
								cout << "You pick up the wand!\n";
								gweptype = "Rare Diamond Wand";
								gwepdamage = 11;
								ismagiclifesteal = 0;
								gwepdamage = gwepdamage + magicdamage;
							}

						}

						if (brandom == 18)
						{
							cout << "The enemy dropped a Rare Wraith Wand (10 damage, Magic, 2% Lifesteal)!\n Do you want to pick it up? y/n\n";
							while (true)
							{
								cin >> answer;
								if (answer == "y" || answer == "n")
								{
									break;
								}
								if (answer == "p")
								{
									stats();
								}

							}
							if (answer == "y")
							{
								cout << "You pick up the wand!\n";
								gweptype = "Rare Wraith Wand";
								gwepdamage = 10;
								ismagiclifesteal = 1;
								gwepdamage = gwepdamage + magicdamage;
							}

						}
						rare = 3;

					}
					else
					{
						if (drandom <= uncommonchance)
						{


							int brandom = (rand() % 12);
							if (brandom == 1)
							{
								cout << "The enemy dropped an Uncommon Iron Axe(5 Damage, One Handed)!\n";
								cout << "Do you want to pick it up?  y/n\n";

								while (true)
								{
									cin >> answer;
									if (answer == "y" || answer == "n")
									{
										break;
									}
									if (answer == "p")
									{
										stats();
									}

								}

								if (answer == "y")
								{
									cout << "You pick up the axe!\n";
									dtype = "One Handed";
									weptype = "Uncommon Iron Axe";
									enchantment = "";
									wepdamage = 5;
									wepdamage = wepdamage + lightdamage;
									mdebuff = "";
									enchantment = "";
									islifesteal = 0;
									mdebuffdamage = 0;
									mdlength = 0;
									mdleft = 0;
								}
							}

							if (brandom == 2)
							{
								cout << "The enemy dropped an Uncommon Iron Greatsword(5 Damage, Two Handed)!\n";
								cout << "Do you want to pick it up? y/n\n";
								while (true)
								{
									cin >> answer;
									if (answer == "y" || answer == "n")
									{
										break;
									}
									if (answer == "p")
									{
										stats();
									}

								}


								if (answer == "y")
								{
									cout << "You pick up the sword!\n";
									dtype = "Two Handed";
									weptype = "Uncommon Iron Greatsword";
									enchantment = "";
									wepdamage = 5;
									wepdamage = wepdamage + heavydamage;
									mdebuff = "";
									enchantment = "";
									islifesteal = 0;
									mdebuffdamage = 0;
									mdlength = 0;
									mdleft = 0;
								}
							}

							if (brandom == 3)
							{
								cout << "The enemy dropped an Uncommon Iron Greataxe(6 Damage, Two Handed)!\n";
								cout << "Do you want to pick it up? y/n\n";
								while (true)
								{
									cin >> answer;
									if (answer == "y" || answer == "n")
									{
										break;
									}
									if (answer == "p")
									{
										stats();
									}

								}


								if (answer == "y")
								{
									cout << "You pick up the axe!\n";
									dtype = "Two Handed";
									weptype = "Uncommon Iron Greataxe";
									enchantment = "";
									wepdamage = 6;
									wepdamage = wepdamage + heavydamage;
									mdebuff = "";
									enchantment = "";
									islifesteal = 0;
									mdebuffdamage = 0;
									mdlength = 0;
									mdleft = 0;
								}
							}


							if (brandom == 4)
							{
								cout << "The enemy dropped an Uncommon Iron Sword(4 Damage, One Handed)!\n";
								cout << "Do you want to pick it up? y/n\n";
								while (true)
								{
									cin >> answer;
									if (answer == "y" || answer == "n")
									{
										break;
									}
									if (answer == "p")
									{
										stats();
									}

								}


								if (answer == "y")
								{
									cout << "You pick up the sword!\n";
									dtype = "One Handed";
									weptype = "Uncommon Iron Sword";
									enchantment = "";
									wepdamage = 4;
									wepdamage = wepdamage + lightdamage;
									mdebuff = "";
									enchantment = "";
									islifesteal = 0;
									mdebuffdamage = 0;
									mdlength = 0;
									mdleft = 0;
								}
							}

							if (brandom == 5)
							{


								cout << "The enemy dropped an Uncommon Steel Greatsword(7 Damage, Two Handed)!\n";
								cout << "Do you want to pick it up? y/n\n";
								while (true)
								{
									cin >> answer;
									if (answer == "y" || answer == "n")
									{
										break;
									}
									if (answer == "p")
									{
										stats();
									}

								}
								if (answer == "y")
								{
									cout << "You pick up the sword!\n";
									dtype = "Two Handed";
									weptype = "Uncommon Steel Greatsword";
									enchantment = "";
									wepdamage = 7;
									wepdamage = wepdamage + heavydamage;
									mdebuff = "";
									enchantment = "";
									islifesteal = 0;
									mdebuffdamage = 0;
									mdlength = 0;
									mdleft = 0;
								}
							}

							if (brandom == 6)
							{


								cout << "The enemy dropped an Uncommon Steel Greataxe(8 Damage, Two Handed)!\n";
								cout << "Do you want to pick it up? y/n\n";
								while (true)
								{
									cin >> answer;
									if (answer == "y" || answer == "n")
									{
										break;
									}
									if (answer == "p")
									{
										stats();
									}

								}
								if (answer == "y")
								{
									cout << "You pick up the axe!\n";
									dtype = "Two Handed";
									weptype = "Uncommon Steel Greataxe";
									enchantment = "";
									wepdamage = 8;
									wepdamage = wepdamage + heavydamage;
									mdebuff = "";
									enchantment = "";
									islifesteal = 0;
									mdebuffdamage = 0;
									mdlength = 0;
									mdleft = 0;
								}
							}

							if (brandom == 7)
							{


								cout << "The enemy dropped an Uncommon Steel Sword(6 Damage, One Handed)!\n";
								cout << "Do you want to pick it up? y/n\n";
								while (true)
								{
									cin >> answer;
									if (answer == "y" || answer == "n")
									{
										break;
									}
									if (answer == "p")
									{
										stats();
									}

								}
								if (answer == "y")
								{
									cout << "You pick up the Sword!\n";
									dtype = "One Handed";
									weptype = "Uncommon Steel Sword";
									enchantment = "";
									wepdamage = 6;
									wepdamage = wepdamage + lightdamage;
									mdebuff = "";
									enchantment = "";
									islifesteal = 0;
									mdebuffdamage = 0;
									mdlength = 0;
									mdleft = 0;
								}
							}

							if (brandom == 8)
							{


								cout << "The enemy dropped an Uncommon Steel Axe(7 Damage, Two Handed)!\n";
								cout << "Do you want to pick it up? y/n\n";
								while (true)
								{
									cin >> answer;
									if (answer == "y" || answer == "n")
									{
										break;
									}
									if (answer == "p")
									{
										stats();
									}

								}
								if (answer == "y")
								{
									cout << "You pick up the axe!\n";
									dtype = "One Handed";
									weptype = "Uncommon Steel Axe";
									enchantment = "";
									wepdamage = 7;
									wepdamage = wepdamage + lightdamage;
									mdebuff = "";
									enchantment = "";
									islifesteal = 0;
									mdebuffdamage = 0;
									mdlength = 0;
									mdleft = 0;
								}
							}
							if (brandom == 9)
							{
								cout << "The enemy dropped an Uncommon Wooden Wand (6 damage, Magic)!\n Do you want to pick it up? y/n\n";
								while (true)
								{
									cin >> answer;
									if (answer == "y" || answer == "n")
									{
										break;
									}
									if (answer == "p")
									{
										stats();
									}

								}
								if (answer == "y")
								{
									cout << "You pick up the wand!\n";
									gweptype = "Uncommon Wooden Wand";
									gwepdamage = 6;
									ismagiclifesteal = 0;
									gwepdamage = gwepdamage + magicdamage;
								}
							}

							if (brandom == 10)
							{
								cout << "The enemy dropped an Uncommon Wyvern Wand (9 damage, Magic)!\n Do you want to pick it up? y/n\n";
								while (true)
								{
									cin >> answer;
									if (answer == "y" || answer == "n")
									{
										break;
									}
									if (answer == "p")
									{
										stats();
									}

								}
								if (answer == "y")
								{
									cout << "You pick up the wand!\n";
									gweptype = "Uncommon Wyvern Wand";
									gwepdamage = 9;
									ismagiclifesteal = 0;
									gwepdamage = gwepdamage + magicdamage;
								}
							}

							if (brandom == 11)
							{
								cout << "The enemy dropped an Uncommon Glow Stick (7 damage, Magic)!\n Do you want to pick it up? y/n\n";
								while (true)
								{
									cin >> answer;
									if (answer == "y" || answer == "n")
									{
										break;
									}
									if (answer == "p")
									{
										stats();
									}

								}
								if (answer == "y")
								{
									cout << "You pick up the wand!\n";
									gweptype = "Uncommon Glow Stick";
									gwepdamage = 7;
									ismagiclifesteal = 0;
									gwepdamage = gwepdamage + magicdamage;
								}
							}

							if (brandom == 12)
							{
								cout << "The enemy dropped an Uncommon Ruby Wand (8 damage)!\n Do you want to pick it up? y/n\n";
								while (true)
								{
									cin >> answer;
									if (answer == "y" || answer == "n")
									{
										break;
									}
									if (answer == "p")
									{
										stats();
									}

								}
								if (answer == "y")
								{
									cout << "You pick up the wand!\n";
									gweptype = "Uncommon Ruby Wand";
									gwepdamage = 8;
									ismagiclifesteal = 0;
									gwepdamage = gwepdamage + magicdamage;
								}
							}




							rare = 2;

						}
						else
						{
							if (drandom <= commonchance)
							{

								int brandom = (rand() % 12);
								if (brandom == 1)
								{
									cout << "The enemy dropped a Common Iron Axe(3 Damage, One Handed)!\n";
									cout << "Do you want to pick it up?  y/n\n";

									while (true)
									{
										cin >> answer;
										if (answer == "y" || answer == "n")
										{
											break;
										}
										if (answer == "p")
										{
											stats();
										}

									}

									if (answer == "y")
									{
										cout << "You pick up the axe!\n";
										dtype = "One Handed";
										weptype = "Common Iron Axe";
										enchantment = "";
										wepdamage = 3;
										wepdamage = wepdamage + lightdamage;
										mdebuff = "";
										enchantment = "";
										islifesteal = 0;
										mdebuffdamage = 0;
										mdlength = 0;
										mdleft = 0;
									}
								}

								if (brandom == 2)
								{
									cout << "The enemy dropped a Common Iron Greatsword(3 Damage, Two Handed)!\n";
									cout << "Do you want to pick it up? y/n\n";
									while (true)
									{
										cin >> answer;
										if (answer == "y" || answer == "n")
										{
											break;
										}
										if (answer == "p")
										{
											stats();
										}

									}


									if (answer == "y")
									{
										cout << "You pick up the sword!\n";
										dtype = "Two Handed";
										weptype = "Common Iron Greatsword";
										enchantment = "";
										wepdamage = 3;
										wepdamage = wepdamage + heavydamage;
										mdebuff = "";
										enchantment = "";
										islifesteal = 0;
										mdebuffdamage = 0;
										mdlength = 0;
										mdleft = 0;
									}
								}

								if (brandom == 3)
								{
									cout << "The enemy dropped a Common Iron Greataxe(4 Damage, Two Handed)! \n";
									cout << "Do you want to pick it up? y/n";
									while (true)
									{
										cin >> answer;
										if (answer == "y" || answer == "n")
										{
											break;
										}
										if (answer == "p")
										{
											stats();
										}

									}


									if (answer == "y")
									{
										cout << "You pick up the axe! \n";
										dtype = "Two Handed";
										weptype = "Common Iron Greataxe";
										enchantment = "";
										wepdamage = 4;
										wepdamage = wepdamage + heavydamage;
										mdebuff = "";
										enchantment = "";
										islifesteal = 0;
										mdebuffdamage = 0;
										mdlength = 0;
										mdleft = 0;
									}
								}


								if (brandom == 4)
								{
									cout << "The enemy dropped a Common Iron Sword(3 Damage, One Handed)! \n";
									cout << "Do you want to pick it up? y/n";
									while (true)
									{
										cin >> answer;
										if (answer == "y" || answer == "n")
										{
											break;
										}
										if (answer == "p")
										{
											stats();
										}

									}


									if (answer == "y")
									{
										cout << "You pick up the sword! \n";
										dtype = "One Handed";
										weptype = "Common Iron Sword";
										enchantment = "";
										wepdamage = 3;
										wepdamage = wepdamage + lightdamage;
										mdebuff = "";
										enchantment = "";
										islifesteal = 0;
										mdebuffdamage = 0;
										mdlength = 0;
										mdleft = 0;
									}
								}

								if (brandom == 5)
								{


									cout << "The enemy dropped a Common Steel Greatsword(5 Damage, Two Handed)!\n";
									cout << "Do you want to pick it up? y/n\n";
									while (true)
									{
										cin >> answer;
										if (answer == "y" || answer == "n")
										{
											break;
										}
										if (answer == "p")
										{
											stats();
										}

									}
									if (answer == "y")
									{
										cout << "You pick up the sword! \n";
										dtype = "Two Handed";
										weptype = "Common Steel Greatsword";
										enchantment = "";
										wepdamage = 5;
										wepdamage = wepdamage + heavydamage;
										mdebuff = "";
										enchantment = "";
										islifesteal = 0;
										mdebuffdamage = 0;
										mdlength = 0;
										mdleft = 0;
									}
								}

								if (brandom == 6)
								{


									cout << "The enemy dropped a Common Steel Greataxe(6 Damage, Two Handed)!\n";
									cout << "Do you want to pick it up? y/n\n";
									while (true)
									{
										cin >> answer;
										if (answer == "y" || answer == "n")
										{
											break;
										}
										if (answer == "p")
										{
											stats();
										}

									}
									if (answer == "y")
									{
										cout << "You pick up the axe! \n";
										dtype = "Two Handed";
										weptype = "Common Steel Greataxe";
										enchantment = "";
										wepdamage = 6;
										wepdamage = wepdamage + heavydamage;
										mdebuff = "";
										enchantment = "";
										islifesteal = 0;
										mdebuffdamage = 0;
										mdlength = 0;
										mdleft = 0;
									}
								}

								if (brandom == 7)
								{


									cout << "The enemy dropped a Common Steel Sword(4 Damage, One Handed)!\n";
									cout << "Do you want to pick it up? y/n\n";
									while (true)
									{
										cin >> answer;
										if (answer == "y" || answer == "n")
										{
											break;
										}
										if (answer == "p")
										{
											stats();
										}

									}
									if (answer == "y")
									{
										cout << "You pick up the Sword! \n";
										dtype = "One Handed";
										weptype = "Common Steel Sword";
										enchantment = "";
										wepdamage = 4;
										wepdamage = wepdamage + lightdamage;
										mdebuff = "";
										enchantment = "";
										islifesteal = 0;
										mdebuffdamage = 0;
										mdlength = 0;
										mdleft = 0;
									}
								}

								if (brandom == 8)
								{


									cout << "The enemy dropped a Common Steel Axe(5 Damage, One Handed)!\n";
									cout << "Do you want to pick it up? y/n\n";
									while (true)
									{
										cin >> answer;
										if (answer == "y" || answer == "n")
										{
											break;
										}
										if (answer == "p")
										{
											stats();
										}

									}
									if (answer == "y")
									{
										cout << "You pick up the axe! \n";
										dtype = "One Handed";
										weptype = "Common Steel Axe";
										enchantment = "";
										wepdamage = 5;
										wepdamage = wepdamage + lightdamage;
										mdebuff = "";
										enchantment = "";
										islifesteal = 0;
										mdebuffdamage = 0;
										mdlength = 0;
										mdleft = 0;
									}
								}
								if (brandom == 9)
								{
									cout << "The enemy dropped a Common Wooden Wand (3 damage, Magic)!\n Do you want to pick it up? y/n \n";
									while (true)
									{
										cin >> answer;
										if (answer == "y" || answer == "n")
										{
											break;
										}
										if (answer == "p")
										{
											stats();
										}

									}
									if (answer == "y")
									{
										cout << "You pick up the wand! \n";
										gweptype = "Common Wooden Wand";
										gwepdamage = 3;
										ismagiclifesteal = 0;
										gwepdamage = gwepdamage + magicdamage;
									}
								}

								if (brandom == 10)
								{
									cout << "The enemy dropped a Common Wyvern Wand (6 damage, Magic)!\n Do you want to pick it up? y/n \n";
									while (true)
									{
										cin >> answer;
										if (answer == "y" || answer == "n")
										{
											break;
										}
										if (answer == "p")
										{
											stats();
										}

									}
									if (answer == "y")
									{
										cout << "You pick up the wand! \n";
										gweptype = "Common Wyvern Wand";
										gwepdamage = 6;
										ismagiclifesteal = 0;
										gwepdamage = gwepdamage + magicdamage;
									}
								}

								if (brandom == 11)
								{
									cout << "The enemy dropped a Common Glow Stick (4 damage, Magic)!\n Do you want to pick it up? y/n \n";
									while (true)
									{
										cin >> answer;
										if (answer == "y" || answer == "n")
										{
											break;
										}
										if (answer == "p")
										{
											stats();
										}

									}
									if (answer == "y")
									{
										cout << "You pick up the wand! \n";
										gweptype = "Common Glow Stick";
										gwepdamage = 4;
										ismagiclifesteal = 0;
										gwepdamage = gwepdamage + magicdamage;
									}
								}

								if (brandom == 12)
								{
									cout << "The enemy dropped a Common Ruby Wand (5 damage)!\n Do you want to pick it up? y/n \n";
									while (true)
									{
										cin >> answer;
										if (answer == "y" || answer == "n")
										{
											break;
										}
										if (answer == "p")
										{
											stats();
										}

									}
									if (answer == "y")
									{
										cout << "You pick up the wand! \n";
										gweptype = "Common Ruby Wand";
										gwepdamage = 5;
										ismagiclifesteal = 0;
										gwepdamage = gwepdamage + magicdamage;
									}
								}




								rare = 1;

							}

						}// common, correct

					}// uncommon, correct
				} // rare, correct
				int random = (rand() % 2);
				if (random == 2)
				{
					cout << "The enemy dropped 5 magic! ";
					magic = magic + 5;
				}
				if (random == 1)
				{
					if (level > 4)
					{
						cout << "The enemy dropped 25 health! ";
						health = health + 25;
					}
					if (level > 6)
					{
						cout << "The enemy dropped 40 health! ";
						health = health + 40;
					}
					if (level > 9)
					{
						cout << "The enemy dropped 60 health! ";
						health = health + 60;
					}
					else
					{
						cout << "The enemy dropped 8 health! ";
						health = health + 8;
					}
				}

				attacked = 1;
				turn = 1;

			}
		}
	}
} // very big function, keep closed


void stats()
{
	if (health > maxhealth)
	{
		health = maxhealth;
	}
	cout << "Would you like to view stats, or leave? Press v for stats, l for leave. ";
	while (true)
	{
		cin >> answer;
		if (answer == "v" || answer == "l")
		{
			break;
		}
		if (answer == "p")
		{
			stats();
		}

	}

	if (answer == "v")
	{
		cout << "Name = ";
		cout << string(name);
		cout << endl;
		cout << "Class = ";
		cout << string(fastlevel);
		cout << endl;
		cout << "Crit Chance = ";
		cout << int(critchance);
		cout << "%";
		cout << endl;
		if (fastlevel == "Vampire")
		{
			cout << "Bite Damage = " << int(bitedamage);
			cout << endl;
		}
		cout << "Melee Weapon = ";
		cout << string(weptype);
		cout << endl;
		cout << "Melee Weapon Type = ";
		cout << string(dtype);
		cout << endl;
		cout << "Magic Weapon = ";
		cout << string(gweptype);
		cout << endl;
		cout << "Spell 1 = ";
		cout << string(spell);
		cout << endl;
		cout << "Spell 2 = ";
		cout << string(spell2);
		cout << endl;
		cout << "Spell 3 = ";
		cout << string(spell3);
		cout << endl;
		cout << "Magic Damage = ";
		cout << int(gwepdamage);
		cout << endl;
		cout << "Total Melee Damage = ";
		cout << int(damage);
		cout << "-";
		cout << int(damage2);
		cout << " + ";
		cout << int(wepdamage);
		cout << endl;
		cout << "Total Spell 1 damage = ";
		cout << int(mdamage);
		cout << "-";
		cout << int(mdamage2);
		cout << " + ";
		cout << int(gwepdamage);
		cout << endl;
		cout << "Total Spell 2 damage = ";
		cout << int(fdamage);
		cout << "-";
		cout << int(fdamage2);
		cout << " + ";
		cout << int(gwepdamage);
		cout << endl;
		cout << "Total Spell 3 damage = ";
		cout << int(idamage);
		cout << "-";
		cout << int(idamage2);
		cout << " + ";
		cout << int(gwepdamage);
		cout << endl;
		if (fastlevel == "Necromancer")
		{
			cout << "Minion damage = " << int(miniondamage);
			cout << endl;
			cout << "Minion 2 damage = " << int(miniondamage);
			cout << endl;
			cout << "Minion health = " << int(minionmaxhealth);
			cout << endl;
			cout << "Minion 2 health = " << int(minionmaxhealth2);
			cout << endl;
		}
		cout << "Health = ";
		cout << int(health);
		cout << endl;
		cout << "Healing = ";
		cout << int(heal);
		cout << endl;
		cout << "Magic = ";
		cout << int(magic);
		cout << endl;
		cout << "Defence = ";
		cout << float(defence);
		cout << endl;
		cout << "Gold = ";
		cout << int(gold);
		cout << endl;
		cout << "XP = ";
		cout << int(xp);
		cout << endl;
		cout << "XP to next level = ";
		cout << int(neededxp);
		cout << endl;
		cout << "Level ";
		cout << int(level);
		cout << endl;
		cout << "Skill Points = ";
		cout << int(enxp);
		cout << endl;

	}
}




void
fight()
{
	while (attacked == 0)
	{

		if (health > maxhealth)
		{
			health = maxhealth;
		}
		if (health <= 0)
		{
			cout << "You died!";
			return;
		}
		if (first == 0)
		{
			int mdleft = 0;
			if (isboss == 1)
			{
				if (fastlevel == "Vampire")
				{
					cout << "To use attack type a, to use a spell press s, to heal press h, to see enemy stats press o, to defend press d, to bite press v.";
				}
				else
				{
					if (fastlevel == "Necromancer")
					{
						cout << "To use attack press a, to use a spell press s, to heal press h, to see enemy stats press o, to defend press d, to summon something press n.\n";
					}
					else
					{
						cout << "To use attack press a, to use a spell press s, to heal press h, to see enemy stats press o, to defend press d.\n";
					}
				}
			}
			if (isboss == 0)
			{
				if (fastlevel == "Vampire")
				{
					cout << "To use attack type a, to use a spell press s, to heal press h, to see enemy stats press o, to defend press d, to bite press v, to flee press f, you can only attempt to flee once every fight.\n";
				}
				else
				{
					if (fastlevel == "Necromancer")
					{
						cout << "To use attack press a, to use a spell press s, to heal press h, to see enemy stats press o, to defend press d, to summon something press n, to flee press f, you can only attempt to flee once every fight.\n";
					}
					else
					{
						cout << "To use attack press a, to use a spell press s, to heal press h, to see enemy stats press o, to defend press d, to flee press f, you can only attempt to flee once every fight.\n";
					}
				}
			}


			first = 1;
		}



		cin >> answer;

		if (answer == "p")
		{
			stats();
			turn = 1;
		}

		// put bow stuff here


		if (answer == "o")
		{
			if (ehealth > 0)
			{
				cout << string(enemyname) << " has " << int(ehealth) << " health, and " << int(edamage2) << " damage, and " << int(eheal) << " heal.";
				cout << endl;
			}
			if (ehealth2 > 0)
			{
				cout << string(enemyname2) << " has " << int(ehealth2) << " health, and " << int(edamage4) << " damage, and " << int(eheal2) << " heal.";
				cout << endl;
			}
			if (ehealth3 > 0)
			{
				cout << string(enemyname3) << " has " << int(ehealth3) << " health, and " << int(edamage6) << " damage, and " << int(eheal3) << " heal.";
				cout << endl;
			}

		}



		if (answer == "f")
		{
			if (isboss == 0)
			{
				isboss = 1;
				int drandom = (rand() % 100) + 1;
				if (drandom > 50)
				{
					cout << "You Flee! ";
					break;
				}
				else
				{
					cout << "You dont flee. ";
				}

			}
		}

		if (answer == "d")
		{
			isdefending = 1;
			cout << "You start defending!\n";
			turn = 0;
			enemyattack();
		}


		if (answer == "n")
		{
			if (fastlevel == "Necromancer")
			{
				cout << "Which minion do you want to summon? 1/2\n";
				cout << "Press l to leave.\n";
				while (true)
				{
					cin >> answer;
					if (answer == "1" || answer == "2" || answer == "l")
					{
						break;
					}
					if (answer == "p")
					{
						stats();
					}

				}
				if (answer == "l")
				{
					cout << "You has left.\n";
				}
				if (answer == "1")
				{
					if (magic > 0)
					{
						if (minionsummoned == 1)
						{
							cout << "That minion is already summoned.\n";
						}
						if (minionname != "")
						{
							cout << "You summon the " << string(minionname) << " to fight for you!\n";
							magic = magic - 1;
							cout << "You have " << int(magic) << " magic left!\n";
							minionsummoned = 1;
							minionhealth = minionmaxhealth;
						}
						else
						{
							cout << "You dont have that spell.\n";
						}
					}
					else
					{
						cout << "You dont have enough magic!\n";
					}
				}
				if (answer == "2")
				{
					if (magic > 0)
					{
						if (minion2summoned == 1)
						{
							cout << "That minion is already summoned.\n";
						}
						if (minionname2 != "")
						{
							cout << "You summon the " << string(minionname2) << " to fight for you!\n";
							magic = magic - 1;
							cout << "You have " << int(magic) << " magic left!\n";
							minion2summoned = 1;
							minionhealth2 = minionmaxhealth2;
						}

						else
						{
							cout << "You dont have that spell.\n";
						}
					}
					else
					{
						cout << "You dont have enough magic!\n";
					}
				}
			}
			else
			{
				cout << "You have to be a Necromancer to summon stuff.\n";
			}
		}

		if (answer == "a") // attack
		{
			if (turn == 1)
			{
				cout << "What enemy do you want to attack? ";
				if (ehealth > 0)
				{
					cout << "a ";
				}
				if (ehealth2 > 0)
				{
					cout << "b ";
				}
				if (ehealth3 > 0)
				{
					cout << "c ";
				}
				cin >> answer;
				if (answer == "c")
				{
					if (ehealth3 > 0)
					{
						mdleft = mdleft + mdlength;
						int prand = rand();
						int damagerange = damage2 - damage;
						int totaldamage = damage + prand % damagerange + 1;
						totaldamage = totaldamage + wepdamage;
						int random = (rand() % 100) + 1;

						if (random <= critchance)
						{
							cout << "You got a Critical Hit!\n";
							totaldamage = totaldamage * 3;
						}


						ehealth3 = ehealth3 - totaldamage;

						cout << "You attack the " << string(enemyname3) << " and deal " << int(totaldamage) << " damage!\n";
						if (islifesteal == 1)
						{
							stolenlife = ehealth3 * 0.02;
							cout << "You steal " << stolenlife << " health from the " << string(enemyname3) << "!\n";
							health = health + stolenlife;
							if (health > maxhealth)
							{
								health = maxhealth;
							}
						}
						cout << "The " << string(enemyname3) << " has " << int(ehealth3) << " health left!\n";
						turn = 0;
						if (turn == 0)
						{
							if (ehealth3 <= 0)
							{
								cout << "You killed the " << string(enemyname3) << "!\n";
							}
							if (ehealth <= 0)
							{
								if (ehealth2 <= 0)
								{
									if (ehealth3 <= 0)
									{


										enemydie();

									}


								}


							}



						}
						if (atb == 0)
						{
							enemyattack();
						}
					}
					else
					{
						cout << "You cannot attack dead enemies. ";
					}
				}

				if (answer == "b")
				{
					if (ehealth2 > 0)
					{
						mdleft = mdleft + mdlength;
						int prand = rand();
						int damagerange = damage2 - damage;
						int totaldamage = damage + prand % damagerange + 1;
						totaldamage = totaldamage + wepdamage;
						int random = (rand() % 100) + 1;

						if (random <= critchance)
						{
							cout << "You got a Critical Hit!\n";
							totaldamage = totaldamage * 3;
						}


						ehealth2 = ehealth2 - totaldamage;

						cout << "You attack the " << string(enemyname2) << " and deal " << int(totaldamage) << " damage!\n";
						if (islifesteal == 1)
						{
							stolenlife = ehealth2 * 0.02;
							cout << "You steal " << stolenlife << " health from the " << string(enemyname2) << "!\n";
							health = health + stolenlife;
							if (health > maxhealth)
							{
								health = maxhealth;
							}
						}
						cout << "The " << string(enemyname2) << " has " << int(ehealth2) << " health left!\n";
						turn = 0;
						if (turn == 0)
						{
							if (ehealth2 <= 0)
							{
								cout << "You killed the " << string(enemyname2) << "!\n";
							}
							if (ehealth <= 0)
							{
								if (ehealth2 <= 0)
								{

									if (ehealth3 <= 0)
									{

										enemydie();

									}


								}


							}



						}
						enemyattack();
					}
					else
					{
						cout << "You cannot attack dead enemies. ";
					}
				}
			}
			if (answer == "a")
			{

				if (ehealth > 0)
				{
					mdleft = mdleft + mdlength;
					int prand = rand();
					int damagerange = damage2 - damage;
					int totaldamage = damage + prand % damagerange + 1;
					totaldamage = totaldamage + wepdamage;
					int random = (rand() % 100) + 1;

					if (random <= critchance)
					{
						cout << "You got a Critical Hit! ";
						totaldamage = totaldamage * 3;
					}


					ehealth = ehealth - totaldamage;

					cout << "You attack the " << string(enemyname) << " and deal " << int(totaldamage) << " damage!\n";
					if (islifesteal == 1)
					{
						stolenlife = ehealth * 0.02;
						cout << "You steal " << stolenlife << " health from the " << string(enemyname) << "!\n";
						health = health + stolenlife;
						if (health > maxhealth)
						{
							health = maxhealth;
						}
					}
					cout << "The " << string(enemyname) << " has " << int(ehealth) << " health left!\n";
					turn = 0;
					if (turn == 0)
					{
						if (ehealth <= 0)
						{
							cout << "You killed the " << string(enemyname) << "!\n";
							if (ehealth2 <= 0)
							{
								if (ehealth3 <= 0)
								{

									enemydie();

								}


							}


						}



					}
					enemyattack();
				}
				else
				{
					cout << "You cannot attack dead enemies. ";
				}
			}


		}


		if (answer == "v") // bite
		{
			if (turn == 1)
			{
				if (magic > 0)
				{
					if (fastlevel == "Vampire")
					{
						cout << "What enemy do you want to bite? ";
						if (ehealth > 0)
						{
							cout << "a ";
						}
						if (ehealth2 > 0)
						{
							cout << "b ";
						}
						if (ehealth3 > 0)
						{
							cout << "c ";
						}
						cin >> answer;
						if (answer == "c")
						{
							if (ehealth3 > 0)
							{
								mdleft = mdleft + mdlength;
								int prand = rand();
								int damagerange = damage2 - damage;
								int totaldamage = damage + prand % damagerange + 1;
								totaldamage = totaldamage + wepdamage;
								int random = (rand() % 100) + 1;
								if (random <= critchance)
								{
									cout << "You got a Critical Hit!\n";
									bitedamage = bitedamage * 3;
								}
								cout << "You bite the " << string(enemyname3) << " and deal " << int(bitedamage) << " damage!\n";
								stolenlife = bitedamage;
								cout << "You steal " << stolenlife << " health from the " << string(enemyname3) << "!\n";
								health = health + stolenlife;
								if (health > maxhealth)
								{
									health = maxhealth;
								}
								ehealth3 = ehealth3 - bitedamage;
								magic = magic - 1;
								cout << "You have " << int(magic) << " magic left!\n";
								cout << "The " << string(enemyname3) << " has " << int(ehealth3) << " health left!\n";
								turn = 0;
								if (turn == 0)
								{
									if (ehealth3 <= 0)
									{
										cout << "You killed the " << string(enemyname3) << "!\n";
									}
									if (ehealth <= 0)
									{
										if (ehealth2 <= 0)
										{
											if (ehealth3 <= 0)
											{
												enemydie();
											}
										}
									}
								}
								if (atb == 0)
								{
									enemyattack();
								}
							}
							else
							{
								cout << "You cannot attack dead enemies. ";
							}
						}

						if (answer == "b")
						{
							if (ehealth2 > 0)
							{
								mdleft = mdleft + mdlength;
								int prand = rand();
								int damagerange = damage2 - damage;
								int totaldamage = damage + prand % damagerange + 1;
								totaldamage = totaldamage + wepdamage;
								int random = (rand() % 100) + 1;

								if (random <= critchance)
								{
									cout << "You got a Critical Hit!\n";
									bitedamage = bitedamage * 3;
								}


								cout << "You bite the " << string(enemyname2) << " and deal " << int(bitedamage) << " damage!\n";
								stolenlife = bitedamage;
								cout << "You steal " << stolenlife << " health from the " << string(enemyname2) << "!\n";
								health = health + stolenlife;
								if (health > maxhealth)
								{
									health = maxhealth;
								}
								ehealth2 = ehealth2 - bitedamage;
								magic = magic - 1;
								cout << "You have " << int(magic) << " magic left!\n";
								cout << "The " << string(enemyname2) << " has " << int(ehealth2) << " health left!\n";
								turn = 0;
								if (turn == 0)
								{
									if (ehealth2 <= 0)
									{
										cout << "You killed the " << string(enemyname2) << "!\n";
									}
									if (ehealth <= 0)
									{
										if (ehealth2 <= 0)
										{

											if (ehealth3 <= 0)
											{

												enemydie();

											}


										}


									}



								}
								enemyattack();
							}
							else
							{
								cout << "You cannot attack dead enemies. ";
							}
						}

						if (answer == "a")
						{

							if (ehealth > 0)
							{
								mdleft = mdleft + mdlength;
								int prand = rand();
								int damagerange = damage2 - damage;
								int totaldamage = damage + prand % damagerange + 1;
								totaldamage = totaldamage + wepdamage;
								int random = (rand() % 100) + 1;

								if (random <= critchance)
								{
									cout << "You got a Critical Hit! ";
									bitedamage = bitedamage * 3;
								}
								cout << "You bite the " << string(enemyname) << " and deal " << int(bitedamage) << " damage!\n";
								stolenlife = bitedamage;
								cout << "You steal " << stolenlife << " health from the " << string(enemyname) << "!\n";
								health = health + stolenlife;
								if (health > maxhealth)
								{
									health = maxhealth;
								}
								ehealth = ehealth - bitedamage;
								magic = magic - 1;
								cout << "You have " << int(magic) << " magic left!\n";
								cout << "The " << string(enemyname) << " has " << int(ehealth) << " health left!\n";
								turn = 0;
								if (turn == 0)
								{
									if (ehealth <= 0)
									{
										cout << "You killed the " << string(enemyname) << "!\n";
										if (ehealth2 <= 0)
										{
											if (ehealth3 <= 0)
											{

												enemydie();

											}


										}


									}



								}
								enemyattack();
							}
							else
							{
								cout << "You cannot attack dead enemies. ";
							}
						}
					}
				}
				else
				{
					cout << "You dont have enough magic!\n";
				}
			}
		}


		if (answer == "s")
		{
			if (turn == 1)
			{
				if (magic > 0)
				{

					cout << "What spell do you want to use? Type 1, 2, and 3 for spells 1, 2, and 3. ";
					cin >> answer;
					if (answer == "1")
					{
						if (spell != "")
						{
							cout << "What enemy do you want to attack? ";
							if (ehealth > 0)
							{
								cout << "a ";
							}
							if (ehealth2 > 0)
							{
								cout << "b ";
							}
							if (ehealth3 > 0)
							{
								cout << "c ";
							}
							cin >> answer;
							if (answer == "a")
							{
								which = 1;
							}
							if (answer == "b")
							{
								which = 2;
							}
							if (answer == "c")
							{
								which = 3;
							}
							dleft1 = dleft1 + dlength1;
							int prand = rand();
							int mdamagerange = mdamage2 - mdamage;
							int mtotaldamage = mdamage + prand % mdamagerange + 1;
							int random = (rand() % 100) + 1;
							extracritchance = critchance + 2;

							if (random <= critchance)
							{

								cout << "You got a Critical Hit!\n";
								mtotaldamage = mtotaldamage * 3;
							}

							mtotaldamage = mtotaldamage + gwepdamage + debuff1;
							cout << " You use " << string(spell) << " and deal ";
							cout << int(mtotaldamage);
							cout << " damage!\n";
							if (which == 1)
							{

								if (ismagiclifesteal == 1)
								{
									stolenlife = ehealth * 0.02;
									cout << "You steal " << stolenlife << " health from the " << string(enemyname) << "!\n";
									health = health + stolenlife;
									if (health > maxhealth)
									{
										health = maxhealth;
									}
								}
								ehealth = ehealth - mtotaldamage;
							}
							if (which == 2)
							{
								if (ismagiclifesteal == 1)
								{
									stolenlife = ehealth2 * 0.02;
									cout << "You steal " << stolenlife << " health from the " << string(enemyname2) << "!\n";
									health = health + stolenlife;
									if (health > maxhealth)
									{
										health = maxhealth;
									}
								}
								ehealth2 = ehealth2 - mtotaldamage;
							}
							if (which == 3)
							{
								if (ismagiclifesteal == 1)
								{
									stolenlife = ehealth3 * 0.02;
									cout << "You steal " << stolenlife << " health from the " << string(enemyname3) << "!\n";
									health = health + stolenlife;
									if (health > maxhealth)
									{
										health = maxhealth;
									}
								}
								ehealth3 = ehealth3 - mtotaldamage;
							}
							magic = magic - usemagic;
							if (which == 1)
							{
								cout << "The " << string(enemyname) << " has ";
								cout << int(ehealth);
							}
							if (which == 2)
							{
								cout << "The " << string(enemyname2) << " has ";
								cout << int(ehealth2);
							}
							if (which == 3)
							{
								cout << "The " << string(enemyname3) << " has ";
								cout << int(ehealth3);
							}
							cout << " health left!\n";
							cout << "You have ";
							cout << int(magic);
							cout << " magic left.\n";
							turn = 0;
							if (turn == 0)
							{
								if (ehealth <= 0)
								{
									enemydie();

								}
								enemyattack();
							}
						}
						else
						{
							cout << " You dont have that spell!";
							turn = 0;
							if (turn == 0)
							{
								if (ehealth <= 0)
								{
									enemydie();

								}
								enemyattack();
							}
						}


					}







					if (answer == "2")
					{
						if (spell2 != "")
						{
							cout << "What enemy do you want to attack? ";
							if (ehealth > 0)
							{
								cout << "a ";
							}
							if (ehealth2 > 0)
							{
								cout << "b ";
							}
							if (ehealth3 > 0)
							{
								cout << "c ";
							}
							cin >> answer;
							if (answer == "a")
							{
								which = 1;
							}
							if (answer == "b")
							{
								which = 2;
							}
							if (answer == "c")
							{
								which = 3;
							}
							dleft2 = dleft2 + dlength2;
							int prand = rand();
							int fdamagerange = fdamage2 - fdamage;
							int ftotaldamage = fdamage + prand % fdamagerange + 1;
							int random = (rand() % 100) + 1;
							extracritchance = critchance + 2;

							if (random <= critchance)
							{

								cout << "You got a Critical Hit!\n";
								ftotaldamage = ftotaldamage * 3;
							}

							ftotaldamage = ftotaldamage + gwepdamage + debuff1;
							cout << " You use " << string(spell2) << " and deal ";
							cout << int(ftotaldamage);
							cout << " damage!\n";
							if (which == 1)
							{
								if (ismagiclifesteal == 1)
								{
									stolenlife = ehealth * 0.02;
									cout << "You steal " << stolenlife << " health from the " << string(enemyname) << "!\n";
									health = health + stolenlife;
									if (health > maxhealth)
									{
										health = maxhealth;
									}
								}
								ehealth = ehealth - ftotaldamage;
							}
							if (which == 2)
							{
								if (ismagiclifesteal == 1)
								{
									stolenlife = ehealth2 * 0.02;
									cout << "You steal " << stolenlife << " health from the " << string(enemyname2) << "!\n";
									health = health + stolenlife;
									if (health > maxhealth)
									{
										health = maxhealth;
									}
								}
								ehealth2 = ehealth2 - ftotaldamage;
							}
							if (which == 3)
							{
								if (ismagiclifesteal == 1)
								{
									stolenlife = ehealth3 * 0.02;
									cout << "You steal " << stolenlife << " health from the " << string(enemyname3) << "!\n";
									health = health + stolenlife;
									if (health > maxhealth)
									{
										health = maxhealth;
									}
								}
								ehealth3 = ehealth3 - ftotaldamage;
							}
							magic = magic - usemagic2;
							if (which == 1)
							{
								cout << "The " << string(enemyname) << " has ";
								cout << int(ehealth);
							}
							if (which == 2)
							{
								cout << "The " << string(enemyname2) << " has ";
								cout << int(ehealth2);
							}
							if (which == 3)
							{
								cout << "The " << string(enemyname3) << " has ";
								cout << int(ehealth3);
							}
							cout << " health left!\n";
							cout << "You have ";
							cout << int(magic);
							cout << " magic left.\n";
							turn = 0;
							if (turn == 0)
							{
								if (ehealth <= 0)
								{
									enemydie();

								}
								enemyattack();
							}
						}
						else
						{
							cout << "You dont have that spell! ";
							turn = 0;
							if (turn == 0)
							{
								if (ehealth <= 0)
								{
									enemydie();

								}
								enemyattack();
							}
						}

					}

					if (answer == "3")
					{
						if (spell3 != "")
						{
							cout << "What enemy do you want to attack? ";
							if (ehealth > 0)
							{
								cout << "a ";
							}
							if (ehealth2 > 0)
							{
								cout << "b ";
							}
							if (ehealth3 > 0)
							{
								cout << "c ";
							}
							cin >> answer;
							if (answer == "a")
							{
								which = 1;
							}
							if (answer == "b")
							{
								which = 2;
							}
							if (answer == "c")
							{
								which = 3;
							}
							dleft2 = dleft2 + dlength2;
							int prand = rand();
							int idamagerange = idamage2 - idamage;
							int itotaldamage = idamage + prand % idamagerange + 1;
							int random = (rand() % 100) + 1;
							extracritchance = critchance + 2;

							if (random <= critchance)
							{

								cout << "You got a Critical Hit!\n";
								itotaldamage = itotaldamage * 3;
							}

							itotaldamage = itotaldamage + gwepdamage + debuff1;
							cout << " You use " << string(spell3) << " and deal ";
							cout << int(itotaldamage);
							cout << " damage!\n";
							if (which == 1)
							{
								if (ismagiclifesteal == 1)
								{
									stolenlife = ehealth * 0.02;
									cout << "You steal " << stolenlife << " health from the " << string(enemyname) << "!\n";
									health = health + stolenlife;
									if (health > maxhealth)
									{
										health = maxhealth;
									}
								}
								ehealth = ehealth - itotaldamage;
							}
							if (which == 2)
							{
								if (ismagiclifesteal == 1)
								{
									stolenlife = ehealth2 * 0.02;
									cout << "You steal " << stolenlife << " health from the " << string(enemyname2) << "!\n";
									health = health + stolenlife;
									if (health > maxhealth)
									{
										health = maxhealth;
									}
								}
								ehealth2 = ehealth2 - itotaldamage;
							}
							if (which == 3)
							{
								if (ismagiclifesteal == 1)
								{
									stolenlife = ehealth3 * 0.02;
									cout << "You steal " << stolenlife << " health from the " << string(enemyname3) << "!\n";
									health = health + stolenlife;
									if (health > maxhealth)
									{
										health = maxhealth;
									}
								}
								ehealth3 = ehealth3 - itotaldamage;
							}
							magic = magic - usemagic3;
							if (which == 1)
							{
								cout << "The " << string(enemyname) << " has ";
								cout << int(ehealth);
							}
							if (which == 2)
							{
								cout << "The " << string(enemyname2) << " has ";
								cout << int(ehealth2);
							}
							if (which == 3)
							{
								cout << "The " << string(enemyname3) << " has ";
								cout << int(ehealth3);
							}
							cout << " health left!\n";
							cout << "You have ";
							cout << int(magic);
							cout << " magic left.";
							turn = 0;
							if (turn == 0)
							{
								if (ehealth <= 0)
								{
									enemydie();

								}
								enemyattack();
							}
						}
						else
						{
							cout << "You dont have that spell! ";
							turn = 0;
							if (turn == 0)
							{
								if (ehealth <= 0)
								{
									enemydie();
								}
								enemyattack();
							}
						}

					}

				}
				else
				{
					cout << "You dont have any magic left! ";
				}
			}

		}



		if (answer == "h")
		{
			if (magic > 0)
			{
				magic = magic - 1;
				health = health + heal;
				if (health > maxhealth)
				{
					health = maxhealth;
				}
				cout << "You heal " << int(heal) << " health!" << " You have " << int(health) << "/" << int(maxhealth) << " health left! " << " You have " << int(magic) << " magic left! ";
				turn = 0;
				enemyattack();
			}
			else
			{
				cout << "You dont have any magic left! ";
			}


		}
	}

}
