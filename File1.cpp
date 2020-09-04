#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>
#include "Base64.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[]) 
{
	 Base64 monCrypt;
	 monCrypt.InitialiserTable();
	 monCrypt.AfficherTable();
	 cin.get();
}
