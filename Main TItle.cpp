#include<iostream>
#include<conio.h> //_getch() 함수는 사용자가 입력한 키에 대한 값을 아스키코드로 반환
#include <windows.h> //system() 함수 사용
#define SPACE 32
using namespace std;

void gotoxy(int x, int y) {
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void title() { // 메인화면 출력
	system("cls");//화면 클리어 
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

	gotoxy(41, 35); cout << "■          ■";
	gotoxy(41, 36); cout << "■■      ■■";
	gotoxy(41, 37); cout << "■  ■  ■  ■";
	gotoxy(41, 38); cout << "■    ■    ■";
	gotoxy(41, 39); cout << "■          ■";
	gotoxy(41, 40); cout << "■          ■(Space)";


	gotoxy(0, 65);
	cout << "달력으로 이동하기 위해서 스페이스바를 누르세요." << endl;

}

void Calendar(int a) { //달력 이동
	system("cls");
	cout << " 달력 이동 ";
}

void Menu(){
	int a; //달력이동 변수
	title();
	a = _getch(); //스페이스 입력받기
	Calendar(a);
}

int main() {
	Menu();
}