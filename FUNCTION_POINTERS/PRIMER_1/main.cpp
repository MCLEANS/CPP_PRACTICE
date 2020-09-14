#include <iostream>

int find_max(int *array, size_t size){
    int max = *array;
    for(volatile size_t i = 0; i < size; i++,array++){
        if(*array > max) max = *array;
    }
    return max;
}

int find_min(int *array,size_t size){
    int min = *array;
    for(volatile size_t i = 0; i < size; i++,array++){
        if(*array < min) min = *array;
    }
    return min;
}

int find_n(int *array, size_t size, int(*find)(int*, size_t)){
    int n = find(array,size);
    return n;
}

int main(int argc, char* argv[]){

    int marks[] = {1,34,54,2,43,67,54,78,96,23,15};

    int maximum = find_n(marks,sizeof(marks)/sizeof(int),find_max);
    int minimum = find_n(marks,sizeof(marks)/sizeof(int),find_min);


    std::cout<<"Maximum value: "<<maximum<<std::endl;
    std::cout<<"Minimum value: "<<minimum<<std::endl;


    return 0;
}