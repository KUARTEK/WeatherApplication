#pragma once

#include <iostream>
#include "Sensor.h"

class TempratureSensor : public Sensor
{
public:
	TempratureSensor(float minVal, float maxVal, long interval);
	void Value(int& outVal) override;

private:
	float m_minVal = 0;
	float m_maxVal = 0;
	long m_interval = 0;
};