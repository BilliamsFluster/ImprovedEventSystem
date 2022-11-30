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
std::multimap<EventID,Listener*> EventList;
static EventHandler* Get()
{
	if(!EventInstance)
	{
		EventInstance = new EventHandler();
	}
	return EventInstance;
}
void BindEvent(EventID Event,Listener* Listener);
void CallEvent(EventID Event);

};