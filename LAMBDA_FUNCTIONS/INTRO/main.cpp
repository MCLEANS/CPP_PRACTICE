#include <iostream>


int main(int argc, char *argv[]){

    std::cout<<"HELLO WORLD"<<std::endl;

    int birth_year = 1996;
    int current_year = 2020;

    auto calculate_age = [=,&birth_year](){
        birth_year = 1990;
        int age = current_year - birth_year;
        std::cout<<"You are "<<age<<" years old"<<std::endl;
    };

    calculate_age();

    std::cout<<"birth year: "<<birth_year<<std::endl;
    std::cout<<"current year: "<<current_year<<std::endl;

    return 0;
}