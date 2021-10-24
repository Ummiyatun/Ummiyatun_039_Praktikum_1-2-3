#include<iostream>
#include<conio.h>

using namespace std;

main()
{
	int a=1, b, c, jumlah=0, i, n;
	
	cout <<"\t||---------------------------------||"<<endl;
	cout <<"\t|| Program Menghitung Jumlah Deret ||"<<endl;
	cout <<"\t||---------------------------------||"<<endl<<endl;
	
	cout <<"Masukkan Bilangan Awal : "; cin>>a;
	cout <<"Masukkan Beda : "; cin>>b;
	cout <<"Masukkan Jumlah Sampai Deret Ke-n : "; cin>>n; 
	
	cout <<"Deret ke-"<<n<<" : ";
	cout<<a<<",";
    jumlah=jumlah+a; 
    for(i=0; i<n-1; i++){
        c=a+b;
        a=c;
        cout<<c<<",";
    	jumlah=jumlah+c;                      
    }
    
    cout <<"\nJumlah deret ke-"<<n<<" : ";
    cout <<jumlah; 
     
    getch();
    return 0;    
}
