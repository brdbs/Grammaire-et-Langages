#ifndef LECTURE_H
#define LECTURE_H

#include <string>
#include "LigneInstruction.h"



class Lecture : public LigneInstruction
{
	public:
		Lecture();
		virtual ~Lecture();
		virtual operator std::string() const;
		void determinerId(std::string id){m_id = id;}
		std::string const demanderId(){return m_id;}
		virtual void interpreter(Automate *automate);
	protected:
	private:
		std::string m_id;
};

#endif // LECTURE_H
