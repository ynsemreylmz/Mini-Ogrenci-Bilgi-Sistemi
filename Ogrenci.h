#pragma once
#include <iostream>

using namespace std;

class Ogrenci {
private:
	int id;
	string ad;
	int sinavNot;
public:

	Ogrenci(int id, string ad, int sinavNot);


	//Set metotlar�
	void SetID(int _id);
	void SetAd(string _ad);
	void SetNot(int _sinavNot);

	//Get metotlar�
	int GetId();
	string GetAd();
	int GetSinavNot();

	//Di�er metotlar
	void BilgiGetir();


};