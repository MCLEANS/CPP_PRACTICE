#include "student.h"

Student::Student(){
    std::cout <<"Constructor called"<<std::endl;
}

void Student::set_name(std::string set_name){
    if(name == this->name) return;
    this->name = name;
}

std::string Student::get_name()const{
    return this->name;
}

void Student::set_course(std::string course){
    if(course == this->course) return;
    this->course = course;
}

std::string Student::get_course()const{
    return this->course;
}

void Student::set_age(int age){
    if(age == this->age) return;
    this->age = age;
}

int Student::get_age()const{
    return this->age;
}

Student::~Student(){
    std::cout<<"Destructor called"<<std::endl;
}