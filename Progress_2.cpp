#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

class Todo {
public:
	bool b;
	int lever = 0;
	string work;
};

//==================�Ϸ� ó��==================
//&�� *�� �Ἥ �ּҰ����� �޾ƿ;���
//i�� �޸����� ��ȣ
void inF(Todo *a, int i) {
	switch (i+1){
	case 1: {
		ifstream fin;
		fin.open("1.txt");
		fin >> a->b >> a->lever;
		getline(fin, a->work);
		break;
	}
	case 2: {
		ifstream fin;
		fin.open("2.txt");
		fin >> a->b >> a->lever;
		getline(fin, a->work);
		break;
	}
	case 3: {
		ifstream fin;
		fin.open("3.txt");
		fin >> a->b >> a->lever;
		getline(fin, a->work);
		break;
	}
	case 4: {
		ifstream fin;
		fin.open("4.txt");
		fin >> a->b >> a->lever;
		getline(fin, a->work);
		break;
	}
	case 5: {
		ifstream fin;
		fin.open("5.txt");
		fin >> a->b >> a->lever;
		getline(fin, a->work);
		break;
	}
	case 6: {
		ifstream fin;
		fin.open("6.txt");
		fin >> a->b >> a->lever;
		getline(fin, a->work);
		break;
	}
	case 7: {
		ifstream fin;
		fin.open("7.txt");
		fin >> a->b >> a->lever;
		getline(fin, a->work);
		break;
	}
	case 8: {
		ifstream fin;
		fin.open("8.txt");
		fin >> a->b >> a->lever;
		getline(fin, a->work);
		break;
	}
	case 9: {
		ifstream fin;
		fin.open("9.txt");
		fin >> a->b >> a->lever;
		getline(fin, a->work);
		break;
	}
	case 10: {
		ifstream fin;
		fin.open("10.txt");
		fin >> a->b >> a->lever;
		getline(fin, a->work);
		break;
	}
	default:
		break;
	}
}
//============================================

//=============�޸��忡 �� ��������=============
//i�� �޸����� ��ȣ 
void outF(Todo a, int i) {
	switch (i + 1){
	case 1: {
		ofstream fout("1.txt");
		cin.clear();
		fout << a.b << " " << a.lever << " " << a.work;
		fout.close();
		break;
	}
	case 2: {
		ofstream fout("2.txt");
		cin.clear();
		fout << a.b << " " << a.lever << " " << a.work;
		fout.close();
		break;
	}
	case 3: {
		ofstream fout("3.txt");
		cin.clear();
		fout << a.b << " " << a.lever << " " << a.work;
		fout.close();
		break;
	}
	case 4: {
		ofstream fout("4.txt");
		cin.clear();
		fout << a.b << " " << a.lever << " " << a.work;
		fout.close();
		break;
	}
	case 5: {
		ofstream fout("5.txt");
		cin.clear();
		fout << a.b << " " << a.lever << " " << a.work;
		fout.close();
		break;
	}
	case 6: {
		ofstream fout("6.txt");
		cin.clear();
		fout << a.b << " " << a.lever << " " << a.work;
		fout.close();
		break;
	}
	case 7: {
		ofstream fout("7.txt");
		cin.clear();
		fout << a.b << " " << a.lever << " " << a.work;
		fout.close();
		break;
	}
	case 8: {
		ofstream fout("8.txt");
		cin.clear();
		fout << a.b << " " << a.lever << " " << a.work;
		fout.close();
		break;
	}
	case 9: {
		ofstream fout("9.txt");
		cin.clear();
		fout << a.b << " " << a.lever << " " << a.work;
		fout.close();
		break;
	}
	case 10: {
		ofstream fout("10.txt");
		cin.clear();
		fout << a.b << " " << a.lever << " " << a.work;
		fout.close();
		break;
	}
	default:
		break;
	}
}
//============================================

//=================��ô�� ���=================
void Progress() {
	Todo sch[10];
	int a = 0, b = 0;
	double c;
	
//-------------------�޸��忡�� �� �޾ƿ���--------------------
	for (int i = 0; i < 10; i++) {
		inF(&sch[i], i);
	}
//-----------------------------------------------------------

//------------------�Ϸ�, �̿Ϸ�, ��ô�� ���------------------

	for (int i = 0; i < 10; i++) {
		if (sch[i].b == true) {
			a++; b++;	//a�Ϸ�� ��, b��ü ������ 
		}
		else if (sch[i].b == false) {
			b++;
		}
	}
	c = (double)a / b * 100;
//-----------------------------------------------------------

//-----------------------��ô�� ǥ ���-----------------------
	cout << round(c) << "%" << endl;
	for (int i = 0; i < 10; i++) {
		if (i < round(c / 10)) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
			cout << "��";
		}
		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "��";
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//-----------------------------------------------------------
}
//============================================

//==================�Ϸ� ó��==================
void ScheduleComplete(Todo *sch) {
	sch->b = true;

	cout << endl;
	cout << "�Ϸ� �Ǿ����ϴ�.";
	cout << endl;
}
//============================================


int main() {

}