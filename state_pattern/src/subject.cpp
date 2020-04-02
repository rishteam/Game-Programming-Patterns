#include "subject.h"

Subject::Subject(){

	numObservers = 0;
}

void Subject::addObserver(Observer* observer){

	observers_.push_back(observer);
	printf("%d\n", observers_.size());
}

void Subject::notify(Entity &entity, int event){

	printf("notify::%d\n", getsize());

	for(auto &it : observers_){

		if(it != nullptr){

			printf("in notify\n");
			it->onNotify(entity, event);
		}
		else{

			printf("nullptr\n");
		}
	}
}

void Subject::removeObserver(Observer* observer){
	// TODO: 可以用 std::find() ?
	for(std::list<Observer*>::iterator it = observers_.begin(); it != observers_.end();){

		if(*it == observer){

			observers_.erase(it);
			break;
		}
		else{

			++it;
		}
	}
}

int Subject::getsize(){

	return observers_.size();
}
