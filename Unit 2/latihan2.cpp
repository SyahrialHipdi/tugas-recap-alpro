#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"masukan total transaksi: ";
    cin>>n;
    int jumlah[n];
    int total =0;
    cout<<"masukan tiap nominal transaksi: ";
    for (int i = 0; i < n; i++)
    {
        cin>>jumlah[i];
    }

    for (int i = 0; i < n; i++)
    {
        total+= jumlah[i];
    }

    if(n==0){
        cout<<"tidak ada transaksi hari ini";
    } else {
        cout<<"Total pengeluaran hari ini: "<<total;
    }
    
}