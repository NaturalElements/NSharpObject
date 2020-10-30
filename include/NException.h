
#ifndef _N_EXCEPTION_H_
#define _N_EXCEPTION_H_
#include <string>
#include "NSharpExport.h"

class NSharpExport NException
{
public:
	NException(const std::string& error);
	~NException();

	std::string m_error;
};

#endif