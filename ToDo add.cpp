//���� �߰� �ǵ�� 11.11

#include<iostream>
#include<fstream> //���� ���
#include<string> //getline() ���
#include<conio.h>
#define SPACE 32
using namespace std;

class ToDo {
public:
	bool b = 0; //�Ϸ� ���� - �⺻�� 0
	int level = 0; //�켱����
	string work; //���ڿ� �ޱ�
};

void  ToDoadd() {
	ToDo Note;
	cout << "������ ������ ������ �Է��� �ּ��� : ";
	cin >> Note.level;
	cin.ignore(); //���� cin ���� ����� �Ⱦ��� getline()�� ���ư��� ����.

	switch (Note.level) {
	case 1: {
		ifstream t1("1.txt");
		t1.seekg(0, ios::end); // beg = ������, cur = �߰� ����, end =������
		if (t1.tellg() > 4) { // tellg() ���� ũ��
			cout << " �̹� ���� �ԷµǾ� �ֽ��ϴ�. ���ο� ������ �Է��ϰ� ������ �����̽��ٸ� �����ּ���. �ƴ϶�� �����̽��ٸ� ������ Ű�� �����ּ���." << endl;
		int a = _getch(); 
			if (a==32)	{
				ofstream t("1.txt");   //���� ���� �غ� and "1.txt"������ ����, ������ ����
				if (t.is_open()) {      //������ ���� ������~
					cout << "������ �Է��� �ּ��� : ";
					cin.clear();           //getline ���� �ʱ�ȭ(��ü ���� �ʱ�ȭ)
					getline(cin, Note.work);   // ���� ���� ���ڿ� ����
				}
				t << Note.b << " " << Note.level << " " << Note.work; //�ش� ���Ͽ� b level work ������� �Է�
				t.close();   //���� �ݱ�
				t1.close();   //���� �ݱ�
				break;
			}
		}
		else{
			ofstream t("1.txt");   //���� ���� �غ� and "1.txt"������ ����, ������ ����
			if (t.is_open()) {      //������ ���� ������~
				cout << "������ �Է��� �ּ��� : ";
				cin.clear();           //getline ���� �ʱ�ȭ(��ü ���� �ʱ�ȭ)
				getline(cin, Note.work);   // ���� ���� ���ڿ� ����
			}
			t << Note.b << " " << Note.level << " " << Note.work; //�ش� ���Ͽ� b level work ������� �Է�
			t1.close();   //���� �ݱ�
			t.close();   //���� �ݱ�
		}
		break;
	}
	case 2: {
		ifstream t1("2.txt");
		t1.seekg(0, ios::end); 
		if (t1.tellg() > 4) { 
			cout << " �̹� ���� �ԷµǾ� �ֽ��ϴ�. ���ο� ������ �Է��ϰ� ������ �����̽��ٸ� �����ּ���. �ƴ϶�� �����̽��ٸ� ������ Ű�� �����ּ���." << endl;
			int a = _getch();
			if (a == 32) {
				ofstream t("2.txt");  
				if (t.is_open()) {     
					cout << "������ �Է��� �ּ��� : ";
					cin.clear();         
					getline(cin, Note.work);  
				}
				t << Note.b << " " << Note.level << " " << Note.work; 
				t.close();   
				t1.close();  
				break;
			}
		}
		else {
			ofstream t("1.txt");  
			if (t.is_open()) {     
				cout << "������ �Է��� �ּ��� : ";
				cin.clear();           
				getline(cin, Note.work);   
			}
			t << Note.b << " " << Note.level << " " << Note.work; 
			t.close();   
			t1.close(); 
		}
		break;
	}
	case 3: {
		ifstream t1("3.txt");
		t1.seekg(0, ios::end);
		if (t1.tellg() > 4) {
			cout << " �̹� ���� �ԷµǾ� �ֽ��ϴ�. ���ο� ������ �Է��ϰ� ������ �����̽��ٸ� �����ּ���. �ƴ϶�� �����̽��ٸ� ������ Ű�� �����ּ���." << endl;
			int a = _getch();
			if (a == 32) {
				ofstream t("3.txt");
				if (t.is_open()) {
					cout << "������ �Է��� �ּ��� : ";
					cin.clear();
					getline(cin, Note.work);
				}
				t << Note.b << " " << Note.level << " " << Note.work;
				t.close();
				t1.close();
				break;
			}
		}
		else {
			ofstream t("3.txt");
			if (t.is_open()) {
				cout << "������ �Է��� �ּ��� : ";
				cin.clear();
				getline(cin, Note.work);
			}
			t << Note.b << " " << Note.level << " " << Note.work;
			t.close();
			t1.close();
		}
		break;
	}
	case 4: {
		ifstream t1("4.txt");
		t1.seekg(0, ios::end);
		if (t1.tellg() > 4) {
			cout << " �̹� ���� �ԷµǾ� �ֽ��ϴ�. ���ο� ������ �Է��ϰ� ������ �����̽��ٸ� �����ּ���. �ƴ϶�� �����̽��ٸ� ������ Ű�� �����ּ���." << endl;
			int a = _getch();
			if (a == 32) {
				ofstream t("4.txt");
				if (t.is_open()) {
					cout << "������ �Է��� �ּ��� : ";
					cin.clear();
					getline(cin, Note.work);
				}
				t << Note.b << " " << Note.level << " " << Note.work;
				t.close();
				t1.close();
				break;
			}
		}
		else {
			ofstream t("4.txt");
			if (t.is_open()) {
				cout << "������ �Է��� �ּ��� : ";
				cin.clear();
				getline(cin, Note.work);
			}
			t << Note.b << " " << Note.level << " " << Note.work;
			t.close();
			t1.close();
		}
		break;
	}
	case 5: {
		ifstream t1("5.txt");
		t1.seekg(0, ios::end);
		if (t1.tellg() > 4) {
			cout << " �̹� ���� �ԷµǾ� �ֽ��ϴ�. ���ο� ������ �Է��ϰ� ������ �����̽��ٸ� �����ּ���. �ƴ϶�� �����̽��ٸ� ������ Ű�� �����ּ���." << endl;
			int a = _getch();
			if (a == 32) {
				ofstream t("5.txt");
				if (t.is_open()) {
					cout << "������ �Է��� �ּ��� : ";
					cin.clear();
					getline(cin, Note.work);
				}
				t << Note.b << " " << Note.level << " " << Note.work;
				t.close();
				t1.close();
				break;
			}
		}
		else {
			ofstream t("5.txt");
			if (t.is_open()) {
				cout << "������ �Է��� �ּ��� : ";
				cin.clear();
				getline(cin, Note.work);
			}
			t << Note.b << " " << Note.level << " " << Note.work;
			t.close();
			t1.close();
		}
		break;
	}
	case 6: {
		ifstream t1("6.txt");
		t1.seekg(0, ios::end);
		if (t1.tellg() > 4) {
			cout << " �̹� ���� �ԷµǾ� �ֽ��ϴ�. ���ο� ������ �Է��ϰ� ������ �����̽��ٸ� �����ּ���. �ƴ϶�� �����̽��ٸ� ������ Ű�� �����ּ���." << endl;
			int a = _getch();
			if (a == 32) {
				ofstream t("6.txt");
				if (t.is_open()) {
					cout << "������ �Է��� �ּ��� : ";
					cin.clear();
					getline(cin, Note.work);
				}
				t << Note.b << " " << Note.level << " " << Note.work;
				t.close();
				t1.close();
				break;
			}
		}
		else {
			ofstream t("6.txt");
			if (t.is_open()) {
				cout << "������ �Է��� �ּ��� : ";
				cin.clear();
				getline(cin, Note.work);
			}
			t << Note.b << " " << Note.level << " " << Note.work;
			t.close();
			t1.close();
		}
		break;
	}
	case 7: {
		ifstream t1("7.txt");
		t1.seekg(0, ios::end);
		if (t1.tellg() > 4) {
			cout << " �̹� ���� �ԷµǾ� �ֽ��ϴ�. ���ο� ������ �Է��ϰ� ������ �����̽��ٸ� �����ּ���. �ƴ϶�� �����̽��ٸ� ������ Ű�� �����ּ���." << endl;
			int a = _getch();
			if (a == 32) {
				ofstream t("7.txt");
				if (t.is_open()) {
					cout << "������ �Է��� �ּ��� : ";
					cin.clear();
					getline(cin, Note.work);
				}
				t << Note.b << " " << Note.level << " " << Note.work;
				t.close();
				t1.close();
				break;
			}
		}
		else {
			ofstream t("7.txt");
			if (t.is_open()) {
				cout << "������ �Է��� �ּ��� : ";
				cin.clear();
				getline(cin, Note.work);
			}
			t << Note.b << " " << Note.level << " " << Note.work;
			t.close();
			t1.close();
		}
		break;
	}
	case 8: {
		ifstream t1("8.txt");
		t1.seekg(0, ios::end);
		if (t1.tellg() > 4) {
			cout << " �̹� ���� �ԷµǾ� �ֽ��ϴ�. ���ο� ������ �Է��ϰ� ������ �����̽��ٸ� �����ּ���. �ƴ϶�� �����̽��ٸ� ������ Ű�� �����ּ���." << endl;
			int a = _getch();
			if (a == 32) {
				ofstream t("8.txt");
				if (t.is_open()) {
					cout << "������ �Է��� �ּ��� : ";
					cin.clear();
					getline(cin, Note.work);
				}
				t << Note.b << " " << Note.level << " " << Note.work;
				t.close();
				t1.close();
				break;
			}
		}
		else {
			ofstream t("8.txt");
			if (t.is_open()) {
				cout << "������ �Է��� �ּ��� : ";
				cin.clear();
				getline(cin, Note.work);
			}
			t << Note.b << " " << Note.level << " " << Note.work;
			t.close();
			t1.close();
		}
		break;
	}
	case 9: {
		ifstream t1("9.txt");
		t1.seekg(0, ios::end);
		if (t1.tellg() > 4) {
			cout << " �̹� ���� �ԷµǾ� �ֽ��ϴ�. ���ο� ������ �Է��ϰ� ������ �����̽��ٸ� �����ּ���. �ƴ϶�� �����̽��ٸ� ������ Ű�� �����ּ���." << endl;
			int a = _getch();
			if (a == 32) {
				ofstream t("9.txt");
				if (t.is_open()) {
					cout << "������ �Է��� �ּ��� : ";
					cin.clear();
					getline(cin, Note.work);
				}
				t << Note.b << " " << Note.level << " " << Note.work;
				t.close();
				t1.close();
				break;
			}
		}
		else {
			ofstream t("9.txt");
			if (t.is_open()) {
				cout << "������ �Է��� �ּ��� : ";
				cin.clear();
				getline(cin, Note.work);
			}
			t << Note.b << " " << Note.level << " " << Note.work;
			t.close();
			t1.close();
		}
		break;
	}
	case 10: {
		ifstream t1("10.txt");
		t1.seekg(0, ios::end);
		if (t1.tellg() > 4) {
			cout << " �̹� ���� �ԷµǾ� �ֽ��ϴ�. ���ο� ������ �Է��ϰ� ������ �����̽��ٸ� �����ּ���. �ƴ϶�� �����̽��ٸ� ������ Ű�� �����ּ���." << endl;
			int a = _getch();
			if (a == 32) {
				ofstream t("10.txt");
				if (t.is_open()) {
					cout << "������ �Է��� �ּ��� : ";
					cin.clear();
					getline(cin, Note.work);
				}
				t << Note.b << " " << Note.level << " " << Note.work;
				t.close();
				t1.close();
				break;
			}
		}
		else {
			ofstream t("10.txt");
			if (t.is_open()) {
				cout << "������ �Է��� �ּ��� : ";
				cin.clear();
				getline(cin, Note.work);
			}
			t << Note.b << " " << Note.level << " " << Note.work;
			t.close();
			t1.close();
		}
		break;
	}
	default: cout << "���� ������ ������ ������ �ʰ��߽��ϴ�. 1~10 ������ ���ڸ� �Է����ּ���.";
		break;
	}

}
int main() {
	ToDoadd();
}