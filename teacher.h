//
// Created by oracle on 3/13/17.
//

#ifndef LAB3_B_TEACHER_H
#define LAB3_B_TEACHER_H

#include "human.h"
#include <string>


using namespace std;

class teacher : public human {
    // Конструктор класса teacher
public:
    teacher(
            string last_name,
            string name,
            string second_name,
            // Количество учебных часов за семетр у преподавателя
            unsigned int work_time
    ) : human(
            last_name,
            name,
            second_name
    ) {
        this->work_time = work_time;
    }

    // Получение количества учебных часов
    unsigned int get_work_time()
    {
        return this->work_time;
    }

private:
    // Учебные часы
    unsigned int work_time;
};

#endif //LAB3_B_TEACHER_H
