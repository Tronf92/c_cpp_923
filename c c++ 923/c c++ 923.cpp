#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Carte{
	public:
		char titlu[256];
		char autor[64];
		float pret;
		Carte(char *btitlu, char *bautor, char *beditura, double bpret);
		void arata_titlu(){
			cout << titlu << endl;
		}
		float da_pret(){
			return(pret);
		}
		void arata_carte(){
			arata_titlu();
			arata_editura();
		}
		void atrib_editura(char *nume) {
			strcpy(editura, nume);
		}

	private:
		char editura[256];
		void arata_editura(){
			cout << editura << endl;
		}
};

Carte::Carte(char *btitlu, char *bautor, char *beditura, double bpret){
	strcpy(titlu, btitlu);
	strcpy(autor, bautor);
	strcpy(editura , beditura);
	pret = bpret;
}

void main(){
	Carte capitole("Jamsa's C/C++","Jamsa si Klander" , "Jamsa Press",49.95);
	Carte jurnal("All my secrets...", "Kris Jamsa","Fara",9.95);
	capitole.arata_carte();
	jurnal.arata_carte();
	system("pause");

}

