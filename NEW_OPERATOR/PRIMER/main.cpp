#include <iostream>
#include "student.h"

int main(int argc, char **argv){

   Student *absentees = new Student[10];

   absentees[0].set_registration("EEEQ/0");
   absentees[1].set_registration("EEEQ/1");

   std::cout<<"Absentee 0 registration : "<<absentees[0].get_registration()<<std::endl;
   std::cout<<"Absentee 1 registration : "<<absentees[1].get_registration()<<std::endl;

   delete[] absentees;

    return 0;  
}
