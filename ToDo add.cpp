#include<iostream>
#include<fstream> //���� ���
#include<string> //getline() ���
using namespace std;

class ToDo {
public:
	bool b = 0; //�Ϸ� ���� - �⺻�� 0
	int level = 0; //�켱����
	string work; //���ڿ� �ޱ�
};

void  ToDoadd() {
	ToDo Note;

	cout << "�켱������ �Է��� �ּ��� : ";
	cin >> Note.level;
	cin.ignore(); //���� cin ���� ����� �Ⱦ��� getline()�� ���ư��� ����.

	switch (Note.level) {
	case 1: {
		ofstream t("1.txt");	//���� ���� �غ� and "1.txt"������ ����, ������ ����
		if (t.is_open()) {		//������ ���� ������~
			cout << "������ �Է��� �ּ��� : ";
			cin.clear();			  //getline ���� �ʱ�ȭ(��ü ���� �ʱ�ȭ)
			getline(cin, Note.work);   // ���� ���� ���ڿ� ����
		}
		t << Note.b << " " << Note.level << " " << Note.work; //�ش� ���Ͽ� b level work ������� �Է�
		t.close();	//���� �ݱ�
	}
		  break;
	case 2:
	{
		ofstream t("2.txt");
		if (t.is_open()) {
			cout << "������ �Է��� �ּ��� : ";
			cin.clear();
			getline(cin, Note.work);
		}
		t << Note.b << " " << Note.level << " " << Note.work;
		t.close();
	}
	case 3: {
		ofstream t("3.txt");
		if (t.is_open()) {
			cout << "������ �Է��� �ּ��� : ";
			cin.clear();
			getline(cin, Note.work);
		}
		t << Note.b << " " << Note.level << " " << Note.work;
		t.close();
	}
		  break;
	case 4: {
		ofstream t("4.txt");
		if (t.is_open()) {
			cout << "������ �Է��� �ּ��� : ";
			cin.clear();
			getline(cin, Note.work);
		}
		t << Note.b << " " << Note.level << " " << Note.work;
		t.close(); 
	}
		  break;
	case 5: {
		ofstream t("5.txt");
		if (t.is_open()) {
			cout << "������ �Է��� �ּ��� : ";
			cin.clear();
			getline(cin, Note.work);
		}
		t << Note.b << " " << Note.level << " " << Note.work;
		t.close();
	}
		  break;
	case 6: {
		ofstream t("6.txt");
		if (t.is_open()) {
			cout << "������ �Է��� �ּ��� : ";
			cin.clear();
			getline(cin, Note.work);
		}
		t << Note.b << " " << Note.level << " " << Note.work;
		t.close();
	}
		  break;
	case 7: {
		ofstream t("7.txt");
		if (t.is_open()) {
			cout << "������ �Է��� �ּ��� : ";
			cin.clear();
			getline(cin, Note.work);
		}
		t << Note.b << " " << Note.level << " " << Note.work;
		t.close();
	}
		  break;
	case 8: {
		ofstream t("8.txt");
		if (t.is_open()) {
			cout << "������ �Է��� �ּ��� : ";
			cin.clear();
			getline(cin, Note.work);
		}
		t << Note.b << " " << Note.level << " " << Note.work;
		t.close();
	}
		  break;
	case 9: {
		ofstream t("9.txt");
		if (t.is_open()) {
			cout << "������ �Է��� �ּ��� : ";
			cin.clear();
			getline(cin, Note.work);
		}
		t << Note.b << " " << Note.level << " " << Note.work;
		t.close();
	}
		  break;
	case 10: {
		ofstream t("10.txt");
		if (t.is_open()) {
			cout << "������ �Է��� �ּ��� : ";
			cin.clear();
			getline(cin, Note.work);
		}
		t << Note.b << " " << Note.level << " " << Note.work;
		t.close();
	}
		   break;
	default: cout << " �ش� ������ ���� �Ұ��� �մϴ�. 1~10 ������ ���ڸ� �Է����ּ���.";
		break;
	}

}

int main() {
	ToDoadd();
}