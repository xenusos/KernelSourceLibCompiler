/*
    Purpose: 
    Author: Reece W. 
    License: All Rights Reserved J. Reece Wilson (See License.txt)
*/  
#include <xenus_lazy.h> 

extern "C" int __cdecl _purecall()
{
	panic("null purecall. crashing.");
	return 0;
}