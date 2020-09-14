#include <iostream>

/**********************************
 * LAMBDA FUNCTIONS IMPLEMENTATION
 * ********************************/

int find_max(int *array, size_t size){
	int max = *array;
	for(size_t i = 0; i < size; i++,array++){
		if (*array > max) max = *array;
	}
	return max;
}

int find_min(int *array, size_t size){
	int min = *array;
	for(size_t i = 0; i < size; i++,array++){
		if(*array < min) min = *array; 
	}
	return min;
}

int main(int argc, char **argv){

	int marks[] = {12,32,45,76,34,87,65,34,66,89,45,877,56,544,33,34};

	auto find_n = [&marks](int(*find)(int* , size_t))->int{
		int n = find(marks,sizeof(marks)/sizeof(int));
		return n;
	};

	std::cout<<"Maximum: "<<find_n(find_max)<<std::endl;
	std::cout<<"Minimum: "<<find_n(find_min)<<std::endl;

	return 0;
}
