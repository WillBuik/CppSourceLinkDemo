#include "lib.h"

__declspec(dllexport) std::string libFunc()
{
	return "Hello from library!";
}
