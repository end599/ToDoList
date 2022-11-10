#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <string>
#include "time.h"
#include <fstream>

using namespace std;


int main() 
    /* 서브 메뉴 날짜*/
{system("title 일일 목록");
    system("mode con: cols=100 lines=70");
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);
    struct tm {
        int tm_mday;
        int tm_mon;
        int tm_year;
    };

    {ifstream readFile;
    readFile.open("test.txt");    //파일 열기

    if (readFile.is_open())
    {
        while (!readFile.eof())
        {
            //1. istream의 getline.
            /*
            char tmp[256];
            readFile.getline(tmp, 256);
            cout << tmp << endl;    //지금은 읽은 문자열 바로 출력.
            */

            //2. std::getline.
            string str;
            getline(readFile, str);
            cout << str << endl;    //지금은 읽은 문자열 바로 출력.
        }
        readFile.close();    //파일 닫아줍니다.
    }
    return 0;
 };
    cout << "\t\t\t\t\t" << to_string(t->tm_year - 100) << "." << to_string(t->tm_mon + 1) << "." << to_string(t->tm_mday) << "  오늘 할 일!" << endl;


    /*성취도*/
    cout << "\n\n\n\n" << endl;


    /*리스트*/
    for (int i = 0; i < 10; i++) {
        cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
        cout << setw(8) << "■" << endl;
        cout << setw(8) << "■" << endl;
        cout << setw(8) << "■" << endl;
    }
    cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;


    /*메뉴얼 명령어*/
    cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t" << "메뉴얼 명령어 : 메뉴얼";

}
