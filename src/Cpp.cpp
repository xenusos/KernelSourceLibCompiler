#include <xenus_lazy.h> // load everything from kernel.lib/kernel.xdll
extern "C" int __cdecl _purecall()
{
	panic("null purecall. crashing.");
	return 0;
}

