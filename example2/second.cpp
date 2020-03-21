#include<bits/stdc++.h>

using namespace std;

class Monster{

public:
	virtual ~Monster() = default;
	virtual Monster* clone() = 0;
	virtual void print() = 0;
	virtual void setId(int id) = 0;

};


class SunTalk : public Monster{

public:
	SunTalk(int health, int speed): health_(health), speed_(speed){

		puts("SunTalk");
	}

	virtual Monster* clone(){

		return new SunTalk(health_, speed_);
	}

	virtual void print(){

		printf("id: %d, hp: %d, speed: %d\n", id_, health_, speed_);
	}

	virtual void setId(int id){

		id_ = id;
	}

private:

	int health_;
	int speed_;
	int id_;

};

class Spawner{

public:

	Spawner(Monster* prototype) : prototype_(prototype){
	
	}

	Monster* spawnMonster(){

		return prototype_->clone();
	}

private:

	Monster* prototype_;


};



int main(){

	Monster* sunTalkPrototype = new SunTalk(100, 20);
	Spawner* sunTalkSpawner = new Spawner(sunTalkPrototype);

	vector<Monster*> v;

	for(int i = 0 ; i < 100 ; i++){

		v.push_back(sunTalkSpawner->spawnMonster());
		v[i]->setId(i+1);
	}

	for(int i = 0 ; i < v.size() ; i++){

		if(i == 87)
			v[i]->setId(878788787);

		v[i]->print();
	}

	return 0;
}