#include <iostream>
using namespace std;

string name[20];                    //Membuat array dengan panjang data 2
double nMath[20];
double nIng[20];
string status[20];
double rt;
int lulus;
int gagal;

void input() {                  //Procedure Input


    for (int i = 0; i < 20; i++)                     //Menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data Ke- " << (i + 1) << ": " << endl;
        cout << "masukkan nama :";
        cin >> name[i];
        cout << "Masukkan nilai bahasa Inggris :";
        cin >> nIng[i];
        cout << "Masukkan nilai matematika :";
        cin >> nMath[i];
    }
}

double rerata(double a, double b)
{
    return (a + b) / 2;
}

void status() {
    for (int i = 0; i < 20; i++)
    {
        rt = rerata(nMath[i], nIng[i]);
        if (rt > 80) {
            status[i] = "Lulus";
            lulus++;
        }
        else
        {
            status[i] = "Gagal";
            gagal++;
        }
    }
}

void hasil() {
    cout << "=====================" <<endl;

}


int main()
{   
    input();
}