#include <iostream>
#include <fstream> //파일 사용
#include <string> //getline() 사용
using namespace std;

class ToDo {
public:
	bool b = 0; //완료 여부 - 기본값 0
	int level = 0; //일정 순서
	string work; //문자열 받기
};

ToDo Note;

void  ToDoadd() {

	cout << "생성할 일정의 순위를 입력해 주세요 : ";
	cin >> Note.level;
	cin.ignore(); //위의 cin 버퍼 지우기 안쓰면 getline()이 돌아가지 않음.

	switch (Note.level) {
	case 1: {
		ofstream t("1.txt");	//파일 쓰기 준비 and "1.txt"없으면 생성, 있으면 열기
		if (t.is_open()) {		//파일이 열려 있으면~
			cout << "내용을 입력해 주세요 : ";
			cin.clear();			  //getline 버퍼 초기화(전체 버퍼 초기화)
			getline(cin, Note.work);   // 공백 포함 문자열 쓰기
		}
		t << Note.b << " " << Note.level << " " << Note.work; //해당 파일에 b level work 순서대로 입력
		t.close();	//파일 닫기
		break;
	}

	case 2:
	{
		ofstream t("2.txt");
		if (t.is_open()) {
			cout << "내용을 입력해 주세요 : ";
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
			cout << "내용을 입력해 주세요 : ";
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
			cout << "내용을 입력해 주세요 : ";
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
			cout << "내용을 입력해 주세요 : ";
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
			cout << "내용을 입력해 주세요 : ";
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
			cout << "내용을 입력해 주세요 : ";
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
			cout << "내용을 입력해 주세요 : ";
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
			cout << "내용을 입력해 주세요 : ";
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
			cout << "내용을 입력해 주세요 : ";
			cin.clear();
			getline(cin, Note.work);
		}
		t << Note.b << " " << Note.level << " " << Note.work;
		t.close();
		break;
	}
	default: cout << "생성 가능한 일정의 개수를 초과했습니다. 1~10 사이의 숫자를 입력해주세요.";
		break;
	}

}

void ToDodelete() {

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
		if (txt1.fail()) {		// 1.txt가 없는 파일 시 종료
			cout << "해당 일정은 없습니다.";
			break;
		}
		else {
			ofstream t("1.txt");	//파일 있으면 열기
			if (t.is_open()) {		//파일이 열려 있으면~
				cin.clear();			  //getline 버퍼 초기화(전체 버퍼 초기화)
			}
			t.close();	//파일 닫기
			break;
		}
	}
	case 2: {
		if (txt2.fail()) {		// 2.txt가 없는 파일 시 종료
			cout << "해당 일정은 없습니다.";
			break;
		}
		else {
			ofstream t("2.txt");	//파일 있으면 열기
			if (t.is_open()) {		//파일이 열려 있으면~
				cin.clear();			  //getline 버퍼 초기화(전체 버퍼 초기화)
			}
			t.close();	//파일 닫기
			break;
		}
	}
	case 3: {
		if (txt3.fail()) {		// 3.txt가 없는 파일 시 종료
			cout << "해당 일정은 없습니다.";
			break;
		}
		else {
			ofstream t("3.txt");	//파일 있으면 열기
			if (t.is_open()) {		//파일이 열려 있으면~
				cin.clear();			  //getline 버퍼 초기화(전체 버퍼 초기화)
			}
			t.close();	//파일 닫기
			break;
		}
	}
	case 4: {
		if (txt4.fail()) {		// 4.txt가 없는 파일 시 종료
			cout << "해당 일정은 없습니다.";
			break;
		}
		else {
			ofstream t("4.txt");	//파일 있으면 열기
			if (t.is_open()) {		//파일이 열려 있으면~
				cin.clear();			  //getline 버퍼 초기화(전체 버퍼 초기화)
			}
			t.close();	//파일 닫기
			break;
		}
	}
	case 5: {
		if (txt5.fail()) {		// 5.txt가 없는 파일 시 종료
			cout << "해당 일정은 없습니다.";
			break;
		}
		else {
			ofstream t("5.txt");	//파일 있으면 열기
			if (t.is_open()) {		//파일이 열려 있으면~
				cin.clear();			  //getline 버퍼 초기화(전체 버퍼 초기화)
			}
			t.close();	//파일 닫기
			break;
		}
	}
	case 6: {
		if (txt6.fail()) {		// 6.txt가 없는 파일 시 종료
			cout << "해당 일정은 없습니다.";
			break;
		}
		else {
			ofstream t("6.txt");	//파일 있으면 열기
			if (t.is_open()) {		//파일이 열려 있으면~
				cin.clear();			  //getline 버퍼 초기화(전체 버퍼 초기화)
			}
			t.close();	//파일 닫기
			break;
		}
	}
	case 7: {
		if (txt7.fail()) {		// 7.txt가 없는 파일 시 종료
			cout << "해당 일정은 없습니다.";
			break;
		}
		else {
			ofstream t("7.txt");	//파일 있으면 열기
			if (t.is_open()) {		//파일이 열려 있으면~
				cin.clear();			  //getline 버퍼 초기화(전체 버퍼 초기화)
			}
			t.close();	//파일 닫기
			break;
		}
	}
	case 8: {
		if (txt8.fail()) {		// 8.txt가 없는 파일 시 종료
			cout << "해당 일정은 없습니다.";
			break;
		}
		else {
			ofstream t("8.txt");	//파일 있으면 열기
			if (t.is_open()) {		//파일이 열려 있으면~
				cin.clear();			  //getline 버퍼 초기화(전체 버퍼 초기화)
			}
			t.close();	//파일 닫기
			break;
		}
	}
	case 9: {
		if (txt9.fail()) {		// .9txt가 없는 파일 시 종료
			cout << "해당 일정은 없습니다.";
			break;
		}
		else {
			ofstream t("9.txt");	//파일 있으면 열기
			if (t.is_open()) {		//파일이 열려 있으면~
				cin.clear();			  //getline 버퍼 초기화(전체 버퍼 초기화)
			}
			t.close();	//파일 닫기
			break;
		}
	}
	case 10: {
		if (txt10.fail()) {		// 10.txt가 없는 파일 시 종료
			cout << "해당 일정은 없습니다.";
			break;
		}
		else {
			ofstream t("10.txt");	//파일 있으면 열기
			if (t.is_open()) {		//파일이 열려 있으면~
				cin.clear();			  //getline 버퍼 초기화(전체 버퍼 초기화)
			}
			t.close();	//파일 닫기
			break;
		}
	}
	default: cout << "잘못된 입력입니다. 올바른 일정 번호를 입력해주세요.";		// 잘못된 입력 값
		break;
	}
}


int main() {
	ToDoadd();
	ToDodelete();
}