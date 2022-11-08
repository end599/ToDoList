#include<iostream>
#include<fstream> //파일 사용
#include<string> //getline() 사용
using namespace std;

class ToDo {
public:
	bool b = 0; //완료 여부 - 기본값 0
	int level = 0; //우선순위
	string work; //문자열 받기
};

void  ToDoadd() {
	ToDo Note;

	cout << "우선순위를 입력해 주세요 : ";
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
	}
		  break;
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
	}
		  break;
	case 4: {
		ofstream t("4.txt");
		if (t.is_open()) {
			cout << "내용을 입력해 주세요 : ";
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
			cout << "내용을 입력해 주세요 : ";
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
			cout << "내용을 입력해 주세요 : ";
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
			cout << "내용을 입력해 주세요 : ";
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
			cout << "내용을 입력해 주세요 : ";
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
			cout << "내용을 입력해 주세요 : ";
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
			cout << "내용을 입력해 주세요 : ";
			cin.clear();
			getline(cin, Note.work);
		}
		t << Note.b << " " << Note.level << " " << Note.work;
		t.close();
	}
		   break;
	default: cout << " 해당 순위로 설정 불가능 합니다. 1~10 사이의 숫자를 입력해주세요.";
		break;
	}

}

int main() {
	ToDoadd();
}