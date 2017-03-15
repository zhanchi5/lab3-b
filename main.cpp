#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"

using namespace std;

int main(int argc, char* argv[])
{
    unsigned int k,mark;


    string student_surname, student_name, student_second;
    string teacher_name, teacher_surname, teacher_second;
    // Оценки студента
    vector<int> scores;

    cout << "Введите фамилию студента:" << endl;
    cin >> student_surname;

    cout << "Введите имя студента:" << endl;
    cin >> student_name;

    cout << "Введите отчество студента:" <<endl;
    cin >> student_second;

    cout << "Введите количесво оценок:";
    cin >> k;

    for (unsigned int i =0; i < k; ++i)
    {
        cout << "Оценка:";
        cin >> mark;
        scores.push_back(mark);
    }


    student *stud = new student(student_surname, student_name, student_second, scores);

    cout << stud->get_full_name() << endl;
    cout << "Средний балл: " << stud->get_average_score() << endl;

    unsigned int teacher_work_time;
    cout << "Введите фамилию преподавателя:" << endl;
    cin >> teacher_surname;

    cout << "Введите имя преподавателя:" << endl;
    cin >> teacher_name;

    cout << "Введите отчество преподавателя:" <<endl;
    cin >> teacher_second;

    teacher *tch = new teacher(teacher_surname, teacher_name, teacher_second, teacher_work_time);


    cout << tch->get_full_name() << endl;
    cout << "Количество часов: " << tch->get_work_time() << endl;

    return 0;
}
