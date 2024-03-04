#include<iostream>
using namespace std;

int main()
{
	float nMtk, nFisika, nRata;
	string status;
		cout << " masukan nilai mtk ";
		cin >> nMtk;
		cout << " masukan nilai fisika ";
		cin >> nFisika;

		nRata = (nMtk, nFisika) / 2;

		if (nRata >= 60) {
			status = "lulus jalur rerata";
		}
		else if (nMtk >= 70) {
			status = " lulus jalur mtk ";
		}
		else {
			status = " NT ";
		}
		cout << "statusnya " << status << endl;

























}