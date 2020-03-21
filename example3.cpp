#include<bits/stdc++.h>

using namespace std;

class Hero;

class State{

public:
	static TestState testState;
	static AaState aaState;

	virtual ~State() = default;
	virtual void handleInput(Hero& hero, int input) = 0;
	virtual void update(Hero& hero) = 0;

};

class TestState : public State{

public:

	TestState() : chargeTime_(8){

	}

	virtual void handleInput(Hero& hero, int input){

		puts("in");
		if(input == 2){

			puts("input 2");
		}
	}

	virtual void update(Hero& hero){

		chargeTime_++;
		if(chargeTime_ > 100){

			puts("SunTalk");
		}
	}
	
private:
	int chargeTime_;

};

class AaState : public State{

public:
	AaState() = default;

	virtual void handleInput(Hero& hero, int input){

		if(input == 1){

			puts("input 1");
		}
	}

	virtual void update(Hero& hero){

		puts("real yami");
	}

};


class Hero{

public:


	virtual void handleInput(int input){

		state_->handleInput(*this, input);
	}

	virtual void update(){

		state_->update(*this);
	}

	void processInput(int input){

		if(input == 2) state_ = &State::testState;
		else if(input == 1) state_ = &State::aaState;
		else state_ = &State::testState;
	}

private:

	State* state_ ;
};

int main(){

	int a;

	Hero suntalk;

	

	while(1){

		cin >> a;
		// cout << a << endl;
		suntalk.processInput(a);
		suntalk.handleInput(a);//
		suntalk.update();//
	}

	

	return 0;
}





