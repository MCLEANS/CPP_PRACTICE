#include <iostream>
#include "vehicle.h"

Vehicle vehicle("KAC",
                "RED",
                2009,
                "TRAIN");

int main(int argc, char **argv){

    std::cout<<vehicle.get_type()<<std::endl;

    return 0;
}