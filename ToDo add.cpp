//일정 추가 피드백 11.11

#include<iostream>
#include<fstream> //파일 사용
#include<string> //getline() 사용
#include<conio.h>
#define SPACE 32
using namespace std;

class ToDo {
public:
	bool b = 0; //완료 여부 - 기본값 0
	int level = 0; //우선순위
	string work; //문자열 받기
};

void  ToDoadd() {
	ToDo Note;
	cout << "생성할 일정의 순위를 입력해 주세요 : ";
	cin >> Note.level;
	cin.ignore(); //위의 cin 버퍼 지우기 안쓰면 getline()이 돌아가지 않음.

	switch (Note.level) {
	case 1: {
		ifstream t1("1.txt");
		t1.seekg(0, ios::end); // beg = 시작점, cur = 중간 지점, end =끝지점
		if (t1.tellg() > 4) { // tellg() 파일 크기
			cout << " 이미 내용 입력되어 있습니다. 새로운 내용을 입력하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
		int a = _getch(); 
			if (a==32)	{
				ofstream t("1.txt");   //파일 쓰기 준비 and "1.txt"없으면 생성, 있으면 열기
				if (t.is_open()) {      //파일이 열려 있으면~
					cout << "내용을 입력해 주세요 : ";
					cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
					getline(cin, Note.work);   // 공백 포함 문자열 쓰기
				}
				t << Note.b << " " << Note.level << " " << Note.work; //해당 파일에 b level work 순서대로 입력
				t.close();   //파일 닫기
				t1.close();   //파일 닫기
				break;
			}
		}
		else{
			ofstream t("1.txt");   //파일 쓰기 준비 and "1.txt"없으면 생성, 있으면 열기
			if (t.is_open()) {      //파일이 열려 있으면~
				cout << "내용을 입력해 주세요 : ";
				cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
				getline(cin, Note.work);   // 공백 포함 문자열 쓰기
			}
			t << Note.b << " " << Note.level << " " << Note.work; //해당 파일에 b level work 순서대로 입력
			t1.close();   //파일 닫기
			t.close();   //파일 닫기
		}
		break;
	}
	case 2: {
		ifstream t1("2.txt");
		t1.seekg(0, ios::end); 
		if (t1.tellg() > 4) { 
			cout << " 이미 내용 입력되어 있습니다. 새로운 내용을 입력하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			int a = _getch();
			if (a == 32) {
				ofstream t("2.txt");  
				if (t.is_open()) {     
					cout << "내용을 입력해 주세요 : ";
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
				cout << "내용을 입력해 주세요 : ";
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
			cout << " 이미 내용 입력되어 있습니다. 새로운 내용을 입력하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			int a = _getch();
			if (a == 32) {
				ofstream t("3.txt");
				if (t.is_open()) {
					cout << "내용을 입력해 주세요 : ";
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
				cout << "내용을 입력해 주세요 : ";
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
			cout << " 이미 내용 입력되어 있습니다. 새로운 내용을 입력하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			int a = _getch();
			if (a == 32) {
				ofstream t("4.txt");
				if (t.is_open()) {
					cout << "내용을 입력해 주세요 : ";
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
				cout << "내용을 입력해 주세요 : ";
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
			cout << " 이미 내용 입력되어 있습니다. 새로운 내용을 입력하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			int a = _getch();
			if (a == 32) {
				ofstream t("5.txt");
				if (t.is_open()) {
					cout << "내용을 입력해 주세요 : ";
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
				cout << "내용을 입력해 주세요 : ";
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
			cout << " 이미 내용 입력되어 있습니다. 새로운 내용을 입력하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			int a = _getch();
			if (a == 32) {
				ofstream t("6.txt");
				if (t.is_open()) {
					cout << "내용을 입력해 주세요 : ";
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
				cout << "내용을 입력해 주세요 : ";
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
			cout << " 이미 내용 입력되어 있습니다. 새로운 내용을 입력하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			int a = _getch();
			if (a == 32) {
				ofstream t("7.txt");
				if (t.is_open()) {
					cout << "내용을 입력해 주세요 : ";
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
				cout << "내용을 입력해 주세요 : ";
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
			cout << " 이미 내용 입력되어 있습니다. 새로운 내용을 입력하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			int a = _getch();
			if (a == 32) {
				ofstream t("8.txt");
				if (t.is_open()) {
					cout << "내용을 입력해 주세요 : ";
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
				cout << "내용을 입력해 주세요 : ";
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
			cout << " 이미 내용 입력되어 있습니다. 새로운 내용을 입력하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			int a = _getch();
			if (a == 32) {
				ofstream t("9.txt");
				if (t.is_open()) {
					cout << "내용을 입력해 주세요 : ";
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
				cout << "내용을 입력해 주세요 : ";
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
			cout << " 이미 내용 입력되어 있습니다. 새로운 내용을 입력하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			int a = _getch();
			if (a == 32) {
				ofstream t("10.txt");
				if (t.is_open()) {
					cout << "내용을 입력해 주세요 : ";
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
				cout << "내용을 입력해 주세요 : ";
				cin.clear();
				getline(cin, Note.work);
			}
			t << Note.b << " " << Note.level << " " << Note.work;
			t.close();
			t1.close();
		}
		break;
	}
	default: cout << "생성 가능한 일정의 개수를 초과했습니다. 1~10 사이의 숫자를 입력해주세요.";
		break;
	}

}
int main() {
	ToDoadd();
}