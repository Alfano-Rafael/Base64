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
	 int nbOctetDonnee=4;
	 unsigned char donnee[nbOctetDonnee];
	 char code[5] = {'4','7','E','7', '8};
	 Base64 monCrypt;
	 monCrypt.InitialiserTable();
	 monCrypt.CodeNoctetsBase64(donnee, nbOctetDonnee, code) ;
	 cin.get();
}
