#include <iostream>
#include "cpr/cpr.h"


int main(int argc, char *argv[]){

	std::cout<<"HELLO WORLD"<<std::endl;

	 cpr::Response r = cpr::Get(cpr::Url{"https://tukdata.herokuapp.com/data/real-time"});
	 std::cout<<r.text<<std::endl;

	return 0;
}
