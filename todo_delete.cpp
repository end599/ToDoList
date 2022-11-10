#include <iostream>
#include <fstream> //���� ���
#include <string> //getline() ���
using namespace std;

class ToDo {
public:
	bool b = 0; //�Ϸ� ���� - �⺻�� 0
	int level = 0; //���� ����
	string work; //���ڿ� �ޱ�
};

ToDo Note;

void  ToDoadd() {

	cout << "������ ������ ������ �Է��� �ּ��� : ";
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
		break;
	}

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
		break;
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
		break;

	}
	case 4: {
		ofstream t("4.txt");
		if (t.is_open()) {
			cout << "������ �Է��� �ּ��� : ";
			cin.clear();
			getline(cin, Note.work);
		}
		t << Note.b << " " << Note.level << " " << Note.work;
		t.close();
		break;
	}
	case 5: {
		ofstream t("5.txt");
		if (t.is_open()) {
			cout << "������ �Է��� �ּ��� : ";
			cin.clear();
			getline(cin, Note.work);
		}
		t << Note.b << " " << Note.level << " " << Note.work;
		t.close();
		break;
	}
	case 6: {
		ofstream t("6.txt");
		if (t.is_open()) {
			cout << "������ �Է��� �ּ��� : ";
			cin.clear();
			getline(cin, Note.work);
		}
		t << Note.b << " " << Note.level << " " << Note.work;
		t.close();
		break;
	}
	case 7: {
		ofstream t("7.txt");
		if (t.is_open()) {
			cout << "������ �Է��� �ּ��� : ";
			cin.clear();
			getline(cin, Note.work);
		}
		t << Note.b << " " << Note.level << " " << Note.work;
		t.close();
		break;
	}
	case 8: {
		ofstream t("8.txt");
		if (t.is_open()) {
			cout << "������ �Է��� �ּ��� : ";
			cin.clear();
			getline(cin, Note.work);
		}
		t << Note.b << " " << Note.level << " " << Note.work;
		t.close();
		break;
	}
	case 9: {
		ofstream t("9.txt");
		if (t.is_open()) {
			cout << "������ �Է��� �ּ��� : ";
			cin.clear();
			getline(cin, Note.work);
		}
		t << Note.b << " " << Note.level << " " << Note.work;
		t.close();
		break;
	}
	case 10: {
		ofstream t("10.txt");
		if (t.is_open()) {
			cout << "������ �Է��� �ּ��� : ";
			cin.clear();
			getline(cin, Note.work);
		}
		t << Note.b << " " << Note.level << " " << Note.work;
		t.close();
		break;
	}
	default: cout << "���� ������ ������ ������ �ʰ��߽��ϴ�. 1~10 ������ ���ڸ� �Է����ּ���.";
		break;
	}

}

void ToDodelete() {

	int delnum;		// ������ ���� ��ȣ

	/*���� �б�*/
	ifstream txt1("1.txt");
	ifstream txt2("2.txt");
	ifstream txt3("3.txt");
	ifstream txt4("4.txt");
	ifstream txt5("5.txt");
	ifstream txt6("6.txt");
	ifstream txt7("7.txt");
	ifstream txt8("8.txt");
	ifstream txt9("9.txt");
	ifstream txt10("10.txt");

	cout << endl;
	cout << "�����ϰ� ���� ������ ��ȣ�� �Է��ϼ��� : ";
	cout << endl;

	cin >> delnum;		// ������ ���� ��ȣ �Է�

	switch (delnum) {
	case 1: {
		if (txt1.fail()) {		// 1.txt�� ���� ���� �� ����
			cout << "�ش� ������ �����ϴ�.";
			break;
		}
		else {
			ofstream t("1.txt");	//���� ������ ����
			if (t.is_open()) {		//������ ���� ������~
				cin.clear();			  //getline ���� �ʱ�ȭ(��ü ���� �ʱ�ȭ)
			}
			t.close();	//���� �ݱ�
			break;
		}
	}
	case 2: {
		if (txt2.fail()) {		// 2.txt�� ���� ���� �� ����
			cout << "�ش� ������ �����ϴ�.";
			break;
		}
		else {
			ofstream t("2.txt");	//���� ������ ����
			if (t.is_open()) {		//������ ���� ������~
				cin.clear();			  //getline ���� �ʱ�ȭ(��ü ���� �ʱ�ȭ)
			}
			t.close();	//���� �ݱ�
			break;
		}
	}
	case 3: {
		if (txt3.fail()) {		// 3.txt�� ���� ���� �� ����
			cout << "�ش� ������ �����ϴ�.";
			break;
		}
		else {
			ofstream t("3.txt");	//���� ������ ����
			if (t.is_open()) {		//������ ���� ������~
				cin.clear();			  //getline ���� �ʱ�ȭ(��ü ���� �ʱ�ȭ)
			}
			t.close();	//���� �ݱ�
			break;
		}
	}
	case 4: {
		if (txt4.fail()) {		// 4.txt�� ���� ���� �� ����
			cout << "�ش� ������ �����ϴ�.";
			break;
		}
		else {
			ofstream t("4.txt");	//���� ������ ����
			if (t.is_open()) {		//������ ���� ������~
				cin.clear();			  //getline ���� �ʱ�ȭ(��ü ���� �ʱ�ȭ)
			}
			t.close();	//���� �ݱ�
			break;
		}
	}
	case 5: {
		if (txt5.fail()) {		// 5.txt�� ���� ���� �� ����
			cout << "�ش� ������ �����ϴ�.";
			break;
		}
		else {
			ofstream t("5.txt");	//���� ������ ����
			if (t.is_open()) {		//������ ���� ������~
				cin.clear();			  //getline ���� �ʱ�ȭ(��ü ���� �ʱ�ȭ)
			}
			t.close();	//���� �ݱ�
			break;
		}
	}
	case 6: {
		if (txt6.fail()) {		// 6.txt�� ���� ���� �� ����
			cout << "�ش� ������ �����ϴ�.";
			break;
		}
		else {
			ofstream t("6.txt");	//���� ������ ����
			if (t.is_open()) {		//������ ���� ������~
				cin.clear();			  //getline ���� �ʱ�ȭ(��ü ���� �ʱ�ȭ)
			}
			t.close();	//���� �ݱ�
			break;
		}
	}
	case 7: {
		if (txt7.fail()) {		// 7.txt�� ���� ���� �� ����
			cout << "�ش� ������ �����ϴ�.";
			break;
		}
		else {
			ofstream t("7.txt");	//���� ������ ����
			if (t.is_open()) {		//������ ���� ������~
				cin.clear();			  //getline ���� �ʱ�ȭ(��ü ���� �ʱ�ȭ)
			}
			t.close();	//���� �ݱ�
			break;
		}
	}
	case 8: {
		if (txt8.fail()) {		// 8.txt�� ���� ���� �� ����
			cout << "�ش� ������ �����ϴ�.";
			break;
		}
		else {
			ofstream t("8.txt");	//���� ������ ����
			if (t.is_open()) {		//������ ���� ������~
				cin.clear();			  //getline ���� �ʱ�ȭ(��ü ���� �ʱ�ȭ)
			}
			t.close();	//���� �ݱ�
			break;
		}
	}
	case 9: {
		if (txt9.fail()) {		// .9txt�� ���� ���� �� ����
			cout << "�ش� ������ �����ϴ�.";
			break;
		}
		else {
			ofstream t("9.txt");	//���� ������ ����
			if (t.is_open()) {		//������ ���� ������~
				cin.clear();			  //getline ���� �ʱ�ȭ(��ü ���� �ʱ�ȭ)
			}
			t.close();	//���� �ݱ�
			break;
		}
	}
	case 10: {
		if (txt10.fail()) {		// 10.txt�� ���� ���� �� ����
			cout << "�ش� ������ �����ϴ�.";
			break;
		}
		else {
			ofstream t("10.txt");	//���� ������ ����
			if (t.is_open()) {		//������ ���� ������~
				cin.clear();			  //getline ���� �ʱ�ȭ(��ü ���� �ʱ�ȭ)
			}
			t.close();	//���� �ݱ�
			break;
		}
	}
	default: cout << "�߸��� �Է��Դϴ�. �ùٸ� ���� ��ȣ�� �Է����ּ���.";		// �߸��� �Է� ��
		break;
	}
}


int main() {
	ToDoadd();
	ToDodelete();
}