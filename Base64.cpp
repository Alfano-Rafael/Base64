//---------------------------------------------------------------------------

#pragma hdrstop

#include "Base64.h"

#include <stdio.h>
#include <iostream>
using namespace std;

Base64::Base64(){
}

void Base64::InitialiserTable(){
	int j=0;
    //initialiser table
		//ABC...
		for(int i=65; i<91; i++){
			tableBase64[j]= i;
			//cout<<i<<endl;
			j++ ;
		}
		//abc...
		for(int i=97; i<123; i++){
			tableBase64[j]= i;
			//cout<<i<<endl;
			j++ ;
		}
		//012...
		for(int i=48; i<58; i++){
			tableBase64[j]= i;
			//cout<<i<<endl;
			j++ ;
		}

		tableBase64[j]={'+'};
		j++;
		tableBase64[j]={'/'};
}


void Base64::AfficherTable(){
   //OUTPUT

	for (int k=0; k < 64; k++) {
		cout<<k<<"    ";
		cout<<(char) tableBase64[k]<<"    ";

		AfficherBinaire(k, 6);
//		  for(int i=0;i<6;i++){
//		   cout<<((k>>(6-i-1))&0x01);
//
//		}
		cout<<endl;

	}

}


void Base64::AfficherBinaire(int entier, int nbBits) {
  for(int i=0;i<nbBits;i++) cout<<((entier>>(nbBits-i-1))&0x01);
}



//---------------------------------------------------------------------------
#pragma package(smart_init)

