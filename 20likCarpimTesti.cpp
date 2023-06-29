#include <iostream>
#include <clocale>
#include <ctime>
#include <iomanip>
#include <chrono>
#include <thread>
using namespace std;

/*
20lik Çarpım Testi
-	1-10 arasındaki sayıların çarpım tablosunun çoğu işlemde yetersiz geldiğini fark ettiğim için tabloyu 20'ye kadar uzattım.
-	Yeni çarpım tablosu 2-20 arası sayıların birbiriyle çarpımını içeriyor ve yarışma şeklinde.
*/


int main()
{
	setlocale(LC_ALL, "Turkish");
	int kacSoru = 0,carpan1 = 0, carpan2 = 0, sonuc=0, cevap=0, dogruSay=0, yanlisSay=0;
	float osymPuan = 0;
	srand(time(0));
	
	
	cout << " Lütfen çözmek istediğiniz çarpma işlemi sayısını yazınız: ";
	cin >> kacSoru;
	cout << endl;
	
	for (int i = 0; i < kacSoru; i++) {
	carpan1 = rand() % 10 + 11;
	carpan2 = rand() % 19 + 2;
	sonuc = carpan1 * carpan2;


	cout << " Soru " << kacSoru - i << ") " << carpan1 << " x " << carpan2 << " = ";
	cin >> cevap;

	
	if (cevap == sonuc) { 
		dogruSay++;
		cout << " " << char(30) << " " << dogruSay << " DOĞRU / " << yanlisSay << " YANLIŞ\n -------------------------------------" << endl;
	}
	else {
		yanlisSay++;
		cout << " " << char(31) << " " << dogruSay << " DOĞRU / " << yanlisSay << " YANLIŞ  |  "<< sonuc<< " olmalıydı." << "\n -------------------------------------" << endl;
	}
	}
	
	cout << endl << " " << dogruSay << " doğru, " << yanlisSay << " yanlış cevap ile % " << setprecision(2) << fixed << (float)dogruSay * 100 / kacSoru << " başarı derecesine;" << endl;
	osymPuan = dogruSay-yanlisSay * 0.25;
	cout << " " << "ÖSYM'nin 4 yanlış 1 doğruyu götürür sistemine göre ise " << osymPuan << " / " << kacSoru << " puan aldınız. " << endl;

	return 0;
}
