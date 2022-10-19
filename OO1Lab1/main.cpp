#include <iostream>

#include "AirplaneFleet.h"

int main()
{
	AirplaneFleet fleet("Test Fleet");
	Pilot pera("Pera", 50);
	Pilot mika("Mika", 200, true);
	Pilot zika("Zika", 100, false);

	Airplane avion1("Avion1", 5);
	avion1.SetCaptain(mika);
	avion1.SetCopilot(pera);

	Airplane avion2("Avion2", 70);
	avion1.SetCaptain(zika);
	avion1.SetCopilot(pera);

	Airplane avion3("Avion3", 15);
	avion1.SetCaptain(pera);
	avion1.SetCopilot(mika);

	Airplane avion4("Avion4", 50);
	avion1.SetCaptain(mika);
	avion1.SetCopilot(zika);

	fleet.AddAirplane(avion1);
	fleet.AddAirplane(avion2);
	fleet.AddAirplane(avion3);
	fleet.AddAirplane(avion4);

	fleet.Print();
	std::cout << std::endl;
	fleet.GetAirplaneWithBiggestCapacity().Print();
	std::cout << std::endl << fleet.GetCapacity();

	return 0;
}