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


int main() {
	ToDoadd();
	ToDodelete();
}