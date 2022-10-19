#include "Pilot.h"

Pilot::Pilot(const std::string& name, unsigned hoursOfFlight, bool inFlight)
	:
	m_Name(name),
	m_HoursOfFlight(hoursOfFlight),
	m_InFlight(inFlight)
{
}
