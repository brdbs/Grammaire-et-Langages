#include <sstream>
#include <vector>
//#include <boost\algorithm\string.hpp>
#include <boost/algorithm/string.hpp>
#include "LigneVar.h"

using namespace std;
LigneVar::LigneVar()
{
	m_idSymbole = LIGNEVAR;
}

LigneVar::~LigneVar()
{
	delete m_prevId;
}

LigneVar::operator std::string() const
{
	std::stringstream ss;
	ss << "var";
	string prevVar;
	if (m_prevId != NULL)
	{
		prevVar = (string)*m_prevId;
		vector<string> tmp;
		boost::split(tmp, prevVar, boost::is_any_of(" \r\n;"));
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
	ss << m_id <<";" << endl;

	return ss.str();

}