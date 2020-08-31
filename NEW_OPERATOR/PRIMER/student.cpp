#include "student.h"

int count = 0;

Student::Student(std::string registration = "NULL"):registration(registration){
    count ++;
    std::cout <<"Created object "<<count <<std::endl;
}

void Student::set_registration(std::string registration){
    if(registration != this->registration) this->registration = registration;
}

std::string Student::get_registration()const{
    return this->registration;
}

Student::~Student(){
    std::cout <<"Object destroyed"<<std::endl;
}