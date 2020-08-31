#ifndef _STUDENT_H
#define _STUDENT_H

#include <iostream>
class Student{
    private:
    private:
        std::string registration;
    public:
        static int count;
    public:
        Student(std::string registration = "NULL");
        void set_registration(std::string registration);
        std::string get_registration()const;
        ~Student();
};



#endif //_STUDENT_H