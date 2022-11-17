#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <windows.h> //system() 함수 사용
#include <fstream> //파일 사용
#include <string> //getline() 사용
#include <conio.h> //_getch() 함수는 사용자가 입력한 키에 대한 값을 아스키코드로 반환
#include "time.h"
#define SPACE 32
#define D 68
#define d 100
#define M 77
#define m 109
//#define C 67
//#define c 99
using namespace std;

class ToDo {
public:
	bool b; //완료 여부 - 기본값 0
	int level = 0; //우선순위
	string work; //문자열 받기
};

ToDo Note;
void outF(ToDo, int);	//일정 추가에서 사용하기위해서 선언해줌

void gotoxy(int x, int y) {
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
/*일정 추가*/
void listadd() {
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
			if (a == 32) {
				cout << "내용을 입력해 주세요 : ";
				cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
				getline(cin, Note.work);   // 공백 포함 문자열 쓰기
				Note.b = 0;
				outF(Note, 0);
				t1.close();
				break;
			}
		}
		else {
			cout << "내용을 입력해 주세요 : ";
			cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
			getline(cin, Note.work);   // 공백 포함 문자열 쓰기
			Note.b = 0;
			outF(Note, 0);
			t1.close();	//파일 닫기
			break;
		}
	}
	case 2: {
		ifstream t1("2.txt");
		t1.seekg(0, ios::end); // beg = 시작점, cur = 중간 지점, end =끝지점
		if (t1.tellg() > 4) { // tellg() 파일 크기
			cout << " 이미 내용 입력되어 있습니다. 새로운 내용을 입력하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			int a = _getch();
			if (a == 32) {
				cout << "내용을 입력해 주세요 : ";
				cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
				getline(cin, Note.work);   // 공백 포함 문자열 쓰기
				Note.b = 0;
				outF(Note, 1);
				t1.close();
				break;
			}
		}
		else {
			cout << "내용을 입력해 주세요 : ";
			cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
			getline(cin, Note.work);   // 공백 포함 문자열 쓰기
			Note.b = 0;
			outF(Note, 1);
			t1.close();		//파일 닫기
			break;
		}
	}
	case 3: {
		ifstream t1("3.txt");
		t1.seekg(0, ios::end); // beg = 시작점, cur = 중간 지점, end =끝지점
		if (t1.tellg() > 4) { // tellg() 파일 크기
			cout << " 이미 내용 입력되어 있습니다. 새로운 내용을 입력하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			int a = _getch();
			if (a == 32) {
				cout << "내용을 입력해 주세요 : ";
				cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
				getline(cin, Note.work);   // 공백 포함 문자열 쓰기
				Note.b = 0;
				outF(Note, 2);
				t1.close();
				break;
			}
		}
		else {
			cout << "내용을 입력해 주세요 : ";
			cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
			getline(cin, Note.work);   // 공백 포함 문자열 쓰기
			Note.b = 0;
			outF(Note, 2);
			t1.close();		//파일 닫기
			break;
		}
	}
	case 4: {
		ifstream t1("4.txt");
		t1.seekg(0, ios::end); // beg = 시작점, cur = 중간 지점, end =끝지점
		if (t1.tellg() > 4) { // tellg() 파일 크기
			cout << " 이미 내용 입력되어 있습니다. 새로운 내용을 입력하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			int a = _getch();
			if (a == 32) {
				cout << "내용을 입력해 주세요 : ";
				cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
				getline(cin, Note.work);   // 공백 포함 문자열 쓰기
				Note.b = 0;
				outF(Note, 3);
				t1.close();
				break;
			}
		}
		else {
			cout << "내용을 입력해 주세요 : ";
			cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
			getline(cin, Note.work);   // 공백 포함 문자열 쓰기
			Note.b = 0;
			outF(Note, 3);
			t1.close();		//파일 닫기
			break;
		}
	}
	case 5: {
		ifstream t1("5.txt");
		t1.seekg(0, ios::end); // beg = 시작점, cur = 중간 지점, end =끝지점
		if (t1.tellg() > 4) { // tellg() 파일 크기
			cout << " 이미 내용 입력되어 있습니다. 새로운 내용을 입력하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			int a = _getch();
			if (a == 32) {
				cout << "내용을 입력해 주세요 : ";
				cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
				getline(cin, Note.work);   // 공백 포함 문자열 쓰기
				Note.b = 0;
				outF(Note, 4);
				t1.close();
				break;
			}
		}
		else {
			cout << "내용을 입력해 주세요 : ";
			cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
			getline(cin, Note.work);   // 공백 포함 문자열 쓰기
			Note.b = 0;
			outF(Note, 4);
			t1.close();		//파일 닫기
			break;
		}
	}
	case 6: {
		ifstream t1("6.txt");
		t1.seekg(0, ios::end); // beg = 시작점, cur = 중간 지점, end =끝지점
		if (t1.tellg() > 4) { // tellg() 파일 크기
			cout << " 이미 내용 입력되어 있습니다. 새로운 내용을 입력하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			int a = _getch();
			if (a == 32) {
				cout << "내용을 입력해 주세요 : ";
				cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
				getline(cin, Note.work);   // 공백 포함 문자열 쓰기
				Note.b = 0;
				outF(Note, 5);
				t1.close();
				break;
			}
		}
		else {
			cout << "내용을 입력해 주세요 : ";
			cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
			getline(cin, Note.work);   // 공백 포함 문자열 쓰기
			Note.b = 0;
			outF(Note, 5);
			t1.close();		//파일 닫기
			break;
		}
	}
	case 7: {
		ifstream t1("7.txt");
		t1.seekg(0, ios::end); // beg = 시작점, cur = 중간 지점, end =끝지점
		if (t1.tellg() > 4) { // tellg() 파일 크기
			cout << " 이미 내용 입력되어 있습니다. 새로운 내용을 입력하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			int a = _getch();
			if (a == 32) {
				cout << "내용을 입력해 주세요 : ";
				cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
				getline(cin, Note.work);   // 공백 포함 문자열 쓰기
				Note.b = 0;
				outF(Note, 6);
				t1.close();
				break;
			}
		}
		else {
			cout << "내용을 입력해 주세요 : ";
			cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
			getline(cin, Note.work);   // 공백 포함 문자열 쓰기
			Note.b = 0;
			outF(Note, 6);
			t1.close();		//파일 닫기
			break;
		}
	}
	case 8: {
		ifstream t1("8.txt");
		t1.seekg(0, ios::end); // beg = 시작점, cur = 중간 지점, end =끝지점
		if (t1.tellg() > 4) { // tellg() 파일 크기
			cout << " 이미 내용 입력되어 있습니다. 새로운 내용을 입력하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			int a = _getch();
			if (a == 32) {
				cout << "내용을 입력해 주세요 : ";
				cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
				getline(cin, Note.work);   // 공백 포함 문자열 쓰기
				Note.b = 0;
				outF(Note, 7);
				t1.close();
				break;
			}
		}
		else {
			cout << "내용을 입력해 주세요 : ";
			cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
			getline(cin, Note.work);   // 공백 포함 문자열 쓰기
			Note.b = 0;
			outF(Note, 7);
			t1.close();		//파일 닫기
			break;
		}
	}
	case 9: {
		ifstream t1("9.txt");
		t1.seekg(0, ios::end); // beg = 시작점, cur = 중간 지점, end =끝지점
		if (t1.tellg() > 4) { // tellg() 파일 크기
			cout << " 이미 내용 입력되어 있습니다. 새로운 내용을 입력하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			int a = _getch();
			if (a == 32) {
				cout << "내용을 입력해 주세요 : ";
				cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
				getline(cin, Note.work);   // 공백 포함 문자열 쓰기
				Note.b = 0;
				outF(Note, 8);
				t1.close();
				break;
			}
		}
		else {
			cout << "내용을 입력해 주세요 : ";
			cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
			getline(cin, Note.work);   // 공백 포함 문자열 쓰기
			Note.b = 0;
			outF(Note, 8);
			t1.close();		//파일 닫기
			break;
		}
	}
	case 10: {
		ifstream t1("10.txt");
		t1.seekg(0, ios::end); // beg = 시작점, cur = 중간 지점, end =끝지점
		if (t1.tellg() > 4) { // tellg() 파일 크기
			cout << " 이미 내용 입력되어 있습니다. 새로운 내용을 입력하고 싶으면 스페이스바를 눌러주세요. 아니라면 스페이스바를 제외한 키를 눌러주세요." << endl;
			int a = _getch();
			if (a == 32) {
				cout << "내용을 입력해 주세요 : ";
				cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
				getline(cin, Note.work);   // 공백 포함 문자열 쓰기
				Note.b = 0;
				outF(Note, 9);
				t1.close();
				break;
			}
		}
		else {
			cout << "내용을 입력해 주세요 : ";
			cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
			getline(cin, Note.work);   // 공백 포함 문자열 쓰기
			Note.b = 0;
			outF(Note, 9);
			t1.close();		//파일 닫기
			break;
		}
	}
	default: cout << "생성 가능한 일정의 개수를 초과했습니다. 1~10 사이의 숫자를 입력해주세요.";
		break;
	}

}/*일정 추가*/

/*일정 삭제*/
void listdelete() {

	int delnum;		// 삭제할 일정 번호

	/*파일 읽기*/
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
	cout << "삭제하고 싶은 일정의 번호를 입력하세요 : ";
	cout << endl;

	cin >> delnum;		// 삭제할 일정 번호 입력

	switch (delnum) {
	case 1: {
		txt1.seekg(0, ios::end);		// 맨 뒷부분 0번째 자리부터 찾기		
		if (txt1.fail() || (txt1.tellg() < 4)) {		// 1.txt가 없거나 파일 내용이 비어 있다면
			cout << "해당 일정은 없습니다.";
			break;
		}
		else {
			ofstream t("1.txt");	// 파일 있으면 열기
			if (t.is_open()) {		// 파일이 열려 있으면~
				cin.clear();			  // getline 버퍼 초기화(전체 버퍼 초기화)
			}
			t.close();	//파일 닫기
			break;
		}
	}
	case 2: {
		txt2.seekg(0, ios::end);
		if (txt2.fail() || (txt2.tellg() < 4)) {
			cout << "해당 일정은 없습니다.";
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
			cout << "해당 일정은 없습니다.";
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
			cout << "해당 일정은 없습니다.";
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
			cout << "해당 일정은 없습니다.";
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
			cout << "해당 일정은 없습니다.";
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
			cout << "해당 일정은 없습니다.";
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
			cout << "해당 일정은 없습니다.";
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
			cout << "해당 일정은 없습니다.";
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
			cout << "해당 일정은 없습니다.";
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
	default: cout << "잘못된 입력입니다. 올바른 일정 번호를 입력해주세요.";		// 잘못된 입력 값
		break;
	}


	/* 파일 닫기 */
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

/*캘린더 UI*/
void calendar() {
	system("cls");
	system("mode con cols=150 lines=50");
	char a = NULL;
	cout << endl << endl;
	cout << setw(78) << "11월" << endl << endl << endl;

	cout << "\t\t\t\t\t" << " ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ " << endl;
	cout << setw(42) << "ㅣ" << " 일요일 " << "ㅣ" << " 월요일 " << "ㅣ" << " 화요일 " << "ㅣ" << " 수요일 " << "ㅣ" << " 목요일 " << "ㅣ" << " 금요일 " << "ㅣ" << " 토요일 " << "ㅣ" << endl;


	cout << "\t\t\t\t\t" << " ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ " << endl;
	cout << setw(42) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << endl;
	cout << setw(42) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << "   01   " << "ㅣ" << "   02   " << "ㅣ" << "   03   " << "ㅣ" << "   04   " << "ㅣ" << "   05   " << "ㅣ" << endl;
	cout << setw(42) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << endl;
	cout << "\t\t\t\t\t" << " ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ " << endl;
	cout << setw(42) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << endl;
	cout << setw(42) << "ㅣ" << "   06   " << "ㅣ" << "   07   " << "ㅣ" << "   08   " << "ㅣ" << "   09   " << "ㅣ" << "   10   " << "ㅣ" << "   11   " << "ㅣ" << "   12   " << "ㅣ" << endl;
	cout << setw(42) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << endl;
	cout << "\t\t\t\t\t" << " ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ " << endl;
	cout << setw(42) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << endl;
	cout << setw(42) << "ㅣ" << "   13   " << "ㅣ" << "   14   " << "ㅣ" << "   15   " << "ㅣ" << "   16   " << "ㅣ" << "   17   " << "ㅣ" << "   18   " << "ㅣ" << "   19   " << "ㅣ" << endl;
	cout << setw(42) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << endl;
	cout << "\t\t\t\t\t" << " ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ " << endl;
	cout << setw(42) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << endl;
	cout << setw(42) << "ㅣ" << "   20   " << "ㅣ" << "   21   " << "ㅣ" << "   22   " << "ㅣ" << "   23   " << "ㅣ" << "   24   " << "ㅣ" << "   25   " << "ㅣ" << "   26   " << "ㅣ" << endl;
	cout << setw(42) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << endl;
	cout << "\t\t\t\t\t" << " ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ " << endl;
	cout << setw(42) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << endl;
	cout << setw(42) << "ㅣ" << "   27   " << "ㅣ" << "   28   " << "ㅣ" << "   29   " << "ㅣ" << "   30   " << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << endl;
	cout << setw(42) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << setw(10) << "ㅣ" << endl;
	cout << "\t\t\t\t\t" << " ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ " << endl;

	cout << endl;

	cout << "\t\t\t\t\t\t\t" << "메인화면으로 돌아가려면 아무 키를 누르세요." << endl << endl;
	a = _getch();
}

/*메뉴얼 UI*/
void Manual() {
	system("title 메뉴얼");
	system("cls");
	system(" mode con lines=70 cols=100");
	//cout << "□■■■□■■■■■□□■■■■■□□■■■■■○○■■■■■□□■■■■■□□■■■■■□■■■□" << endl;
	int NUM2 = 0;
	for (int i = 0; i < 88; i += 2)
	{
		gotoxy(6 + i, 1);
		cout << "■";
		gotoxy(6 + i, 9);
		cout << "■";
	}
	for (int i = 0; i < 7; i++) {
		gotoxy(6, 2 + i);
		cout << "■";
		gotoxy(92, 2 + i);
		cout << "■";
	}


	gotoxy(10, 3);
	cout << "■" << setw(8) << "■" << setw(12) << "■■■" << setw(8) << "■" << setw(8) << "■" << setw(6) << "■" << setw(8) << "■" << setw(12) << "■■■" << setw(8) << "■";
	gotoxy(10, 4);
	cout << "■■" << setw(6) << "■■" << setw(6) << "■" << setw(8) << "■" << setw(8) << "■■" << setw(6) << "■" << setw(6) << "■" << setw(8) << "■" << setw(6) << "■" << setw(8) << "■" << setw(6) << "■";
	gotoxy(10, 5);
	cout << "■" << setw(4) << "■" << setw(4) << "■" << setw(14) << "■■■■■" << setw(6) << "■" << setw(4) << "■" << setw(4) << "■" << setw(6) << "■" << setw(8) << "■" << setw(14) << "■■■■■" << setw(6) << "■";
	gotoxy(10, 6);
	cout << "■" << setw(8) << "■" << setw(6) << "■" << setw(8) << "■" << setw(6) << "■" << setw(8) << "■■" << setw(6) << "■" << setw(8) << "■" << setw(6) << "■" << setw(8) << "■" << setw(6) << "■";
	gotoxy(10, 7);
	cout << "■" << setw(8) << "■" << setw(6) << "■" << setw(8) << "■" << setw(6) << "■" << setw(8) << "■" << setw(12) << "■■■" << setw(8) << "■" << setw(8) << "■" << setw(14) << "■■■■■";

	gotoxy(24, 12);
	cout << "일정 추가 : A or a";
	gotoxy(24, 13);
	cout << "사용자가 입력한 일정을 추가하는 명령어";

	gotoxy(24, 16);
	cout << "일정 삭제 : D or d";
	gotoxy(24, 17);
	cout << "일정을 삭제하는 명령어";

	gotoxy(24, 20);
	cout << "일정 완료 : F or f";
	gotoxy(24, 21);
	cout << "일정을 완료 시켜주는 명령어";

	gotoxy(24, 24);
	cout << "메인메뉴 M or m";
	gotoxy(24, 25);
	cout << "메인메뉴로 돌아가는 명령어";

	gotoxy(24, 28);
	cout << "종료 E or e";
	gotoxy(24, 29);
	cout << "프로그램 종료하는 명령어";

	gotoxy(0, 64);
	NUM2 = _getch();
}

/*일정 값 가져오기*/
void inF(ToDo* a, int i) {
	switch (i) {
	case 0: {
		ifstream fin;
		fin.open("1.txt");
		fin >> a->b >> a->level;
		getline(fin, a->work);
		fin.close();
		break;
	}
	case 1: {
		ifstream fin;
		fin.open("2.txt");
		fin >> a->b >> a->level;
		getline(fin, a->work);
		fin.close();
		break;
	}
	case 2: {
		ifstream fin;
		fin.open("3.txt");
		fin >> a->b >> a->level;
		getline(fin, a->work);
		fin.close();
		break;
	}
	case 3: {
		ifstream fin;
		fin.open("4.txt");
		fin >> a->b >> a->level;
		getline(fin, a->work);
		break;
	}
	case 4: {
		ifstream fin;
		fin.open("5.txt");
		fin >> a->b >> a->level;
		getline(fin, a->work);
		fin.close();
		break;
	}
	case 5: {
		ifstream fin;
		fin.open("6.txt");
		fin >> a->b >> a->level;
		getline(fin, a->work);
		fin.close();
		break;
	}
	case 6: {
		ifstream fin;
		fin.open("7.txt");
		fin >> a->b >> a->level;
		getline(fin, a->work);
		fin.close();
		break;
	}
	case 7: {
		ifstream fin;
		fin.open("8.txt");
		fin >> a->b >> a->level;
		getline(fin, a->work);
		fin.close();
		break;
	}
	case 8: {
		ifstream fin;
		fin.open("9.txt");
		fin >> a->b >> a->level;
		getline(fin, a->work);
		fin.close();
		break;
	}
	case 9: {
		ifstream fin;
		fin.open("10.txt");
		fin >> a->b >> a->level;
		getline(fin, a->work);
		fin.close();
		break;
	}
	default: {
		break;
	}
	}
}

/*일정 값 내보내기*/
void outF(ToDo a, int i) {
	switch (i) {
	case 0: {
		ofstream fout("1.txt");
		cin.clear();
		fout << a.b << " " << a.level << " " << a.work;
		fout.close();
		break;
	}
	case 1: {
		ofstream fout("2.txt");
		cin.clear();
		fout << a.b << " " << a.level << " " << a.work;
		fout.close();
		break;
	}
	case 2: {
		ofstream fout("3.txt");
		cin.clear();
		fout << a.b << " " << a.level << " " << a.work;
		fout.close();
		break;
	}
	case 3: {
		ofstream fout("4.txt");
		cin.clear();
		fout << a.b << " " << a.level << " " << a.work;
		fout.close();
		break;
	}
	case 4: {
		ofstream fout("5.txt");
		cin.clear();
		fout << a.b << " " << a.level << " " << a.work;
		fout.close();
		break;
	}
	case 5: {
		ofstream fout("6.txt");
		cin.clear();
		fout << a.b << " " << a.level << " " << a.work;
		fout.close();
		break;
	}
	case 6: {
		ofstream fout("7.txt");
		cin.clear();
		fout << a.b << " " << a.level << " " << a.work;
		fout.close();
		break;
	}
	case 7: {
		ofstream fout("8.txt");
		cin.clear();
		fout << a.b << " " << a.level << " " << a.work;
		fout.close();
		break;
	}
	case 8: {
		ofstream fout("9.txt");
		cin.clear();
		fout << a.b << " " << a.level << " " << a.work;
		fout.close();
		break;
	}
	case 9: {
		ofstream fout("10.txt");
		cin.clear();
		fout << a.b << " " << a.level << " " << a.work;
		fout.close();
		break;
	}
	default:
		break;
	}
}

/*진척도*/
void Progress() {
	ToDo sch[10];
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

/*일정 완료*/
void ScheduleComplete() {
	ToDo sch;
	int i;
	cout << "완료하실 일정 번호를 입력해주세요.>>";
	cin >> i;
	i = --i;
	inF(&sch, i);

	if (sch.b == 204) {
		cout << "일정이 없습니다." << endl;
	}
	else if (sch.b == false) {
		sch.b = true;
		cout << "완료 되었습니다." << endl;
	}
	else if (sch.b == true) {
		sch.b = false;
		cout << "취소 되었습니다." << endl;
	}
	outF(sch, i);
}

void inputlist() {
	ToDo abc;
	ToDo a[10];
	for (int i = 0; i < 10; i++) {
		inF(&abc, i);
		a[i].work = abc.work;
	}
}

/*메인 화면*/
void mainmemu() { // 메인화면 출력
	system("cls");//화면 클리어 
	system("mode con cols=100 lines=70"); //콘솔 100*70

	gotoxy(0, 5);
	//좌우 공백 17칸 100*70 기준
	cout << "                 ■■■■■■■   ■■■■■      ■■■■■■     ■■■■■      " << endl;
	cout << "                 ■    ■    ■ ■          ■    ■          ■ ■          ■    " << endl;
	cout << "                       ■       ■          ■    ■          ■ ■          ■    " << endl;
	cout << "                       ■       ■          ■    ■          ■ ■          ■    " << endl;
	cout << "                       ■       ■          ■    ■          ■ ■          ■    " << endl;
	cout << "                       ■       ■          ■    ■          ■ ■          ■    " << endl;
	cout << "                       ■       ■          ■    ■          ■ ■          ■    " << endl;
	cout << "                     ■■■       ■■■■■      ■■■■■■     ■■■■■      " << endl << endl << endl;
	cout << "                         ■■■         ■■■   ■■■■■   ■■■■■■■       " << endl;
	cout << "                           ■             ■   ■          ■ ■    ■    ■       " << endl;
	cout << "                           ■             ■   ■                   ■             " << endl;
	cout << "                           ■             ■     ■                 ■             " << endl;
	cout << "                           ■             ■       ■■■■         ■             " << endl;
	cout << "                           ■             ■               ■       ■             " << endl;
	cout << "                           ■             ■   ■          ■       ■             " << endl;
	cout << "                         ■■■■■■■ ■■■   ■■■■■       ■■■           " << endl << endl;
	cout << "                                        목표를 달성해봐요!                         " << endl;

	gotoxy(35, 36); cout << "■■■";
	gotoxy(35, 37); cout << "■    ■";
	gotoxy(35, 38); cout << "■    ■";
	gotoxy(35, 39); cout << "■    ■";
	gotoxy(35, 40); cout << "■■■  (일정)";

	gotoxy(50, 36); cout << "  ■■■";
	gotoxy(50, 37); cout << "■      ";
	gotoxy(50, 38); cout << "■      ";
	gotoxy(50, 39); cout << "■        ";
	gotoxy(50, 40); cout << "  ■■■ (달력)";


	gotoxy(0, 65);
	cout << "명령어>>";

}

/*서브 화면*/
void submemu() {
	system("cls");
	system("mode con: cols=100 lines=70");
	ToDo a[10];
	time_t timer = time(NULL);
	struct tm* t = localtime(&timer);
	struct tm {
		int tm_mday;
		int tm_mon;
		int tm_year;
	};

	for (int i = 0; i < 10; i++) {
		inF(&a[i], i);
	}

	cout << "\t\t\t\t\t" << to_string(t->tm_year - 100) << "." << to_string(t->tm_mon + 1) << "." << to_string(t->tm_mday) << "  오늘 할 일!" << endl;

	/*성취도*/
	Progress();
	cout << endl << endl;

	/*리스트*/
	for (int i = 0; i < 10; i++) {
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << setw(6) << "■" << endl;
		if (a[i].b != 204) {
			if (a[i].b == true) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
				cout << " " << a[i].level << setw(4);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << "■" ;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
				cout << a[i].work << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			}
			else if (a[i].b == false) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << " " << a[i].level << setw(4) << "■" << a[i].work << endl;
			}
		}
		else
			cout << setw(6) << "■" << endl;
		cout << setw(6) << "■" << endl;
	}
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;


	/*메뉴얼 명령어*/
	cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t" << "메뉴얼 명령어 : C";
	cout << "명령어 >>" << endl;
}

/*화면 전환 */
int submove();

/*화면 전환2*/
void move() {
	int num1 = 0; //화면이동 변수
	mainmemu();
	num1 = _getch(); // = system("pause"); 키 입력 받으면 이동
	switch (num1) {
	case 67: calendar(); break;		// 명령어 C 아스키 코드
	case 68: do { submove(); } while (submove() != 0); break;		// 명령어 D 아스키 코드
	case 99: calendar(); break;		// 명령어 c 아스키 코드
	case 100: do { submove(); } while (submove() != 0); break;		// 명령어 d 아스키 코드
	}
}

/*화면 전환*/
int submove() {
	int num2 = NULL; //화면이동 변수
	submemu();
	num2 = _getch();	//화면이동 입력
	if (num2 == 77 || num2 == 109) return 0;		// 메인메뉴로 이동
	switch (num2) {
	case 65: listadd(); break;		// 명령어 A 아스키 코드
	case 70: ScheduleComplete(); break;		// 명령어 F 아스키 코드
	case 68: listdelete(); break;		// 명령어 D 아스키 코드
	case 67: Manual(); break;		// 명령어 M 아스키 코드
	case 69: exit(0); break;		// 명령어 E 아스키 코드
	case 97: listadd(); break;		// 명령어 a 아스키 코드
	case 102: ScheduleComplete(); break;		// 명령어 f 아스키 코드
	case 100: listdelete(); break;		// 명령어 d 아스키 코드
	case 99: Manual(); break;		// 명령어 m 아스키 코드
	case 101: exit(0); break;		// 명령어 e 아스키 코드
	default: cout << "잘못된 명령어 입니다. 다시 입력해주세요"; break;
	}
}




/*메인 함수*/
int main() {
	system("title 일일 목록");
	while (true)
	{
		move();
	}

}