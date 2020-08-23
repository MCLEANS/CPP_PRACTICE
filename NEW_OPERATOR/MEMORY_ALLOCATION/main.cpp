#include <iostream>
#include "student.h"


int main(int argc, char **argv){

    Student *absent_student = new Student[5];

    absent_student[2].set_name("JACK MCLEANS");
    absent_student[2].set_course("ENGINEERING");
    absent_student[2].set_age(25);

    absent_student[1].set_name("JANE DOE");
    absent_student[1].set_course("MANAGEMENT");
    absent_student[1].set_age(23);

    std::cout<<"ABSENT STUDENT 1 : "<<absent_student[2].get_name()<<std::endl;
    std::cout<<"ABSENT STUDENT 2 : "<<absent_student[1].get_name()<<std::endl;


    delete [] absent_student;

    

    return 0;
}