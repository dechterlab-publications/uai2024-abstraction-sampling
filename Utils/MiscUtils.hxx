/*
	This module contains misc utils declarations.

	Kalev Kask, March 2002.
*/

#ifndef MISCUTILS_HXX_INCLUDED
#define MISCUTILS_HXX_INCLUDED

#include <climits>
#include <list>
#include <string>
#include <vector>
#include <sstream>

typedef int64_t INT64 ;

namespace ARE {

int64_t GetTimeInMilliseconds(void) ;

int ExtractVarValuePairs(/* IN */ char *BUF, int L, /* OUT */ std::list<std::pair<std::string,std::string>> & List) ;
int ExtractParameterValue(/* IN */ std::string & Paramater, std::list<std::pair<std::string,std::string>> AssignmentList, /* OUT */ std::string & Value) ;

int ExtractTokens(const std::string & S, std::list<std::string> & Tokens, int bIncludeEmptyTokens, char wcSeparator) ;

template <typename T>
std::string print(const std::vector<T>& v, std::string sep=", ", std::string start = "[", std::string end = "]"){
	std::stringstream ss;
	ss << start << v[0];
	for(size_t i = 1; i < v.size(); ++i)
	{
		ss << sep;
		ss << v[i];
	}
	ss << end;
	std::string s = ss.str();

	return ss.str();
}
}

#endif // SORT_HXX_INCLUDED
