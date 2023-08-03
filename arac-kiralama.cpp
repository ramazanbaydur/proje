//============================================================================
// Name        : uygulama.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//araba sınıfı
class araba {
public:
	string marka;
	string model;
	string km;
	int yil;
	int fiyat;

};
class kullanici{
public:
	string adSoyad;
	int yas;
	string ehliyetTarih;
};


int main() {
	int secim;

	//sınıf ogeleri
	kullanici kullanici1;

	araba araba1;
	araba1.marka = "Wolkswagen Polo";
	araba1.model = "Polo 1.6 motor dizel";
	araba1.yil = 2016;
	araba1.km = "500 km sınırı vardır.";
	araba1.fiyat = 250;

	araba araba2;
	araba2.marka = "Opel Corsa";
	araba2.model = "Corsa 1.3 motor dizel";
	araba2.yil = 2018;
	araba2.km = "400 km sınırı vardır.";
	araba2.fiyat = 230;

	araba araba3;
	araba3.marka = "Renault Fluance";
	araba3.model = "Fluance 1.6 motor benzin";
	araba3.yil = 2020;
	araba3.km = "500 km sınırı vardır.";
	araba3.fiyat = 270;

	araba araba4;
	araba4.marka = "Skoda Octavia";
	araba4.model = "Octavia 1.6 motor dizel";
	araba4.yil = 2020;
	araba4.km = "500 km sınırı vardır.";
	araba4.fiyat = 300;

	//sınıf ogeleri bitis

	cout<<"***BAYDUR OTO KİRALAMAYA HOŞ GELDİNİZ***"<<endl;

	cout<<"------------------------------"<<endl;

	cout<<"Adınız:";
	cin>>kullanici1.adSoyad;
	cout<<"Yaşınız:";
	cin>>kullanici1.yas;
	cout<<"Ehliyeti Aldığınız Tarih:";
	cin>>kullanici1.ehliyetTarih;

	if (kullanici1.yas>=21) {
		cout<<"Araç Kiralama Koşullarına Uygunsunuz."<<endl;
	}
	else{
		cout<<"Araç Kiralama Koşullarına Uygun Değilsiniz."<<endl;
		//system("pause");
		return EXIT_SUCCESS;
	}

	//--------------------------arac secim----------------------------------------
	cout<<"Lütfen Aracınızı Seçiniz:"<<endl;
	cout<<"1. "<<araba1.marka<<endl;
	cout<<"2. "<<araba2.marka<<endl;
	cout<<"3. "<<araba3.marka<<endl;
	cout<<"4. "<<araba4.marka<<endl;
	cout<<"Seçiminiz:";
	cin>>secim;
	//--------------------------arac secim bitis----------------------------------------
	cout<<"------------------------------"<<endl;

	//----------------------aracın secim özellikleri---------------------------------------
	if (secim==1) {
		cout<<"Seçtiğiniz Aracın Özellikleri: \n"<<araba1.marka<<"\n"<<araba1.model<<"\n"<<araba1.yil<<" Model \n"<<araba1.km<<"\n"<<araba1.fiyat<<" TL"<<endl;

	}
	else if(secim==2){
		cout<<"Seçtiğiniz Aracın Özellikleri: \n"<<araba2.marka<<"\n"<<araba2.model<<"\n"<<araba2.yil<<" Model \n"<<araba2.km<<"\n"<<araba2.fiyat<<" TL"<<endl;
	}
	else if(secim==3){
		cout<<"Seçtiğiniz Aracın Özellikleri: \n"<<araba3.marka<<"\n"<<araba3.model<<"\n"<<araba3.yil<<" Model \n"<<araba3.km<<"\n"<<araba3.fiyat<<" TL"<<endl;
	}
	else if(secim==4) {
		cout<<"Seçtiğiniz Aracın Özellikleri: \n"<<araba4.marka<<"\n"<<araba4.model<<"\n"<<araba4.yil<<" Model \n"<<araba4.km<<"\n"<<araba4.fiyat<<" TL"<<endl;
	}
	else {
		cout<<"Yanlış seçim yaptınız!!!"<<endl;
	}
	//----------------------aracın secim özellikleri bitis---------------------------------------

	//--------------------------rezervasyon teyidi----------------------------------
	string rezervasyon;
	string tarih;
	string onay;
	while(true){
		cout<<"Rezervasyon oluşturmak ister misiniz?:";
		cin>>rezervasyon;
		if(rezervasyon=="evet"){
			cout<<"Rezervasyon Tarihiniz:";
			cin>>tarih;
			break;
		}
		else if(rezervasyon == "hayır") {
			cout<<"***İşleminiz İptal edilmiştir. Sağlıklı Günler Dileriz.***"<<endl;
			break;
		}
		else{
			break;
		}
	}
	//--------------------------rezervasyon teyidi bitis----------------------------------

	cout<<endl;

	cout<<"Rezervasyon Bilgileriniz: "<<endl;
	cout<<kullanici1.adSoyad<<"\n"<<kullanici1.yas<<"\n"<<kullanici1.ehliyetTarih<<endl;
	if (secim==1) {
		cout<<"\n"<<araba1.marka<<"\n"<<araba1.model<<"\n"<<araba1.yil<<" Model \n"<<araba1.km<<"\n"<<araba1.fiyat<<" TL"<<"\n Tarih:"<<tarih<<endl;
	}
	else if(secim==2){
		cout<<"\n"<<araba2.marka<<"\n"<<araba2.model<<"\n"<<araba2.yil<<" Model \n"<<araba2.km<<"\n"<<araba2.fiyat<<" TL"<<"\n Tarih:"<<tarih<<endl;
	}
	else if(secim==3){
		cout<<"\n"<<araba3.marka<<"\n"<<araba3.model<<"\n"<<araba3.yil<<" Model \n"<<araba3.km<<"\n"<<araba3.fiyat<<" TL"<<"\n Tarih:"<<tarih<<endl;
	}
	else if(secim==4){
		cout<<"\n"<<araba4.marka<<"\n"<<araba4.model<<"\n"<<araba4.yil<<" Model \n"<<araba4.km<<"\n"<<araba4.fiyat<<" TL"<<"\n Tarih:"<<tarih<<endl;
	}
	//------------------------------rezervasyon onaylama------------------------------------
	while(true){

		cout<<"İŞLEMİ ONAYLIYOR MUSUNUZ?:";
		cin>>onay;
		if (onay=="evet") {
			cout<<"Rezervasyonunuz Başarı İle Oluşturuldu."<<endl;
			break;
		}
		else if(onay=="hayır"){
			cout<<"***İşleminiz İptal edilmiştir. Sağlıklı Günler Dileriz.***"<<endl;
			break;
		}
		break;
	}
	//------------------------------rezervasyon onaylama bitis------------------------------------

	return 0;
}
