#include <iostream>
using namespace std;

int main()
{
    int nBil = (rand() % 10);
    string status;

    if (nBil % 2 == 00) {
        status = "Genap";
    }

    else
    {
        status = "ganjil";
    }

    cout << "Angka ini " << nBil << " adalah " << status;





}

