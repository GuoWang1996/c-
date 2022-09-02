#include "state.h"
Player::Player() :age(0)
{
	this->ÈËÎïµ±Ç°×´Ì¬ = Ó×¶ù×´Ì¬::getIntance();
}

int Player::getAge()
{
	return age;
}

void Player::setAge(int age)
{
	this->age = age;
}

ÈËÎï×´Ì¬»ùÀà * Player::µÃµ½µ±Ç°×´Ì¬()
{
	return ÈËÎïµ±Ç°×´Ì¬;
}

void Player::ÉèÖÃµ±Ç°×´Ì¬(ÈËÎï×´Ì¬»ùÀà * ×´Ì¬)
{
	this->ÈËÎïµ±Ç°×´Ì¬ = ×´Ì¬;
}

Ó×¶ù×´Ì¬* Ó×¶ù×´Ì¬::getIntance()
{
	static Ó×¶ù×´Ì¬ ×´Ì¬;
	return &×´Ì¬;
}

void Ó×¶ù×´Ì¬::Ôö¼ÓÄêÁä(int age, Player *player)
{
	if (player == NULL)return;
	int curAge=player->getAge();
	int allAge=curAge + age;
	if (allAge<=3)
	{
		player->setAge(allAge);
		cout << "¡¾Ó×¶ù×´Ì¬¡¿:ÄêÁä:" << player->getAge()<<endl;
	} 
	else
	{
	}
}
