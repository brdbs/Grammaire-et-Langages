#include <sstream>
#include <vector>
//#include <boost\algorithm\string.hpp>
#include <boost/algorithm/string.hpp>
#include "LigneConst.h"

using namespace std;
LigneConst::LigneConst()
{
	m_idSymbole = LIGNECONST;
}

LigneConst::~LigneConst()
{
	delete m_prevConst;
}

LigneConst::operator std::string() const
{
	std::stringstream ss; 
	ss << "const";
	if (m_prevConst != NULL)
	{
		string prevConst = *m_prevConst;
		vector<string> tmp;
		boost::split(tmp, prevConst, boost::is_any_of(" \r\n;"));
		tmp.erase(tmp.begin());
		for (unsigned int i = 0; i < tmp.size(); i++)
		{
			if (tmp[i] != "")
			{
				ss << " " << tmp[i];
			}
		}
		ss << ", ";
	}
	ss << m_id << "=" << m_value << ";"<< endl;

	return ss.str();

}