#include <iostream>


void print(std::string *name){
    std::cout<<"NAME: "<<*name<<std::endl;
}

void print_hello(std::string *name){
    std::cout<<"HELLO "<<*name<<std::endl;
}

void for_each(std::string *name,int size,void(*print)(std::string*)){
    for(volatile int i = 0; i < size;i++){
        print(name);
        name++;
    }
}

int main(int agrc, char* argv[]){

    std::string names[] = {"John","Jane","James","Jim"};

    for_each(names,sizeof(names)/sizeof(std::string),print);
    for_each(names,sizeof(names)/sizeof(std::string),print_hello);



    return 0;
}