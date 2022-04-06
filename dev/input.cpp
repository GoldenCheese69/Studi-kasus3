#include <iostream>
#include <string>
#include <fstream>
using namespace std;

long tot(long h, long j){ 
	  long b = h * j;
	  return b;
}

class ayam {
	friend ostream& operator << (ostream&, const ayam&);
	friend istream& operator >> (istream&, ayam&);
	
public:
void rumahmakan();
int ongkir;
int biaya;
void warung(){
if (jarak == 'a'||'A')
  {
  	ongkir = 15000;
	if (biaya >= 150000)
	{
		ongkir -= 8000;
	}
	else if (biaya >= 50000)
	{
		ongkir -= 5000;
	}
	else if (biaya>=25000)
	{
		ongkir -= 3000;
	}
  }
  else if (jarak == 'b'||'B')
  {
  	ongkir = 25000;
  	if (biaya >= 25000)
	{
		ongkir -= 3000;
	}
	else if (biaya >= 50000)
	{
		ongkir -= 5000;
	}
	else if (biaya >= 150000)
	{
		ongkir -= 8000;
	}
  }
}
private:
int i,bayar;
char pilih, jarak;
string Menu [5] = {"A. Ayam Geprek		Rp.21000", "B. Ayam Goreng		Rp.17000", "C. Udang Goreng		Rp.19000", "D. Cumi Goreng		Rp.20000", "E. Ayam Bakar		Rp.25000" };
};
void ayam::rumahmakan(){
  cout<<"========================"<<endl;
	cout<<"    RUMAH MAKAN  "<<endl;
	cout<<"========================"<<endl;
	cout<<endl;
}
istream& operator >> (istream& in, ayam& inp) {

	cout <<"Masukkan jarak rumah anda "<<endl;
  cout <<"A. Kurang dari 3KM Rp.15000"<< endl;
  cout <<"B. Lebih dari 3KM Rp.25000"<< endl;
  cin >> inp.jarak;
}

ostream& operator << (ostream& out, const ayam& outp) {


  }


int main(){
ayam a;
cin >> a;
a.warung();
cout << a;
return 0;
}