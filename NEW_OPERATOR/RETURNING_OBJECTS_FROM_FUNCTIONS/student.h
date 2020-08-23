#ifndef _STUDENT_H
#define _STUDENT_H

#include <iostream>

class Student{
    private:
        std::string name;
        std::string course;
        int age;
    private:
    public:
    public:
        Student();
        void set_name(std::string name);
        std::string get_name()const;
        void set_course(std::string course);
        std::string get_course()const;
        void set_age(int age);
        int get_age()const;
        ~Student();
};



#endif //_STUDENT_H