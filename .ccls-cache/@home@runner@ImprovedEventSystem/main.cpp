#pragma once
#include <iostream>
#include "EventSystem/EventHandler.h"
#include "Player.h"
int main() {
	Player Billy;
	EventHandler::Get()->BindEvent("Hi",&Billy);
	EventHandler::Get()->CallEvent("Hi");
}