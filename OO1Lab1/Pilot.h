#ifndef _pilot_h_
#define _pilot_h_

#include <string>

class Pilot
{
public:
	Pilot(const std::string& name, unsigned hoursOfFlight, bool inFlight = false);
	Pilot(const Pilot&) = delete;

	inline std::string GetName() const { return m_Name; }
	inline unsigned GetHoursOfFlight() const { return m_HoursOfFlight; }
	inline bool GetInFlight() const { return m_InFlight; }

	void AddFlightHours(int amount) { m_HoursOfFlight += amount; }
	void SetInFlight(bool value) { m_InFlight = value; }

private:
	std::string m_Name;
	unsigned m_HoursOfFlight;
	bool m_InFlight;
};

#endif // !_pilot_h_