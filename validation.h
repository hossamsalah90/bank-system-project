#ifndef VALIDATION_H
#define VALIDATION_H
#include <iostream>
#include <string>
using namespace std;


class validation
{
    public:
    static bool validname(string name){
       if(name.length()<5||name.length()>20){
    for(int i=0;i<name.length();i++){
        if(!isalpha(name[i]))
           return false;
    }
       }
    return true;
    }
    static bool validpassword(string password){
    if(password.length()<8||password.length()>20)
    {return false;}
    return true;
    }
    static bool validbalance(double balance){
    if(balance <1500){
        return false;
    }
    return true;
    }
    static bool valdisalary(double salary){
    if (salary<5000){
        return false;
    }
    return true;
    }
};



#endif // VALIDATION_H
