#include <iostream>
#include <fstream>
using namespace std;

class kullanicilar {
public:
	string ad;
	string soyad;
	int yas;


private:
	int tcno;
	int sifre;

public:
	void setName(int tcnumara){
		tcnumara = tcno;
	}
	void setPass(int sifresi){
		sifresi = sifre;
	}
};


int main() {


	kullanicilar kullanici1;
	kullanici1.ad = "Ramazan";
	kullanici1.soyad = "Baydur";
	kullanici1.yas = 22;
	kullanici1.setName (25370250756);
	kullanici1.setPass (264220);

	kullanicilar kullanici2;
	kullanici2.ad = "İlknur";
	kullanici2.soyad = "Baydur";
	kullanici2.yas = 21;
	kullanici2.setName (40735606428);
	kullanici2.setPass (326598);

	kullanicilar kullanici3;
	kullanici3.ad = "Nazmi";
	kullanici3.soyad = "Kezer";
	kullanici3.yas = 23;
	kullanici3.setName (61000014094);
	kullanici3.setPass (264242);

	kullanicilar kullanici4;
	kullanici4.ad = "Mehmet Akif";
	kullanici4.soyad = "Çobanlar";
	kullanici4.yas = 21;
	kullanici4.setName (15465878215);
	kullanici4.setPass (344234);

	void(kullanici1.setName(0));

	cout<<"***********BAYDUR-BANK MOBİL BANKACILIĞA HOŞ GELDİNİZ***********";

	cout<<endl;

	int tcno ;
	int sifre;

	cout<<"T.C. KİMLİK NUMARANIZ :";
	cin>>tcno;

	cout<<"ŞİFRENİZ :"<<endl;
	cin>>sifre;

	if(tcno & sifre == ){
		cout<<"Giriş Başarılı Yönlendiriliyorsunuz..."<<endl;
	}




}
