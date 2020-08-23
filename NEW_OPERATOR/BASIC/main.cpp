#include <iostream>
#include "student.h"

int main(int argc, char **argv){

    Student *absent_student = new Student;

    absent_student->set_name("JACK MCLEANS");
    absent_student->set_course("ENGINEERING");
    absent_student->set_age(25);

    std::cout<<absent_student->get_course()<<std::endl;

    delete absent_student;

    

    return 0;
}