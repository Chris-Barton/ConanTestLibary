#include "TestLibrary.h"
#include "Poco/MD5Engine.h"
#include "Poco/DigestStream.h"

TestClass::TestClass(std::string name)
{
	this->name = name;
}

void TestClass::HelloWorld()
{
    Poco::MD5Engine md5;
    Poco::DigestOutputStream ds(md5);
    ds << name;
    ds.close();
    std::cout << Poco::DigestEngine::digestToHex(md5.digest()) << std::endl;
}