#ifndef _airplane_fleet__h_
#define _airplane_fleet__h_

#include <string>
#include <vector>

#include "Airplane.h"

class AirplaneFleet
{
public:
	AirplaneFleet(const std::string& name);

	inline size_t GetAirplaneCount() const { return airplanes.size(); }
	size_t GetCapacity() const;
	Airplane& GetAirplaneWithBiggestCapacity() const;

	void AddAirplane(Airplane& airplane) { airplanes.push_back(&airplane); }

	void Print() const;
private:
	std::string m_Name;
	std::vector<Airplane*> airplanes;
};

#endif // !_airplane_fleet__h_
