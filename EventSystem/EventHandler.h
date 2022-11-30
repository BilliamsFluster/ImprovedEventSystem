#pragma once
#include <iostream>
#include <map>
#include "Listener.h"


class EventHandler
{
static EventHandler* EventInstance;
EventHandler(){};
~EventHandler(){};
public:


static EventHandler* Get()
{
	if(!EventInstance)
	{
		EventInstance = new EventHandler();
	}
	return EventInstance;
}
std::multimap<EventID,Listener*> EventList;

void BindEvent(EventID Event,Listener* Listener);
void CallEvent(EventID Event);

};