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
	pinMode(0, OUTPUT);
	digitalWrite(0, LOW);
	OutputDebugStringA("LOW\n");
	delay(10);
}

void loop()
{
	digitalWrite(0, HIGH);
	OutputDebugStringA("HIGH\n");
	delay(500);
	digitalWrite(0, LOW);
	OutputDebugStringA("LOW\n");
	delay(500);
}


