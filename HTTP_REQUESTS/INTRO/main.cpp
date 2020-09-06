#include <iostream>
#include "cpr/cpr.h"
#include <typeinfo>


int main(int argc, char *argv[]){

	std::cout<<"HELLO WORLD"<<std::endl;

	std::string name;

	while (1)
	{
		cpr::Response r = cpr::Get(cpr::Url{"https://tukdata.herokuapp.com/data/real-time"});
	 	std::cout<<r.text<<std::endl;
	}
	


	return 0;
}
