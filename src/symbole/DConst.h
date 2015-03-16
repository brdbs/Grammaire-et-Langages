#ifndef DCONST_H
#define DCONST_H

#include <string>

class DConst
{
	public:
		DConst();
		virtual ~DConst();
	protected:
	private:
		std::string m_id;
		int m_value;
};

#endif // DCONST_H
