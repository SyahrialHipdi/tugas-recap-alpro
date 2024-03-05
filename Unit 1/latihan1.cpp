#include <iostream>
#include <iomanip>
using namespace std;

int kecepatan;
int jarak;
int waktu;

int main()
{
    cout << "Input menghitung kecepatan: ";
    cin >> jarak >> waktu;
    cout << "Luaran Kecepatan: " << fixed << setprecision(2) << (float) jarak / waktu << endl << endl;

    cout << "Input menghitung jarak: ";
    cin >> kecepatan >> waktu;
    cout << "Luaran Jarak: " << fixed << setprecision(2) << (float) kecepatan * waktu << endl << endl;

    cout << "Input menghitung waktu: ";
    cin >> jarak >> kecepatan;
    cout << "Luaran Waktu: " << fixed << setprecision(2) << (float) jarak / kecepatan;
    return 0;
}
