#include <iostream>
#include "Ogrenci.h"
#include <list>
#include <string>
#include <clocale>
using namespace std;

void MenuGoster() {
	cout << endl;
	cout << "* * * * * * * * * * * * * * * \n";
	cout << "*          MENU             * \n";
	cout << "* * * * * * * * * * * * * * * \n";
	cout << "*                           * \n";
	cout << "*  1. Yeni Kayıt Ekle       * \n";
	cout << "*  2. Tüm Listeyi Göster    * \n";
	cout << "*  3. ID'ye göre Kayıt Sil  * \n";
	cout << "*  4. Ogrenci Ara           * \n";
	cout << "*  5. Çıkış Yap             * \n";
	cout << "*                           * \n";
	cout << "* * * * * * * * * * * * * * * \n";
}




void OgrenciEkle(list<Ogrenci>* lst, int &id ) {
	setlocale(LC_ALL, "Turkish");
	id = id + 1;
	int sinavNot;
	string ad;
	char isim[100] = { 0 };
	cout << endl;
	getline(cin, ad);
	cout << "Ogrenci Ad: ";
	cin.getline(isim, 100);
	cout << endl;
	cout << "Ogrenci Sınav Not: ";
	cin >> sinavNot;
	cout << endl;
	ad = isim;
	Ogrenci ogr(id, ad, sinavNot);

	lst->push_back(ogr);
}
void ListeyiGoster(list<Ogrenci>* lst) {
	list<Ogrenci>::iterator it;
	cout << endl;
	cout << "------- OGRENCI LISTESI ------- \n ";
	
	for ( it = lst->begin(); it != lst->end(); it++)
	{
		it->BilgiGetir();
		
	}
	cout << endl;
}
void KayıtSil(list<Ogrenci>* lst) {
	int id;
	cout << "Silinecek öğrencinin ID'sini giriniz: ";
	cin >> id;
	list<Ogrenci>::iterator it;

	for (it = lst->begin(); it != lst->end(); it++)
	{
		if (it->GetId() == id) {
			break;
		}
	}

	if (it==lst->end()) 
		cout << "Girdiğiniz ID'ye ait bir öğrenci bulunamadı. \n";
	else
		lst->erase(it);

}

void OgrenciAra(list<Ogrenci>* lst) {
	int id;
	cout << "Aramak istediğiniz öğrenci ID'sini giriniz: ";
	cin >>id;
	list<Ogrenci>::iterator it;
	for ( it = lst->begin();it!=lst->end();it++)
	{
		if (it->GetId() == id)
			break;
	}
	if (it == lst->end())
		cout << "Aradığınız öğrenci bulunamadı.";
	else{ 
		cout << "------------------------------- \n "; 
		it->BilgiGetir();
	}
		
}
int main() { 
	
	setlocale(LC_ALL, "Turkish");

	list<Ogrenci>* ogrenciList =new list<Ogrenci>;

	
	
	int id = 0;
	int secim = 0;

	


	do
	{
		MenuGoster();
		cout << "Seçiminizi giriniz: ";
		cin >> secim;
		switch (secim)
		{
		case(1):
			OgrenciEkle(ogrenciList,id);
			cout << endl;
			break;
		case(2):
			ListeyiGoster(ogrenciList);
			cout << endl;
			break;
		case(3):
			KayıtSil(ogrenciList);
			cout << endl;
			break;
		case(4):
			OgrenciAra(ogrenciList);
			cout << endl;
			break;
		case(5):
			break;
		default:
			cout << endl;
			cout << "Hatalı seçim yaptınız! Tekrar Deneyiniz:\n";
			break;
		}



	} while (secim !=5);

	return 0;
}
