#include <iostream>
using namespace std;

class mahasiswa {
public:
    int nim;
    void showNim(); //deklarasi method
};
void mahasiswa::showNim() { //implementasi method diluar class
    cout << "No Induk = " << nim << endl;
}
int main()
{
    mahasiswa mhs{ 1 }; //objectmhs
    mhs.showNim(); //Member Access Operator

    mahasiswa& ref = mhs; //Pointer Reference refMhs
    ref.nim = 2; //Member Access Operator
    mhs.showNim();

    mahasiswa* pMhs = &mhs; //Pointer Dereference pMhs
    pMhs->nim = 3; // Arrow Operator
    mhs.showNim();
    system("pause");
    return 0;
}
