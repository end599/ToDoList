#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	int work;
	cout << "일정 : ";
	cin >> work;

	if (work < 0 || work > 10) cout << "일정을 완료 할 수 없습니다." << endl;

	return 0;
}

class Todo {
public:
	bool b;
	int lever = 0;
	string work;
};

//==================완료 처리==================
//&과 *을 써서 주소값으로 받아와야함
//i는 메모장의 번호
void inF(Todo* a, int i) {
	switch (i + 1) {
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