#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <string>
#include "time.h"
using namespace std;

int main() {
    /* ���� �޴� ��¥*/
    system("title ���� ���");
    system("mode con: cols=100 lines=70");
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);
    struct tm {
        int tm_mday;
        int tm_mon;
        int tm_year;
    };
    cout << "\t\t\t\t\t" << to_string(t->tm_year - 100) << "." << to_string(t->tm_mon + 1) << "." << to_string(t->tm_mday) << "  ���� �� ��!" << endl;


    /*���뵵*/
    cout << "\n\n\n\n" << endl;


    /*����Ʈ*/
    for (int i = 0; i < 10; i++) {
        cout << "���������������������������������������������������" << endl;
        cout << setw(8) << "��" << endl;
        cout << setw(8) << "��" << endl;
        cout << setw(8) << "��" << endl;
    }
    cout << "���������������������������������������������������" << endl;


    /*�޴��� ��ɾ�*/
    cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t" << "�޴��� ��ɾ� : �޴���";

}