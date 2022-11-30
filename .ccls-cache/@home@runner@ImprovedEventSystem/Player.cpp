#include "Player.h"

void Player::ReceiveEvent(EventID Event)
{
	if(Event == "Hi")
	{
		std::cout<<"Hello it works";
	}
}