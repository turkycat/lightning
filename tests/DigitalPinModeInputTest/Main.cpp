// Main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "arduino.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return RunArduinoSketch();
}

void setup()
{
	pinMode(0, INPUT);
}

void loop()
{
	int value = digitalRead(0);
	char buff[100];
	_itoa_s(value, buff, 10);
	OutputDebugStringA(buff);
	OutputDebugStringA("\n");
	delay(100);
}


