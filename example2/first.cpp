#include<bits/stdc++.h>

using namespace std;

class Monster{

public:
	virtual ~Monster();
};

class Ghost : public Monster{

public:
	Ghost(){

		puts("Ghost");
	}
};

class SunTalk : public Monster{

public:
	SunTalk(){

		puts("SunTalk");
	}

};

class Spawner{

public:

	virtual ~Spawner() = default;
	virtual Monster* spawnMonster() = 0;
};

class GhostSpawner : public Spawner{

public:

	virtual Monster* spawnMonster(){

		return new Ghost();
	}
};

class SunTalkSpawner : public Spawner{

public:

	virtual Monster* spawnMonster(){

		return new SunTalk();
	}

};



int main(){

	GhostSpawner ghostSpawner;
	SunTalkSpawner sunTalkSpawner;



	Monster *ghost = ghostSpawner.spawnMonster();
	Monster *Suntalk = sunTalkSpawner.spawnMonster();


	return 0;
}