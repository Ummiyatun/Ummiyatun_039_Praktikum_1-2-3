#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
	int i,kuadrat,jmlh_bilangan,jmlh_kuadrat;
    float akar,jmlh_akar;
    
	cout <<"\t||------------------------------------------||"<<endl;
	cout <<"\t|| Program Menghitung Jumlah 6 Suku Pertama ||"<<endl;
	cout <<"\t||------------------------------------------||"<<endl<<endl;
    
    cout << "\t6 Suku Pertama : "<<endl<<endl;
    
    jmlh_bilangan=0;
    jmlh_kuadrat=0;
    jmlh_akar=0;
    
    for (i=1;i<=6;i++) {
    kuadrat=i*i*i;
    akar= sqrt(i);
    jmlh_bilangan=i;
    jmlh_kuadrat=jmlh_kuadrat+kuadrat;
    
    cout <<"Suku ke- " << i <<" = "<<kuadrat<<" "<<endl;
    }
    cout <<"------------------------------\n";
    cout <<"Jumlah 6 Suku Pertama = "<<jmlh_kuadrat;

    return 0;    
}
