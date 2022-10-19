#include <iostream>

#include "AirplaneFleet.h"

AirplaneFleet::AirplaneFleet(const std::string& name)
	:
	m_Name(name)
{
}

size_t AirplaneFleet::GetCapacity() const
{
	size_t result = 0;
	for (auto it : airplanes)
	{
		result += it->GetCapacity();
	}

	return result;
}

Airplane& AirplaneFleet::GetAirplaneWithBiggestCapacity() const
{
	Airplane* result = nullptr;
	for (auto it : airplanes)
	{
		if (!result || result->GetCapacity() < it->GetCapacity())
		{
			result = it;
		}
	}

	return *result;
}

void AirplaneFleet::Print() const
{
	std::cout << m_Name << std::endl;
	for (auto it : airplanes)
	{
		it->Print();
	}
}
