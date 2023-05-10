#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim();				//deklarasi method
};


void mahasiswa::showNim() {		//implementasi method diluar class
	cout << "No Induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 };			//object mhs
	mhs.showNim();				//Member Acces operator

	mahasiswa& ref = mhs;		//pointer reference refMhs
	ref.nim = 2;				//Member access Operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs;		//Pointer Dereference pMhs
	pMhs->nim = 3;				//Arrow opertaror
	pMhs->showNim();
	system("pause");
	return 0;
} 