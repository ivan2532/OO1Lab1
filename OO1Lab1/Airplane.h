#ifndef _airplane_h_
#define _airplane_h_

#include <string>

#include "Pilot.h"

class Airplane
{
public:
	Airplane(const std::string& name, size_t capacity);
	Airplane(const Airplane&) = delete;

	inline std::string GetName() const { return m_Name; }
	inline size_t GetCapacity() const { return m_Capacity; }

	Pilot* GetCaptain() const { return m_Captain; }
	void SetCaptain(Pilot& captain);

	Pilot* GetCopilot() const { return m_Copilot; }
	void SetCopilot(Pilot& copilot);

	void Print() const;

private:
	std::string m_Name;
	size_t m_Capacity;
	Pilot* m_Captain = nullptr;
	Pilot* m_Copilot = nullptr;
};

#endif // !_airplane_h_
