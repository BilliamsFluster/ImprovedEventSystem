#pragma once
#include <iostream>

#define EventID std::string


class Listener
{
public:
virtual void ReceiveEvent(EventID Event) = 0;
};