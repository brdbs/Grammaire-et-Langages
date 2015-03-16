#ifndef LECTURE_H
#define LECTURE_H
#include <string>
#include "LigneInstruction.h"



class Lecture : public LigneInstruction
{
	public:
		Lecture();
		virtual ~Lecture();
	protected:
	private:
		std::string m_id;
};

#endif // LECTURE_H
