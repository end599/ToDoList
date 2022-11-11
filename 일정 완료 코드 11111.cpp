#include<iostream>
#include<fstream> //파일 사용
#include<string> //getline() 사용
#include<conio.h>
#define SPACE 32


using namespace std;


class Todo {
public:
	bool b;
	int level = 0;
	string work;
};

int main()
{
	int work;
	cout << "일정 : ";
	cin >> work;

	if (work < 1 || work > 10) cout << "일정을 완료 할 수 없습니다." << endl;
	else if (work >= 1 && work < 11) cout << "일정이 완료 되었습니다." << endl;
	return 0;
}

void inF(Todo* a, int i) {
	Todo Note;
	cout << "완료할 일정의 번호를 입력해 주세요 : ";
	cin >> Note.level;
	cin.ignore();


	switch (Note.level) {
	case 1: {
		ifstream fin;
		fin.open("1.txt");
		ifstream t1("1.txt");
		fin >> a->b >> a->level;
		if (t1.tellg() < 4) {
			cout << " 일정이 없습니다. 다른 일정을 완료하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			ifstream fin;
			fin.open("1.txt");
			fin >> a->b >> a->level;
			getline(fin, a->work);
		}
			break;
		}
	case 2: {
		ifstream fin;
		fin.open("2.txt");
		ifstream t1("2.txt");
		fin >> a->b >> a->level;
		if (t1.tellg() < 4) {
			cout << " 일정이 없습니다. 다른 일정을 완료하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			ifstream fin;
			fin.open("1.txt");
			fin >> a->b >> a->level;
			getline(fin, a->work);
		}
			break;
	}
	case 3: {
		ifstream fin;
		fin.open("3.txt");
		ifstream t1("3.txt");
		fin >> a->b >> a->level;
		if (t1.tellg() < 4) {
			cout << " 일정이 없습니다. 다른 일정을 완료하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			ifstream fin;
			fin.open("1.txt");
			fin >> a->b >> a->level;
			getline(fin, a->work);
		}
		break;
	}
	case 4: {
		ifstream fin;
		fin.open("4.txt");
		ifstream t1("4.txt");
		fin >> a->b >> a->level;
		if (t1.tellg() < 4) {
			cout << " 일정이 없습니다. 다른 일정을 완료하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			ifstream fin;
			fin.open("1.txt");
			fin >> a->b >> a->level;
			getline(fin, a->work);
		}
		break;
	}
	case 5: {
		ifstream fin;
		fin.open("5.txt");
		ifstream t1("5.txt");
		fin >> a->b >> a->level;
		if (t1.tellg() < 4) {
			cout << " 일정이 없습니다. 다른 일정을 완료하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			ifstream fin;
			fin.open("1.txt");
			fin >> a->b >> a->level;
			getline(fin, a->work);
		}
		break;
	}
	case 6: {
		ifstream fin;
		fin.open("6.txt");
		ifstream t1("6.txt");
		fin >> a->b >> a->level;
		if (t1.tellg() < 4) {
			cout << " 일정이 없습니다. 다른 일정을 완료하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			ifstream fin;
			fin.open("1.txt");
			fin >> a->b >> a->level;
			getline(fin, a->work);
		}
		break;
	}
	case 7: {
		ifstream fin;
		fin.open("7.txt");
		ifstream t1("7.txt");
		fin >> a->b >> a->level;
		if (t1.tellg() < 4) {
			cout << " 일정이 없습니다. 다른 일정을 완료하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			ifstream fin;
			fin.open("1.txt");
			fin >> a->b >> a->level;
			getline(fin, a->work);
		}
		break;
	}
	case 8: {
		ifstream fin;
		fin.open("8.txt");
		ifstream t1("8.txt");
		fin >> a->b >> a->level;
		if (t1.tellg() < 4) {
			cout << " 일정이 없습니다. 다른 일정을 완료하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			ifstream fin;
			fin.open("1.txt");
			fin >> a->b >> a->level;
			getline(fin, a->work);
		}
		break;
	}
	case 9: {
		ifstream fin;
		fin.open("9.txt");
		ifstream t1("9.txt");
		fin >> a->b >> a->level;
		if (t1.tellg() < 4) {
			cout << " 일정이 없습니다. 다른 일정을 완료하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			ifstream fin;
			fin.open("1.txt");
			fin >> a->b >> a->level;
			getline(fin, a->work);
		}
		break;
	}
	case 10: {
		ifstream fin;
		fin.open("10.txt");
		ifstream t1("10.txt");
		fin >> a->b >> a->level;
		if (t1.tellg() < 4) {
			cout << " 일정이 없습니다. 다른 일정을 완료하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			ifstream fin;
			fin.open("1.txt");
			fin >> a->b >> a->level;
			getline(fin, a->work);
		}
		break;
	}

	default: cout << "생성 가능한 일정의 개수를 초과했습니다. 1~10 사이의 숫자를 입력해주세요.";
		break;
	}
}

