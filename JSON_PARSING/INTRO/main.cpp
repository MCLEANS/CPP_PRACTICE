#include <iostream>
#include "nlohmann/json.hpp"

int main(int argc, char *argv[]){

	std::cout<<"HELLO WORLD"<<std::endl;

	nlohmann::json info;
	info["name"] = "Jack";
	info["course"] = "Engineering";
	info["age"] = 24;
	info["is_present"] = true;

	std::cout<<info["name"]<<std::endl;

	return 0;
}
