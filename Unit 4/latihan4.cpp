#include <iostream>
using namespace std;

void hitung(int x){
    cout<<"keliling persegi adalah: "<<x*4<<endl;
    cout<<"luas persegi adalah: "<<x*x<<endl;
    cout<<"Volume persegi adalah: "<<x*x*x<<endl;
}

int main(){
    int sisi;
    cout<<"masukan sisi: ";
    cin>>sisi;
    hitung(sisi);
}