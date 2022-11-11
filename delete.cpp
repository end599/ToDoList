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
		txt1.seekg(0, ios::end);		// �� �޺κ� 0��° �ڸ����� ã��		
		if (txt1.fail() || (txt1.tellg() < 4)) {		// 1.txt�� ���ų� ���� ������ ��� �ִٸ�
			cout << "�ش� ������ �����ϴ�.";
			break;
		}
		else {
			ofstream t("1.txt");	// ���� ������ ����
			if (t.is_open()) {		// ������ ���� ������~
				cin.clear();			  // getline ���� �ʱ�ȭ(��ü ���� �ʱ�ȭ)
			}
			t.close();	//���� �ݱ�
			break;
		}
	}
	case 2: {
		txt2.seekg(0, ios::end);		
		if (txt2.fail() || (txt2.tellg() < 4)) {	
			cout << "�ش� ������ �����ϴ�.";
			break;
		}
		else {
			ofstream t("2.txt");	
			if (t.is_open()) {		
				cin.clear();		
			}
			t.close();	
			break;
		}
	}
	case 3: {
		txt3.seekg(0, ios::end);		
		if (txt3.fail() || (txt3.tellg() < 4)) {	
			cout << "�ش� ������ �����ϴ�.";
			break;
		}
		else {
			ofstream t("3.txt");	
			if (t.is_open()) {		
				cin.clear();		
			}
			t.close();	
			break;
		}
	}
	case 4: {
		txt4.seekg(0, ios::end);		
		if (txt4.fail() || (txt4.tellg() < 4)) {		
			cout << "�ش� ������ �����ϴ�.";
			break;
		}
		else {
			ofstream t("4.txt");	
			if (t.is_open()) {		
				cin.clear();		
			}
			t.close();	
			break;
		}
	}
	case 5: {
		txt5.seekg(0, ios::end);		
		if (txt5.fail() || (txt5.tellg() < 4)) {		
			cout << "�ش� ������ �����ϴ�.";
			break;
		}
		else {
			ofstream t("5.txt");	
			if (t.is_open()) {		
				cin.clear();		
			}
			t.close();
			break;
		}
	}
	case 6: {
		txt6.seekg(0, ios::end);		
		if (txt6.fail() || (txt6.tellg() < 4)) {		
			cout << "�ش� ������ �����ϴ�.";
			break;
		}
		else {
			ofstream t("6.txt");
			if (t.is_open()) {	
				cin.clear();	
			}
			t.close();	
			break;
		}
	}
	case 7: {
		txt7.seekg(0, ios::end);		
		if (txt7.fail() || (txt7.tellg() < 4)) {		
			cout << "�ش� ������ �����ϴ�.";
			break;
		}
		else {
			ofstream t("7.txt");
			if (t.is_open()) {	
				cin.clear();	
			}
			t.close();	
			break;
		}
	}
	case 8: {
		txt8.seekg(0, ios::end);
		if (txt8.fail() || (txt8.tellg() < 4)) {	
			cout << "�ش� ������ �����ϴ�.";
			break;
		}
		else {
			ofstream t("8.txt");
			if (t.is_open()) {	
				cin.clear();	
			}
			t.close();	
			break;
		}
	}
	case 9: {
		txt9.seekg(0, ios::end);
		if (txt9.fail() || (txt9.tellg() < 4)) {	
			cout << "�ش� ������ �����ϴ�.";
			break;
		}
		else {
			ofstream t("9.txt");
			if (t.is_open()) {	
				cin.clear();	
			}
			t.close();	
			break;
		}
	}
	case 10: {
		txt10.seekg(0, ios::end);
		if (txt10.fail() || (txt10.tellg() < 4)) {		
			cout << "�ش� ������ �����ϴ�.";
			break;
		}
		else {
			ofstream t("10.txt");	
			if (t.is_open()) {		
				cin.clear();			 
			}
			t.close();
			break;
		}
	}
	default: cout << "�߸��� �Է��Դϴ�. �ùٸ� ���� ��ȣ�� �Է����ּ���.";		// �߸��� �Է� ��
		break;
	}


	/* ���� �ݱ� */
	txt1.close();
	txt2.close();
	txt3.close();
	txt4.close();
	txt5.close();
	txt6.close();
	txt7.close();
	txt8.close();
	txt9.close();
	txt10.close();
}


int main() {
	ToDoadd();
	ToDodelete();
}