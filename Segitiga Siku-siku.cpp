/* Dita Aulia Oktavian */
/*     Semangattt     */
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;
int main ()
{
	int pil, a, t, sisi_miring, luas, keliling; //a=alas, t=tinggi
	cout << "Menghitung Segitiga Siku-siku : " <<endl;
	cout << "1. Sisi Miring" << endl;
	cout << "2. Luas" << endl;
	cout << "3. Keliling" << endl;
	cout << "4. Keluar Program" << endl;
	
	cout << "Silahkan pilih : ";
	cin >> pil;
	
	cout << "============" <<endl;
	
	switch(pil)
	{
		case 1:
			cout << "Menghitung sisi miring" << endl;
			cout << "Masukkan alas : ";
			cin >> a;
			cout << "Masukkan tinggi : ";
			cin >> t;
			sisi_miring = sqrt(a * a + t * t);
			cout << "Sisi miring = " << sisi_miring;
			break;
			
		case 2:
			cout << "Menghitung luas" << endl;
			cout << "Masukkan alas : ";
			cin >> a;
			cout << "Masukkan tinggi : ";
			cin >> t;
			luas = a * t / 2;
			cout << "Luas = " << luas;
			break;
			
		case 3:
			cout << "Menghitung keliling" << endl;
			cout << "Masukkan alas : ";
			cin >> a;
			cout << "Masukkan tinggi : ";
			cin >> t;
			keliling = t * a + sqrt(a * a + t * t);
			cout << "Keliling = " << keliling;
			break;
			
		deafult:
			exit(0);
		
	}
}
