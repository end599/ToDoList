#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void ScheduleComplete(ScheduleRef sch){ // 일정 완료
    sch->completed = true; // 일정 값 변경

cout << endl;
cout << 완료 되었습니다.
cout << endl;
}