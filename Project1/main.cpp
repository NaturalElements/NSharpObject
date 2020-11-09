
#include "NSharpObject.h"

// 测试函数
void main()
{
	// 测试直接调用
	TLib::A^ a = gcnew TLib::A("sdf");
	a->Print();

	// 挂载对象
	NSharpObject obj;
	NSharpFuncs::Assemble(obj, a);

	// 获取挂载对象
	auto tta = NSharpFuncs::GetAssemble(obj);
	auto sa =NSharpFuncs::GetAssemble<TLib::A^>(obj);
	auto sa2 = NSharpFuncs::GetAssemble<System::String^>(obj);

	// 生成NSharpObject 并获取
	NSharpObject objfalse = NSharpFuncs::MakObject(false);
	auto fas = NSharpFuncs::GetAssemble<System::Object^>(objfalse);

	// 调用类对象成员函数
	obj.CallMethod("Print");

	// 调用类对象成员函数，并传入参数，获得结果
	NSharpObject ret = obj.CallMethod("Add", { NSharpFuncs::MakObject(43),NSharpFuncs::MakObject(34),NSharpFuncs::MakObject(true) });
	System::Object^ rrt = NSharpFuncs::GetAssemble<System::Object^>(ret);

	// 注意类名称，如果是非系统其他程序集需要加上程序集名称，如果是本程序集火mscore不加也可以的。
	// 调用静态成员函数
	NSharpObject sap = NSharpObject::CallStaticMethod("TLib.A, TLib, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null", "APrint");

	// 调用静态成员函数并传入参数获得结果
	NSharpObject saad = NSharpObject::CallStaticMethod("TLib.A, TLib, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null", "AAD", { NSharpFuncs::MakObject(3),NSharpFuncs::MakObject(4) });
	auto insaad = saad.ToInt();


	System::Console::ReadLine();
}