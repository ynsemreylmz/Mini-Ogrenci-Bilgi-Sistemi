#include "Ogrenci.h"

using namespace std;

Ogrenci::Ogrenci(int id, string ad, int sinavNot) {
	this->id = id;
	this->ad = ad;
	this->sinavNot = sinavNot;
}


void Ogrenci::SetID(int _id) {

	id = _id;
}
void Ogrenci::SetAd(string _ad) {

	ad = _ad;
}

void Ogrenci::SetNot(int _sinavNot) {

	sinavNot = _sinavNot;
}


int Ogrenci::GetId() {

	return id;
}
string Ogrenci::GetAd() {

	return ad;
}

int Ogrenci::GetSinavNot() {

	return sinavNot;
}

void Ogrenci::BilgiGetir() {
	
	cout << "Öðrenci id: " << id << endl << "Öðrenci ad: " << ad << endl << "Öðrenci Sýnav Not: " << sinavNot<<endl;
	cout << "------------------------------- \n";
}
