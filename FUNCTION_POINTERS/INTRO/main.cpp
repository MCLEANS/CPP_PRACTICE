#include <iostream>

int add(int a,int b){
    return (a+b);
}

int main(int agrc, char* argv[]){

    //create a function pointer
    //return type(*variable)(parameter types)
    int(*add_pointer)(int,int);
    add_pointer =  &add; //similar to add_pointer = add;
    int result = (*add_pointer)(3,4); //similar to add_pointer(3,4);

    std::cout<<"RESULT: "<<result<<std::endl;


    return 0;
}