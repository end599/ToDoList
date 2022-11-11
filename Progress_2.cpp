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

//==================완료 처리==================
//&과 *을 써서 주소값으로 받아와야함
//i는 메모장의 번호
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

//=============메모장에 값 내보내기=============
//i는 메모장의 번호 
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

//=================진척도 계산=================
void Progress() {
	Todo sch[10];
	int a = 0, b = 0;
	double c;
	
//-------------------메모장에서 값 받아오기--------------------
	for (int i = 0; i < 10; i++) {
		inF(&sch[i], i);
	}
//-----------------------------------------------------------

//------------------완료, 미완료, 진척도 계산------------------

	for (int i = 0; i < 10; i++) {
		if (sch[i].b == true) {
			a++; b++;	//a완료된 수, b전체 일정수 
		}
		else if (sch[i].b == false) {
			b++;
		}
	}
	c = (double)a / b * 100;
//-----------------------------------------------------------

//-----------------------진척도 표 출력-----------------------
	cout << round(c) << "%" << endl;
	for (int i = 0; i < 10; i++) {
		if (i < round(c / 10)) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
			cout << "■";
		}
		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "■";
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//-----------------------------------------------------------
}
//============================================

//==================완료 처리==================
void ScheduleComplete(Todo *sch) {
	sch->b = true;

	cout << endl;
	cout << "완료 되었습니다.";
	cout << endl;
}
//============================================


int main() {

}