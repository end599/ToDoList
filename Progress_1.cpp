#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

class Schedule {
public:
	bool State;
	string Plan;
};
void Progress() {
	Schedule sch[20];
	ifstream fin;
	fin.open("일일 일정.txt");
	int a = 0, b = 0;
	double c;

//-------------------메모장에서 값 받아오기--------------------
	for (int i = 0; i < 20; i++) {
		fin >> sch[i].State;	//처음 bool값 입력 받음, 입력받지 못하는 값은 204로 저장이 됨
		getline(fin, sch[i].Plan);	//bool 이후 값은 줄단위로 저장, 단어 or 저장 방식에 따라 수정될 예정
									//진척도 계산을 위해서 줄단위로 쳐냈지만 단어 형식으로 해야
	}
//-----------------------------------------------------------

//------------------완료, 미완료, 진척도 계산------------------

	for (int i = 0; i < 20; i++) {
		if (sch[i].State == true) {
			a++; b++;	//a완료된 수, b전체 일정수 
		}
		else if (sch[i].State == false) {
			b++;
		}
	}
	c = (double)a / b * 100;	//a, b는 int값 이기에 double인 c에 저장하기 위해서 해당 식에서만 double형으로 변환
//-----------------------------------------------------------

//-----------------------진척도 표 출력-----------------------
	cout << round(c) << "%" << endl;
	for (int i = 0; i < 10; i++) {
		if (i < round(c / 10)) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);	//텍스트 색
			cout << "■";
		}
		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);	//텍스트 색
			cout << "■";
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);	//텍스트 색
//-----------------------------------------------------------
}



int main() {

	Progress();
}