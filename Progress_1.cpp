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
	fin.open("���� ����.txt");
	int a = 0, b = 0;
	double c;

//-------------------�޸��忡�� �� �޾ƿ���--------------------
	for (int i = 0; i < 20; i++) {
		fin >> sch[i].State;	//ó�� bool�� �Է� ����, �Է¹��� ���ϴ� ���� 204�� ������ ��
		getline(fin, sch[i].Plan);	//bool ���� ���� �ٴ����� ����, �ܾ� or ���� ��Ŀ� ���� ������ ����
									//��ô�� ����� ���ؼ� �ٴ����� �ĳ����� �ܾ� �������� �ؾ�
	}
//-----------------------------------------------------------

//------------------�Ϸ�, �̿Ϸ�, ��ô�� ���------------------

	for (int i = 0; i < 20; i++) {
		if (sch[i].State == true) {
			a++; b++;	//a�Ϸ�� ��, b��ü ������ 
		}
		else if (sch[i].State == false) {
			b++;
		}
	}
	c = (double)a / b * 100;	//a, b�� int�� �̱⿡ double�� c�� �����ϱ� ���ؼ� �ش� �Ŀ����� double������ ��ȯ
//-----------------------------------------------------------

//-----------------------��ô�� ǥ ���-----------------------
	cout << round(c) << "%" << endl;
	for (int i = 0; i < 10; i++) {
		if (i < round(c / 10)) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);	//�ؽ�Ʈ ��
			cout << "��";
		}
		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);	//�ؽ�Ʈ ��
			cout << "��";
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);	//�ؽ�Ʈ ��
//-----------------------------------------------------------
}



int main() {

	Progress();
}