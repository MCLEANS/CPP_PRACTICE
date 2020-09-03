#include <iostream>

int main(int argc, char **argv){

    std::cout<<"HELLO WORLD"<<std::endl;

    int birth_year = 1996;
    int current_year = 2020;

    auto calculate_age = [current_year,birth_year]()->int{
        int age = current_year-birth_year;
        return age;
    };

    int age = calculate_age();

    std::cout<<"You are "<<age<<" years old"<<std::endl;

    return 0;
}