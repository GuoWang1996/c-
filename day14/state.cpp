#include "state.h"
Player::Player() :age(0)
{
	this->���ﵱǰ״̬ = �׶�״̬::getIntance();
}

int Player::getAge()
{
	return age;
}

void Player::setAge(int age)
{
	this->age = age;
}

����״̬���� * Player::�õ���ǰ״̬()
{
	return ���ﵱǰ״̬;
}

void Player::���õ�ǰ״̬(����״̬���� * ״̬)
{
	this->���ﵱǰ״̬ = ״̬;
}

�׶�״̬* �׶�״̬::getIntance()
{
	static �׶�״̬ ״̬;
	return &״̬;
}

void �׶�״̬::��������(int age, Player *player)
{
	if (player == NULL)return;
	int curAge=player->getAge();
	int allAge=curAge + age;
	if (allAge<=3)
	{
		player->setAge(allAge);
		cout << "���׶�״̬��:����:" << player->getAge()<<endl;
	} 
	else
	{
	}
}
