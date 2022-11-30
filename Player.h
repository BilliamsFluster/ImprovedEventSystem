#pragma once

#include "EventSystem/Listener.h"



class Player :public Listener
{

void ReceiveEvent(EventID Event);
public:
Player(){};
};