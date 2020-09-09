#include "vehicle.h"

Vehicle::Vehicle(std::string registration_plate,
                std::string color,
                int purchase_year,
                std::string type): registration_plate(registration_plate),
                                    color(color),
                                    purchase_year(purchase_year),
                                    type(type){


 }

 std::string Vehicle::get_registration_plate()const{
     return this->registration_plate;
 }

 std::string Vehicle::get_color()const{
     return this->color;
 }

int Vehicle::get_purchase_year()const{
    return this->purchase_year;
}

std::string Vehicle::get_type()const{
    return this->type;
}

 Vehicle::~Vehicle(){


 }
