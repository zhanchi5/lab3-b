//
// Created by oracle on 3/13/17.
//

#ifndef LAB3_B_HUMAN_H_H
#define LAB3_B_HUMAN_H_H

#include <string>
#include <sstream>

using namespace std;

class human {
public:
    // Конструктор класса human
    human(string last_name, string name, string second_name)
    {
        this->last_name = last_name;
        this->name = name;
        this->second_name = second_name;
    }

    // Получение ФИО человека
    string get_full_name()
    {
        ostringstream full_name;
        full_name << this->last_name << " "
                  << this->name << " "
                  << this->second_name;
        return full_name.str();
    }

private:
    string name; // имя
    string last_name; // фамилия
    string second_name; // отчество
};


#endif //LAB3_B_HUMAN_H_H
