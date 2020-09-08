//---------------------------------------------------------------------------

#ifndef Base64H
#define Base64H

class Base64{
	public:
		Base64();
		void AfficherTable();
		void AfficherBinaire(int entier, int nbBits);
		void Code3OctetsBase64(unsigned char* donnee, char*code);
		void InitialiserTable();
		int IndiceCaractereBase64(char c);
		void Decode4caracteresBase64(unsigned char* donnee, char* code);
		void CodeNoctetsBase64(unsigned char* donnee, int nbOctetsDonnees, char* code);

	private:
		int tableBase64[65];
};
//---------------------------------------------------------------------------
#endif

