#include <iostream>
#include<stdio.h>
#include <stdlib.h>

using namespace std;

typedef struct ToDo todo;

struct ToDo {
    char data[100];
    todo* link;
    int count;
};

void fixcount();

todo* start = NULL;
void delToDo() {
    //system("cls");
    int d;
    todo* temp1;
    todo* temp;

    cout << endl;
    cout << "�����ϰ� ���� ������ ��ȣ�� �Է��ϼ��� : ";
    cout << endl;

    cin >> d;

    temp1 = start;
    temp = start->link;

    while (1) {
        if (temp1->count == d) {
            start = start->link;
            free(temp1); // �������� �Ҵ��� �޸� ����
            fixcount();
            break;
        }
        if (temp->count == d) {
            temp1->link = temp->link;
            free(temp);
            fixcount();
            break;
        }
        else {
            temp1 = temp;
            temp = temp->link;
        }
    }
    // system("pause");
}

int main()
{
    int choice;
    while (1) {
        //system("color 3F");
        //system("cls");

        cout << endl;
        cout << "3. ���� ����";
        cout << endl << endl;
        cout << "�޴� ���� : ";

        cin >> choice;

        switch (choice) 
        case 3:
            delToDo();
            break;
        }
 }

void fixcount() {
    todo* temp;

    int i = 1;
    temp = start; // delete �Լ����� ������ ��
    while (temp != NULL) {
        temp->count = i;
        i++;
        temp = temp->link;
    }
}

