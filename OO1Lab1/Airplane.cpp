#include "Airplane.h"

#include <iostream>

Airplane::Airplane(const std::string& name, size_t capacity)
	:
	m_Name(name),
	m_Capacity(capacity)
{
}

void Airplane::SetCaptain(Pilot& captain)
{
	if (captain.GetHoursOfFlight() >= 100u)
	{
		m_Captain = &captain;
		m_Captain->SetInFlight(true);
	}
}

void Airplane::SetCopilot(Pilot& copilot)
{
	m_Copilot = &copilot;
	m_Copilot->SetInFlight(true);
}

void Airplane::Print() const
{
	std::cout << "AVION:" << m_Name << " - " << m_Capacity << std::endl;
}
