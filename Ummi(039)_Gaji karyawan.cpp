#include <iostream>
using namespace std;

int main ()
{
	string nama;
	char golongan;
	int jam = 0, jml, total, sisa, sisa1;
	cout << " \t========================================================" <<endl;
	cout << " \t\tProgram menghitung gaji karyawan mingguan" <<endl;
	cout << " \t========================================================" <<endl;		
	cout << " \n";
	cout << " Nama Karyawan : ";cin >> nama;
	cout << " Lama Jam Kerja : ";cin >> jam;
	cout << " Golongan [A/B/C/D] : ";cin >> golongan;
	
	if (golongan == 'A')
	{
		jml = 5000;
	}
	else if (golongan == 'B')
	{
		jml = 7000;
	}
	if (golongan == 'C')
	{
		jml = 8000;
	}
	else if (golongan == 'D')
	{
		jml = 10000;
	}
	
	if (jam > 48)
	{
		sisa = jam - 48;
		sisa1 = jml * (jam-sisa);
		total = 4000 * sisa;
		jml = sisa1 + total;
	}
	else
	{
		jml = jml * jam;
	}
	
	cout <<endl;
	cout << " \t========== GAJI =========== " <<endl;
	cout << " Nama Karyawan : " << nama <<endl;
	cout << " Jumlah Gaji : " << jml <<endl;
}
