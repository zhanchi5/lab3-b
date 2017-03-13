#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"

using namespace std;

int main(int argc, char* argv[])
{
    unsigned int n,k,mark;

   // cout << "Введите количество студентов: ";
    //cin >> n;


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

    // Добавление оценок студента в вектор
    cout << "Введите количесво оценок:";
    cin >> k;

    for (unsigned int i =0; i < k; ++i)
    {
        cout << "Оценка:";
        cin >> mark;
        scores.push_back(mark);
    }



    /*for (unsigned int i =0; i < n; ++i)
    {

    }*/


    // Создание объекта класса student
    student *stud = new student(student_surname, student_name, student_second, scores);

    // Вывод полного имени студента (используется унаследованный метод класса human)
    cout << stud->get_full_name() << endl;
    // Вывод среднего балла студента
    cout << "Средний балл: " << stud->get_average_score() << endl;

    // Количество учебных часов преподавателя
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