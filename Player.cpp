#include "Player.h"

void Player::ReceiveEvent(EventID Event)
{
	if(Event == "SayHello")
	{
		std::cout<<"Hello it works"<< std::endl;
	}
	if(Event == "SayBye")
	{
		std::cout<<"bye it works"<<std::endl;
	}
}