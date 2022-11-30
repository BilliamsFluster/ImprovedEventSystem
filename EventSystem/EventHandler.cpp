#include "EventHandler.h"
#include<iostream>

 EventHandler* EventHandler::EventInstance = nullptr;

void EventHandler::BindEvent(EventID Event,Listener* Listener)
{
	EventList.insert(make_pair(Event,Listener));
}
void EventHandler::CallEvent(EventID Event)
{
	auto Range = EventList.equal_range(Event);
	for(auto it = Range.first; it != Range.second; it++)
		{
			it->second->ReceiveEvent(Event);
		}
}