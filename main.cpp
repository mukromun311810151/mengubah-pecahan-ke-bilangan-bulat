#include <iostream>
#include <conio.h>
using namespace std;
struct pecahan
{
    int pb;
    int py; };

int main (int argc, char *argv[])
{
    pecahan p1,p2;
    cout<<"MENGUBAH PECAHAN KE BILANGAN BULAT"<<endl;
    cout<<"Masukkan pembilang = ";
    cin>>p1.pb;
    cout<<"Masukkan penyebut  = ";
    cin>>p2.py;
    cout<<"\t               "<<(p1.pb)<<endl;
    cout<<"\t          pb = -"<<endl;
    cout<<"\t               "<<(p2.py)<<endl;
    if ("/")
    {
        cout<<"Hasilnya = "<<(p1.pb)/(p2.py)<<endl;
    }
    cin.get();
    return 0;
}
