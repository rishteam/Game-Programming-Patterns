#include<allCommand.h>

void FrontCommand::execute(){

	walkFront();
}

void FrontCommand::walkFront(){

	printf("walk front\n");
}

void BackCommand::execute(){

	walkBack();
}

void BackCommand::walkBack(){

	printf("walk back\n");
}

void LeftCommand::execute(){

	walkLeft();
}

void LeftCommand::walkLeft(){

	printf("walk left\n");
}


void RightCommand::execute(){

	walkRight();
}

void RightCommand::walkRight(){

	printf("walk right\n");
}


