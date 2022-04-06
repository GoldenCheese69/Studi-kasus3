using namespace std;

void proses(){
 switch(wrg.paket)
{
	case 'A':
    	case 'a'  :
    		wrg.harga=21000;
   break;
   	case 'B':
    	case 'b'   :
    		wrg.harga=17000;
    break;
    	case 'C':
    	case 'c'   :
    		wrg.harga=19000;
    break;
    	case 'D':
    	case 'd'   :
    		wrg.harga=20000;
    break;
    	case 'E':
    	case 'e'   :
    		wrg.harga=25000;
    break;
  }
	cout<<"ingin pesan lagi?(y/n)";
	cin>>pilih;
	if(pilih=='y'||pilih=='Y'){
		system("cls");
		goto pilihan;
	}
	wrg.biaya = tot (wrg.harga, wrg.jumlah);
  
  	if (wrg.biaya>=50000){
		wrg.diskon=0.15*wrg.biaya;
	}
	else if (wrg.biaya>=150000){
		wrg.diskon=0.35*wrg.biaya;
	}else {
		wrg.diskon=0;
	}
  wrg.total=wrg.biaya-wrg.diskon; 
}