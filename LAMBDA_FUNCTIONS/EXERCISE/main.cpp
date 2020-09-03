#include <iostream>
#include <algorithm>

/***********************************************************************
 * Write a lambda function to find largest and smallest number in a 
 * user inputed list.
 * 
*/


struct Extremes{
    int max;
    int min;
};

int main(int argc, char* argv[]){

    std::cout<<"Enter ten numbers seperated by a space"<<std::endl;

    int user_numbers[10];

    std::cin>>user_numbers[0];
    std::cin>>user_numbers[1];
    std::cin>>user_numbers[2];
    std::cin>>user_numbers[3];
    std::cin>>user_numbers[4];
    std::cin>>user_numbers[5];
    std::cin>>user_numbers[6];
    std::cin>>user_numbers[7];
    std::cin>>user_numbers[8];
    std::cin>>user_numbers[9];

    std::cout<<"\n";

   auto sort_ascending = [&user_numbers]()->Extremes{
       Extremes extremes;
       extremes.min = user_numbers[0];
       extremes.max = user_numbers[0];

       for(size_t i = 0; i < (sizeof(user_numbers)/sizeof(int));i++){
          if(user_numbers[i] < extremes.min) extremes.min = user_numbers[i];
          if(user_numbers[i] > extremes.max) extremes.max = user_numbers[i];
       }    
       return extremes;
   };

   Extremes extremes = sort_ascending();

    std::cout<<"Max = "<<extremes.max<<std::endl;
    std::cout<<"Min = "<<extremes.min<<std::endl; 

    return 0;
}