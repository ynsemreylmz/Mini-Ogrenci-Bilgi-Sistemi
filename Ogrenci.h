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


	//Set metotlarý
	void SetID(int _id);
	void SetAd(string _ad);
	void SetNot(int _sinavNot);

	//Get metotlarý
	int GetId();
	string GetAd();
	int GetSinavNot();

	//Diðer metotlar
	void BilgiGetir();


};