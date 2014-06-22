#include <string>

namespace DummyLibrary
{

class Dummy
{
	public:			
	__declspec(dllexport) std::string GetVersion() const;
};	

}