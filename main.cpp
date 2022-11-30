#pragma once
#include <iostream>
#include "EventSystem/EventHandler.h"
#include "Player.h"
int main() {
	Player Billy;
	Player Tim;
	EventHandler::Get()->BindEvent("SayHello",&Billy);
	EventHandler::Get()->BindEvent("SayBye",&Billy);
	EventHandler::Get()->BindEvent("SayHello",&Tim);
	EventHandler::Get()->CallEvent("SayBye");
}