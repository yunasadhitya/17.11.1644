#include <iostream>
#include <conio.h>
using namespace std;

class Fahre{
	public:
		void setNilaiFr();
		float getResultFr();
	private:
		float C,F;
       
};
            
	void Fahre::setNilaiFr(){
		cout<<"================================\n";
		cout<<"MENGHITUNG CELCIUS KE FAHRENHEIT\n";
		cout<<"================================\n";
		cout<<"Masukkan Nilai Celcius : ";
		cin>>C;
	}
                    
	float Fahre::getResultFr(){
		F=C*1.8 + 32;
		return F;
	}
		   
class Kelvin{
	public:
		void setNilaiKel();
		void getResultKel();
	private:
		float C;
      };
       
	void Kelvin::setNilaiKel(){
		cout<<"============================\n";
		cout<<"MENGHITUNG CELCIUS KE KELVIN\n";
		cout<<"============================\n";
		cout<<"Masukkan Nilai Celcius : ";
		cin>>C;
	}
            
	void Kelvin::getResultKel(){
		cout<<"Nilai Kelvin: "<<C+273.15<<endl;
	}
		   
class Reamur{
	public:
		void setNilaiRea();
		void getResultRea();
	private:
		float C;
	};    
       
	void Reamur::setNilaiRea(){
		cout<<"============================\n";
		cout<<"MENGHITUNG CELCIUS KE REAMUR\n";
		cout<<"============================\n";
		cout<<"Masukkan Nilai Celcius: ";
		cin>>C;
	}
            
	void Reamur::getResultRea(){
		cout<<"Niai Reamur : "<<C*0.8<<endl;
	}
		   
class Romer{
	public:
		void setNilaiRom();
		void getResultRom();
	private:
		float C;      
	};              
       
	void Romer::setNilaiRom(){
		cout<<"============================\n";
		cout<<"MENGHITUNG CELCIUS KE ROMER\n";
		cout<<"============================\n";
		cout<<"Masukkan Nilai Celcius: ";
		cin>>C;
	}
            
	void Romer::getResultRom(){
		cout<<"Nilai Romer : "<<C*21/40+7.5<<endl;
	}
       
int main()
{
    int pil;
	
	do {
	system ("cls");
	cout<<"=====================================================\n";
	cout<<"\t\tPROGRAM KONVERSI SUHU\n";
	cout<<"=====================================================\n";
	cout<<"\nPilihan Konversi dari Celcius ke :\n";
    cout<<"1.Fahrenheit\n";
    cout<<"2.Kelvin\n";
    cout<<"3.Reamur\n";
    cout<<"4.Romer\n";
	cout<<"5.Exit\n";
    cout<<endl;
	
	cout << "Masukkan Pilihan : ";
	cin>>pil;
	
	system ("cls");
	
	switch(pil){
	case 1:
		Fahre Fr;//;//mendeklarasikan Objek Fr
		Fr.setNilaiFr();//memanggil fungsi setNilaiFr 
		cout<<"Nilai Fahrenheit : "<<Fr.getResultFr()<<endl; //memanggil fungsi setNilaiFr 
    break;

	case 2:
		Kelvin Kel;//mendeklarasikan Objek Kel
		Kel.setNilaiKel();//memanggil fungsi setNilaiKel
		Kel.getResultKel(); //memanggil fungsi setNilaiKel
	break;
     
	case 3: 
		Reamur Rea;//;//mendeklarasikan Objek Rea
		Rea.setNilaiRea();//memanggil fungsi setNilaiRea
		Rea.getResultRea(); //memanggil fungsi setNilaiRea
    break;

	case 4:
		Romer Rom;//;//mendeklarasikan Objek Rom
		Rom.setNilaiRom();//memanggil fungsi setNilaiRom
		Rom.getResultRom(); //memanggil fungsi setNilaiRom
	break;
	
	case 5:
		return 0;
	break;
	
	default:
		cout<<"Yang anda masukkan salah! Silahkan buka Aplikasi kembali\n";
	
	}
    cout<<endl;
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
}while (pil !=6);
return 0;
}
