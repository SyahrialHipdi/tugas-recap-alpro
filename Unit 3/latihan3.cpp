#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"masukan jumlah data: ";
    cin>>n;
    int jumlah[n];
    int total =0;
    cout<<"masukan tiap data: ";
    for (int i = 0; i < n; i++)
    {
        cin>>jumlah[i];
    }

    for (int i = 0; i < n; i++)
    {
        total+= jumlah[i];
    }

    cout<<"Hasil penjumlahan seluruh elemen pada array"<<total;
}