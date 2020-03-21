#include <bits/stdc++.h>

using namespace std;

class Monster
{

public:
	virtual ~Monster() = default;
	virtual Monster *clone() = 0;
	virtual void print() = 0;
};

class SunTalk : public Monster
{

public:
	SunTalk(int health, int speed) : health_(health), speed_(speed)
	{

		puts("SunTalk");
	}

	virtual Monster *clone()
	{

		return new SunTalk(health_, speed_);
	}

	virtual void print()
	{

		printf("hp: %d, speed: %d\n", health_, speed_);
	}

private:
	int health_;
	int speed_;
};

class Spawner
{

public:
	virtual ~Spawner() = default;

	virtual Monster *spawnMonster(int health, int speed) = 0;
};

template <typename T>
class SpawnFor : public Spawner
{

	virtual Monster *spawnMonster(int health, int speed)
	{

		return new T(health, speed);
	}
};

int main()
{

	Spawner *sunTalkSpawner = new SpawnFor<SunTalk>();
	Monster *sunTalk = sunTalkSpawner->spawnMonster(100, 20);

	sunTalk->print();

	return 0;
}