#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <windows.h> //system() 함수 사용
#include <fstream> //파일 사용
#include <string> //getline() 사용
#include <conio.h> //_getch() 함수는 사용자가 입력한 키에 대한 값을 아스키코드로 반환
#include <ctime>

using namespace std;

class ToDo {
public:
	bool b; //완료 여부 - 기본값 0
	int level = 0; //우선순위
	string work; //문자열 받기
};

ToDo Note;		// 일정을 담당하는 ToDo 클래스 타입의 Note 객체 생성

void outF(ToDo, int);	//일정 추가 사용을 위해 선언
int submove();		// 서브 메뉴 화면 이동 선언

void gotoxy(int x, int y) {
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
/*일정 추가*/
void listadd() {
	cout << "생성할 일정의 번호를 입력해 주세요 >> ";
	cin >> Note.level;		// 일정 번호 입력
	cin.ignore(); //위의 cin 버퍼 지우기 안쓰면 getline()이 돌아가지 않음.

	if (cin.fail()) { // 정상적인 입력이 진행되지 않으면
		cout << "숫자를 입력해 주세요!";
		cin.clear(); //에러 상태를 취소
		cin.ignore(256, '\n'); //입력버퍼에 남아있는 잘못된 값들을 지움
		Sleep(1500);
	}
	else {
		switch (Note.level) {
		case 1: {
			ifstream t1("1.txt");
			t1.seekg(0, ios::end); // beg = 시작점, cur = 중간 지점, end =끝지점
			if (t1.tellg() > 4) { // tellg() 파일 크기
				cout << "이미 내용 입력되어 있습니다. \n새로운 내용 입력 : 'space' \t\t\t취소 : 아무 키" << endl;
				int a = _getch();
				if (a == 32) {
					cout << "내용을 입력해 주세요 >> ";
					cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
					getline(cin, Note.work);   // 공백 포함 문자열 쓰기
					Note.b = 0;
					outF(Note, 0);
					t1.close();
					cout << "일정 내용이 수정되었습니다!!";
					Sleep(1500);		// 1500ms(1.5초) 정지
				}
				break;
			}
			else {
				cout << "내용을 입력해 주세요 >> ";
				cin.clear();           //getline 버퍼 초기화(전체 버퍼 초기화)
				getline(cin, Note.work);   // 공백 포함 문자열 쓰기
				Note.b = 0;
				outF(Note, 0);
				t1.close();	//파일 닫기
				cout << "일정이 정상적으로 생성 되었습니다!!";
				Sleep(1500);		// 1500ms(1.5초) 정지
				break;
			}
		}
		case 2: {
			ifstream t1("2.txt");
			t1.seekg(0, ios::end);
			if (t1.tellg() > 4) {
				cout << "이미 내용 입력되어 있습니다. \n새로운 내용 입력 : 'space' \t\t\t취소 : 아무 키" << endl;
				int a = _getch();
				if (a == 32) {
					cout << "내용을 입력해 주세요 >> ";
					cin.clear();
					getline(cin, Note.work);
					Note.b = 0;
					outF(Note, 1);
					t1.close();
					cout << "일정 내용이 수정되었습니다!!";
					Sleep(1500);
				}
				break;
			}
			else {
				cout << "내용을 입력해 주세요 >> ";
				cin.clear();
				getline(cin, Note.work);
				Note.b = 0;
				outF(Note, 1);
				t1.close();
				cout << "일정이 정상적으로 생성 되었습니다!!";
				Sleep(1500);
				break;
			}
		}
		case 3: {
			ifstream t1("3.txt");
			t1.seekg(0, ios::end);
			if (t1.tellg() > 4) {
				cout << "이미 내용 입력되어 있습니다. \n새로운 내용 입력 : 'space' \t\t\t취소 : 아무 키" << endl;
				int a = _getch();
				if (a == 32) {
					cout << "내용을 입력해 주세요 >> ";
					cin.clear();
					getline(cin, Note.work);
					Note.b = 0;
					outF(Note, 2);
					t1.close();
					cout << "일정 내용이 수정되었습니다!!";
					Sleep(1500);
				}
				break;
			}
			else {
				cout << "내용을 입력해 주세요 >> ";
				cin.clear();
				getline(cin, Note.work);
				Note.b = 0;
				outF(Note, 2);
				t1.close();
				cout << "일정이 정상적으로 생성 되었습니다!!";
				Sleep(1500);
				break;
			}
		}
		case 4: {
			ifstream t1("4.txt");
			t1.seekg(0, ios::end);
			if (t1.tellg() > 4) {
				cout << "이미 내용 입력되어 있습니다. \n새로운 내용 입력 : 'space' \t\t\t취소 : 아무 키" << endl;
				int a = _getch();
				if (a == 32) {
					cout << "내용을 입력해 주세요 >> ";
					cin.clear();
					getline(cin, Note.work);
					Note.b = 0;
					outF(Note, 3);
					t1.close();
					cout << "일정 내용이 수정되었습니다!!";
					Sleep(1500);
				}
				break;
			}
			else {
				cout << "내용을 입력해 주세요 >> ";
				cin.clear();
				getline(cin, Note.work);
				Note.b = 0;
				outF(Note, 3);
				t1.close();
				cout << "일정이 정상적으로 생성 되었습니다!!";
				Sleep(1500);
				break;
			}
		}
		case 5: {
			ifstream t1("5.txt");
			t1.seekg(0, ios::end);
			if (t1.tellg() > 4) {
				cout << "이미 내용 입력되어 있습니다. \n새로운 내용 입력 : 'space' \t\t\t취소 : 아무 키" << endl;
				int a = _getch();
				if (a == 32) {
					cout << "내용을 입력해 주세요 >> ";
					cin.clear();
					getline(cin, Note.work);
					Note.b = 0;
					outF(Note, 4);
					t1.close();
					cout << "일정 내용이 수정되었습니다!!";
					Sleep(1500);
				}
				break;
			}
			else {
				cout << "내용을 입력해 주세요 >> ";
				cin.clear();
				getline(cin, Note.work);
				Note.b = 0;
				outF(Note, 4);
				t1.close();
				cout << "일정이 정상적으로 생성 되었습니다!!";
				Sleep(1500);
				break;
			}
		}
		case 6: {
			ifstream t1("6.txt");
			t1.seekg(0, ios::end);
			if (t1.tellg() > 4) {
				cout << "이미 내용 입력되어 있습니다. \n새로운 내용 입력 : 'space' \t\t\t취소 : 아무 키" << endl;
				int a = _getch();
				if (a == 32) {
					cout << "내용을 입력해 주세요 >> ";
					cin.clear();
					getline(cin, Note.work);
					Note.b = 0;
					outF(Note, 5);
					t1.close();
					cout << "일정 내용이 수정되었습니다!!";
					Sleep(1500);
				}
				break;
			}
			else {
				cout << "내용을 입력해 주세요 >> ";
				cin.clear();
				getline(cin, Note.work);
				Note.b = 0;
				outF(Note, 5);
				t1.close();
				cout << "일정이 정상적으로 생성 되었습니다!!";
				Sleep(1500);
				break;
			}
		}
		case 7: {
			ifstream t1("7.txt");
			t1.seekg(0, ios::end);
			if (t1.tellg() > 4) {
				cout << "이미 내용 입력되어 있습니다. \n새로운 내용 입력 : 'space' \t\t\t취소 : 아무 키" << endl;
				int a = _getch();
				if (a == 32) {
					cout << "내용을 입력해 주세요 >> ";
					cin.clear();
					getline(cin, Note.work);
					Note.b = 0;
					outF(Note, 6);
					t1.close();
					cout << "일정 내용이 수정되었습니다!!";
					Sleep(1500);
				}
				break;
			}
			else {
				cout << "내용을 입력해 주세요 >> ";
				cin.clear();
				getline(cin, Note.work);
				Note.b = 0;
				outF(Note, 6);
				t1.close();
				cout << "일정이 정상적으로 생성 되었습니다!!";
				Sleep(1500);
				break;
			}
		}
		case 8: {
			ifstream t1("8.txt");
			t1.seekg(0, ios::end);
			if (t1.tellg() > 4) {
				cout << "이미 내용 입력되어 있습니다. \n새로운 내용 입력 : 'space' \t\t\t취소 : 아무 키" << endl;
				int a = _getch();
				if (a == 32) {
					cout << "내용을 입력해 주세요 >> ";
					cin.clear();
					getline(cin, Note.work);
					Note.b = 0;
					outF(Note, 7);
					t1.close();
					cout << "일정 내용이 수정되었습니다!!";
					Sleep(1500);
				}
				break;
			}
			else {
				cout << "내용을 입력해 주세요 >> ";
				cin.clear();
				getline(cin, Note.work);
				Note.b = 0;
				outF(Note, 7);
				t1.close();
				cout << "일정이 정상적으로 생성 되었습니다!!";
				Sleep(1500);
				break;
			}
		}
		case 9: {
			ifstream t1("9.txt");
			t1.seekg(0, ios::end);
			if (t1.tellg() > 4) {
				cout << "이미 내용 입력되어 있습니다. \n새로운 내용 입력 : 'space' \t\t\t취소 : 아무 키" << endl;
				int a = _getch();
				if (a == 32) {
					cout << "내용을 입력해 주세요 >> ";
					cin.clear();
					getline(cin, Note.work);
					Note.b = 0;
					outF(Note, 8);
					t1.close();
					cout << "일정 내용이 수정되었습니다!!";
					Sleep(1500);
				}
				break;
			}
			else {
				cout << "내용을 입력해 주세요 >> ";
				cin.clear();
				getline(cin, Note.work);
				Note.b = 0;
				outF(Note, 8);
				t1.close();
				cout << "일정이 정상적으로 생성 되었습니다!!";
				Sleep(1500);
				break;
			}
		}
		case 10: {
			ifstream t1("10.txt");
			t1.seekg(0, ios::end);
			if (t1.tellg() > 4) {
				cout << "이미 내용 입력되어 있습니다. \n새로운 내용 입력 : 'space' \t\t\t취소 : 아무 키" << endl;
				int a = _getch();
				if (a == 32) {
					cout << "내용을 입력해 주세요 >> ";
					cin.clear();
					getline(cin, Note.work);
					Note.b = 0;
					outF(Note, 9);
					t1.close();
					cout << "일정 내용이 수정되었습니다!!";
					Sleep(1500);
				}
				break;
			}
			else {
				cout << "내용을 입력해 주세요 >> ";
				cin.clear();
				getline(cin, Note.work);
				Note.b = 0;
				outF(Note, 9);
				t1.close();
				cout << "일정이 정상적으로 생성 되었습니다!!";
				Sleep(1500);
				break;
			}
		}
		default: cout << "생성 가능한 일정의 개수를 초과했습니다. 1~10 사이의 숫자를 입력해주세요.";
			break;
		}
	}
}/*일정 추가*/

/*일정 삭제*/
void listdelete() {

	int delnum;		// 삭제할 일정 번호
	
	cout << "\n\n삭제하고 싶은 일정의 번호를 입력하세요 >> ";

	cin >> delnum;		// 삭제할 일정 번호 입력

	if (cin.fail()) { // 정상적인 입력이 진행되지 않으면
		cout << "숫자를 입력해 주세요!" << endl;
		cin.clear(); //에러 상태를 취소
		cin.ignore(256, '\n'); //입력버퍼에 남아있는 잘못된 값들을 지움
	}

	switch (delnum) {
	case 1: {
		ifstream fin("1.txt");		// 파일 있으면 열기
		fin.seekg(0, ios::end);		// 맨 뒷부분 0번째 자리부터 찾기		
		if (fin.fail() || (fin.tellg() < 4)) {		// 1.txt가 없거나 파일 내용이 비어 있다면
			cout << "해당 일정은 없습니다.";
			Sleep(1500);		// 1500ms(1.5초) 정지
			fin.close();		// 파일 닫기
			break;
		}
		else {
			ofstream fout("1.txt");	// 파일 있으면 열기
			if (fout.is_open()) {		// 파일이 열려 있으면~
				cin.clear();			  // getline 버퍼 초기화(전체 버퍼 초기화)
			}
			fout.close();	//파일 닫기
			cout << "해당 일정이 정상적으로 삭제 되었습니다!";
			Sleep(1500);		// 1500ms(1.5초) 정지
			fout.close();
			break;
		}
		
	}
	case 2: {
		ifstream fin("2.txt");
		fin.seekg(0, ios::end);
		if (fin.fail() || (fin.tellg() < 4)) {
			cout << "해당 일정은 없습니다.";
			Sleep(1500);		// 1500ms(1.5초) 정지
			fin.close();
			break;
		}
		else {
			ofstream fout("2.txt");
			if (fout.is_open()) {
				cin.clear();
			}
			fout.close();
			cout << "해당 일정이 정상적으로 삭제 되었습니다!";
			Sleep(1500);
			fout.close();
			break;
		}
	}
	case 3: {
		ifstream fin("3.txt");
		fin.seekg(0, ios::end);
		if (fin.fail() || (fin.tellg() < 4)) {
			cout << "해당 일정은 없습니다.";
			Sleep(1500);		// 1500ms(1.5초) 정지
			fin.close();
			break;
		}
		else {
			ofstream fout("3.txt");
			if (fout.is_open()) {
				cin.clear();
			}
			fout.close();
			cout << "해당 일정이 정상적으로 삭제 되었습니다!";
			Sleep(1500);
			fout.close();
			break;
		}
	}
	case 4: {
		ifstream fin("4.txt");
		fin.seekg(0, ios::end);
		if (fin.fail() || (fin.tellg() < 4)) {
			cout << "해당 일정은 없습니다.";
			Sleep(1500);		// 1500ms(1.5초) 정지
			fin.close();
			break;
		}
		else {
			ofstream fout("4.txt");
			if (fout.is_open()) {
				cin.clear();
			}
			fout.close();
			cout << "해당 일정이 정상적으로 삭제 되었습니다!";
			Sleep(1500);
			fout.close();
			break;
		}
	}
	case 5: {
		ifstream fin("5.txt");
		fin.seekg(0, ios::end);
		if (fin.fail() || (fin.tellg() < 4)) {
			cout << "해당 일정은 없습니다.";
			Sleep(1500);		// 1500ms(1.5초) 정지
			fin.close();
			break;
		}
		else {
			ofstream fout("5.txt");
			if (fout.is_open()) {
				cin.clear();
			}
			fout.close();
			cout << "해당 일정이 정상적으로 삭제 되었습니다!";
			Sleep(1500);
			fout.close();
			break;
		}
	}
	case 6: {
		ifstream fin("6.txt");
		fin.seekg(0, ios::end);
		if (fin.fail() || (fin.tellg() < 4)) {
			cout << "해당 일정은 없습니다.";
			Sleep(1500);		// 1500ms(1.5초) 정지
			fin.close();
			break;
		}
		else {
			ofstream fout("6.txt");
			if (fout.is_open()) {
				cin.clear();
			}
			fout.close();
			cout << "해당 일정이 정상적으로 삭제 되었습니다!";
			Sleep(1500);
			fout.close();
			break;
		}
	}
	case 7: {
		ifstream fin("7.txt");
		fin.seekg(0, ios::end);
		if (fin.fail() || (fin.tellg() < 4)) {
			cout << "해당 일정은 없습니다.";
			Sleep(1500);		// 1500ms(1.5초) 정지
			fin.close();
			break;
		}
		else {
			ofstream fout("7.txt");
			if (fout.is_open()) {
				cin.clear();
			}
			fout.close();
			cout << "해당 일정이 정상적으로 삭제 되었습니다!";
			Sleep(1500);
			fout.close();
			break;
		}
	}
	case 8: {
		ifstream fin("8.txt");
		fin.seekg(0, ios::end);
		if (fin.fail() || (fin.tellg() < 4)) {
			cout << "해당 일정은 없습니다.";
			Sleep(1500);		// 1500ms(1.5초) 정지
			fin.close();
			break;
		}
		else {
			ofstream fout("8.txt");
			if (fout.is_open()) {
				cin.clear();
			}
			fout.close();
			cout << "해당 일정이 정상적으로 삭제 되었습니다!";
			Sleep(1500);
			fout.close();
			break;
		}
	}
	case 9: {
		ifstream fin("9.txt");
		fin.seekg(0, ios::end);
		if (fin.fail() || (fin.tellg() < 4)) {
			cout << "해당 일정은 없습니다.";
			Sleep(1500);		// 1500ms(1.5초) 정지
			fin.close();
			break;
		}
		else {
			ofstream fout("9.txt");
			if (fout.is_open()) {
				cin.clear();
			}
			fout.close();
			cout << "해당 일정이 정상적으로 삭제 되었습니다!";
			Sleep(1500);
			fout.close();
			break;
		}
	}
	case 10: {
		ifstream fin("10.txt");
		fin.seekg(0, ios::end);
		if (fin.fail() || (fin.tellg() < 4)) {
			cout << "해당 일정은 없습니다.";
			Sleep(1500);		// 1500ms(1.5초) 정지
			fin.close();
			break;
		}
		else {
			ofstream fout("10.txt");
			if (fout.is_open()) {
				cin.clear();
			}
			fout.close();
			cout << "해당 일정이 정상적으로 삭제 되었습니다!";
			Sleep(1500);
			fout.close();
			break;
		}
	}
	default:
		cout << "잘못된 입력입니다. 올바른 일정 번호를 입력해주세요.";		// 잘못된 입력 값
		Sleep(1500);
		break;
	}

}

/*캘린더 UI*/
void calendar() {
	system("title 달력");		// 콘솔 창 제목 수정
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
	system("title 매뉴얼");		// 콘솔 창 제목 수정
	system("cls");		// 화면 클리어
	system(" mode con lines=70 cols=100");		// 콘솔 70 * 100
	//cout << "□■■■□■■■■■□□■■■■■□□■■■■■○○■■■■■□□■■■■■□□■■■■■□■■■□" << endl;
	int manualnum = 0;

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
	manualnum = _getch();
}

/*일정 값 가져오기*/
void inF(ToDo* a, int i) {
	char t;
	switch (i) {
	case 0: {
		ifstream fin("1.txt");		//파일 열기
		fin >> a->b >> t >> a->level >> t;		//값 받아오기
		getline(fin, a->work);	//값 받아오기(문자열)
		fin.close();		//파일 닫기
		break;
	}
	case 1: {
		ifstream fin("2.txt");
		fin >> a->b >> t >> a->level >> t;
		getline(fin, a->work);
		fin.close();
		break;
	}
	case 2: {
		ifstream fin("3.txt");
		fin >> a->b >> t >> a->level >> t;
		getline(fin, a->work);
		fin.close();
		break;
	}
	case 3: {
		ifstream fin("4.txt");
		fin >> a->b >> t >> a->level >> t;
		getline(fin, a->work);
		fin.close();
		break;
	}
	case 4: {
		ifstream fin("5.txt");
		fin >> a->b >> t >> a->level >> t;
		getline(fin, a->work);
		fin.close();
		break;
	}
	case 5: {
		ifstream fin("6.txt");
		fin >> a->b >> t >> a->level >> t;
		getline(fin, a->work);
		fin.close();
		break;
	}
	case 6: {
		ifstream fin("7.txt");
		fin >> a->b >> t >> a->level >> t;
		getline(fin, a->work);
		fin.close();
		break;
	}
	case 7: {
		ifstream fin("8.txt");
		fin >> a->b >> t >> a->level >> t;
		getline(fin, a->work);
		fin.close();
		break;
	}
	case 8: {
		ifstream fin("9.txt");
		fin >> a->b >> t >> a->level >> t;
		getline(fin, a->work);
		fin.close();
		break;
	}
	case 9: {
		ifstream fin("10.txt");
		fin >> a->b >> t >> a->level >> t;
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
		ofstream fout("1.txt");		//파일 열기
		cin.clear();		//버퍼 초기화
		fout << a.b << "/" << a.level << "/" << a.work;		//파일 저장
		fout.close();		//파일 닫기
		break;
	}
	case 1: {
		ofstream fout("2.txt");
		cin.clear();
		fout << a.b << "/" << a.level << "/" << a.work;
		fout.close();
		break;
	}
	case 2: {
		ofstream fout("3.txt");
		cin.clear();
		fout << a.b << "/" << a.level << "/" << a.work;
		fout.close();
		break;
	}
	case 3: {
		ofstream fout("4.txt");
		cin.clear();
		fout << a.b << "/" << a.level << "/" << a.work;
		fout.close();
		break;
	}
	case 4: {
		ofstream fout("5.txt");
		cin.clear();
		fout << a.b << "/" << a.level << "/" << a.work;
		fout.close();
		break;
	}
	case 5: {
		ofstream fout("6.txt");
		cin.clear();
		fout << a.b << "/" << a.level << "/" << a.work;
		fout.close();
		break;
	}
	case 6: {
		ofstream fout("7.txt");
		cin.clear();
		fout << a.b << "/" << a.level << "/" << a.work;
		fout.close();
		break;
	}
	case 7: {
		ofstream fout("8.txt");
		cin.clear();
		fout << a.b << "/" << a.level << "/" << a.work;
		fout.close();
		break;
	}
	case 8: {
		ofstream fout("9.txt");
		cin.clear();
		fout << a.b << "/" << a.level << "/" << a.work;
		fout.close();
		break;
	}
	case 9: {
		ofstream fout("10.txt");
		cin.clear();
		fout << a.b << "/" << a.level << "/" << a.work;
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
void listcomplete() {
	ToDo sch;		// 일정을 읽어올 ToDo 클래스 타입 객체 생성
	int i;		// 완료 번호
	cout << "완료하실 일정 번호를 입력해주세요 >> ";
	cin >> i;
	if (cin.fail()) { // 정상적인 입력이 진행되지 않으면
		cout << "숫자를 입력해 주세요!";
		cin.clear(); //에러 상태를 취소
		cin.ignore(256, '\n'); //입력버퍼에 남아있는 잘못된 값들을 지움
		Sleep(1500);
	}
	
	else {
		i = --i;		// inF switch~case문 이용을 위해 전위감소연산자
		inF(&sch, i);		// 일정 txt 파일 내용 읽어오기
		if (sch.b == 204) {		// 완료 여부 값이 공백이면
			cout << "일정이 없습니다!" << endl;
			Sleep(1500);		// 1500ms(1.5초) 정지
		}
		else if (sch.b == false) {		// 완료 여부 0(미완료)이면
			sch.b = true;		// 완료 여부 true(1)
			cout << "완료 되었습니다!!" << endl;
			Sleep(1500);
			outF(sch, i);		// 수정된 txt 파일 내용 덮어쓰기
		}
		else if (sch.b == true) {		// 완료 여부 1(완료)이면
			sch.b = false;		// 완료 여부 false(0)
			cout << "취소 되었습니다!!" << endl;
			Sleep(1500);
			outF(sch, i);
		}
	}
}

/*메인 화면*/
void mainmenu() {
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
void submenu() {
	system("cls");		// 화면 클리어
	system("mode con: cols=100 lines=70");		// 콘솔 100*70

	/* 일정 */
	ToDo a[10];		// ToDo 타입의 객체 배열 선언
	for (int i = 0; i < 10; i++) inF(&a[i], i);

	/*사용자 시스템 날짜*/
	time_t timer = time(NULL);		// timer에 유닉스 타임이후 지금까지의 초단위 시간을 저장
	struct tm* t = localtime(&timer);		//  현재 시간을 tm 구조체 포인터 t에 저장
	struct tm {
		int tm_mday;	// 1일부터 시작 [0, 31]
		int tm_mon;		// 1월부터 시작 [0, 11]
		int tm_year;	// 1970년 부터 시작해서 +1900을 해야 현재년도 출력
	};
	cout << "\t\t\t\t\t" << to_string(t->tm_year - 100) << "." << to_string(t->tm_mon + 1) << "." << to_string(t->tm_mday) << "  오늘 할 일!" << endl;

	/*일정 성취도*/
	Progress();
	cout << endl << endl;

	/*일정 목록*/
	for (int i = 0; i < 10; i++) {
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << setw(6) << "■" << endl;
		if (a[i].b != 204) {			// 일정 완료가 공백이 아니고
			if (a[i].b == true) {		// 완료 상태이면
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);		// 콘솔 글자 색 변경
				if (i != 9) {
					cout << " " << a[i].level << setw(4);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
					cout << "■";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
					cout << a[i].work << endl;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				}
				else {
					cout << " " << a[i].level << setw(3);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
					cout << "■";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
					cout << a[i].work << endl;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				}
			}
			else if (a[i].b == false) {		// 미완료 상태이면
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				if (i == 9) { cout << " " << a[i].level << setw(3) << "■" << a[i].work << endl; }
				else { cout << " " << a[i].level << setw(4) << "■" << a[i].work << endl; }
			}
		}
		else		// 공백이면 == 일정이 없다면
			cout << setw(6) << "■" << endl;
		cout << setw(6) << "■" << endl;
	}
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;


	/*메뉴얼 명령어*/
	cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t" << "메뉴얼 명령어 : C";
	cout << "명령어 >>" << endl;
}

/*화면 전환2*/
void move() {
	int num1 = 0; //화면이동 변수
	mainmenu();
	num1 = _getch(); // = system("pause"); 키 입력 받으면 이동
	switch (num1) {
	case 67: calendar(); break;		// 명령어 C 아스키 코드
	case 68: while (true)  { if (submove() == 0) { break; }} break;		// 명령어 D 아스키 코드, 메인 메뉴 이동 전까지 submove에서 무한 반복
	case 99: calendar(); break;		// 명령어 c 아스키 코드
	case 100: while (true) { if (submove() == 0) { break; }} break;		// 명령어 d 아스키 코드
	}
}

/*화면 전환*/
int submove() {
	int num2 = 0; //화면이동 변수
	system("title 일일 목록");		// 콘솔 창 제목 수정
	submenu();

	num2 = _getch();	// 화면 이동 값 입력

	switch (num2) {
	case 65: listadd(); break;		// 명령어 A 아스키 코드
	case 67: Manual();  break;		// 명령어 C 아스키 코드
	case 68: listdelete(); break;		// 명령어 D 아스키 코드
	case 69: exit(0); break;		// 명령어 E 아스키 코드
	case 70: listcomplete(); break;		// 명령어 F 아스키 코드
	case 77: return 0;		// 명령어 M 아스키 코드

	case 97: listadd(); break;		// 명령어 a 아스키 코드
	case 99: Manual(); break;		// 명령어 c 아스키 코드
	case 100: listdelete(); break;		// 명령어 d 아스키 코드
	case 101: exit(0); break;		// 명령어 e 아스키 코드
	case 102: listcomplete(); break;		// 명령어 f 아스키 코드
	case 109: return 0;		// 명령어 m 아스키 코드
	default: cout << "잘못된 명령어입니다. 아무 키나 입력하세요 >> "; num2 = _getch(); break;
	}
}



/*메인 함수*/
int main() {
	while (true)
	{
		system("title TO DO LIST");		// 콘솔 창 제목 수정
		move();
	}

}