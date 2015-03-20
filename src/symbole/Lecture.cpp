#include <sstream>

#include "Lecture.h"

Lecture::Lecture()
{
	m_idSymbole = LECTURE;
}

Lecture::~Lecture()
{
	//dtor
}

Lecture::operator std::string() const
{
	std::stringstream ss; 
	ss << "lecture " << m_id << ";";
	return ss.str();
}