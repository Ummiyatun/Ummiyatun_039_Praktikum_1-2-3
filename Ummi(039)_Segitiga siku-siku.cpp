#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	float tinggi, alas;
	
	cout << "\t=======================================================" <<endl;
	cout << "\t\tProgram menghitung segitiga siku-siku" << endl;
	cout << "\t=======================================================" <<endl;
	cout << "\n";
	
	cout << " Masukkan Tinggi : "; cin >> tinggi;
	cout << " Masukkan Alas : "; cin >> alas;
	
	cout << " -------------------------------" <<endl;
	cout << " Sisi Miring : "<<sqrt(alas*alas+tinggi*tinggi) <<endl;
	cout << " Luas : "<<0.5*alas*tinggi<<endl;
	cout << " Keliling : "<<tinggi+alas+sqrt(alas*alas+tinggi*tinggi) <<endl;
	
	return 0;
}
