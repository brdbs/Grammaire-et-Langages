#include <sstream>

#include "Lecture.h"

Lecture::Lecture()
{
	//ctor
}

Lecture::~Lecture()
{
	//dtor
}

Lecture::operator std::string() const
{
	std::stringstream ss; 
	ss << "lecture " << m_id << ";"<< std::endl;
	return ss.str();
}