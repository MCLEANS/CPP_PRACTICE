#ifndef _VEHICLE_H
#define _VEHICLE_H

#include <iostream>

class Vehicle{
    private:
        std::string registration_plate;
        std::string color;
        int purchase_year;
        std::string type;
    
    private:
    public:
        static int count;

    public:
        Vehicle(std::string registration_plate,
                std::string color,
                int purchase_year,
                std::string type);

        std::string get_registration_plate()const;
        std::string get_color()const;
        int get_purchase_year()const;
        std::string get_type()const;

        ~Vehicle();
};


#endif //_VEHICLE_H