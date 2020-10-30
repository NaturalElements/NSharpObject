#ifndef _N_SHARP_OBJECT_H_
#define _N_SHARP_OBJECT_H_
#include <string>
#include <list>
#include <memory>
#include "NSharpExport.h"

class NNative;

class NSharpExport NSharpObject
{
public:
	NSharpObject();
	~NSharpObject();

public:
	int ToInt();
	unsigned int ToUInt();
	__int64 ToInt64();
	unsigned __int64 ToUInt64();
	short ToShort();
	unsigned short ToUShort();
	float ToFloat();
	double ToDouble();
	bool IsVoid();

	NSharpObject CallMethod(const std::string& methodName);
	NSharpObject CallMethod(const std::string& methodName, const std::list<NSharpObject>& args);

private:
	void Check();

public:
	std::shared_ptr<NNative> m_native;
};

#endif