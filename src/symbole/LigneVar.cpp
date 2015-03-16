#include <sstream>
#include <vector>
#include <boost\algorithm\string.hpp>
#include "LigneVar.h"

using namespace std;
LigneVar::LigneVar()
{
	//ctor
}

LigneVar::~LigneVar()
{
	//dtor
}

LigneVar::operator std::string() const
{
	std::stringstream ss;
	ss << "const";
	string prevConst = *m_prevId;
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
	ss << ", " << m_id <<";" << endl;

	return ss.str();

}