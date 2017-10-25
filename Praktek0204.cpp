#include <iostream>

using namespace std;

int main(){
	double Luasrumah = 42;
	double lantaipkt = 193*1215;
	double luas1box = lantaipkt*8/1000000;
	double jumlahboxp, biayap, biayapsg, totalb;
	
	cout <<"Luas Rumah		:"<<Luasrumah<<" m2"<<endl;
	cout <<"Luas 1 Box Parket	:"<<luas1box<<" m2"<<endl;
	
	jumlahboxp = Luasrumah/luas1box;
	cout <<"Jumlah Box Parket	:"<<jumlahboxp<<endl;
	
	biayap = jumlahboxp*500;
	cout <<"Biaya Parket (RP)	:"<<biayap<<endl;
	
	biayapsg = Luasrumah*20;
	cout <<"Biaya Pasang (Rp)	:"<<biayapsg<<endl;
	
	totalb = biayap+biayapsg;
	cout <<"Total Biaya (Rp)	:"<<totalb<<endl;
	
}
