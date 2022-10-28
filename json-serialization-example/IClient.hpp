#ifndef ICLIENT_HPP
#define ICLIENT_HPP

#include <iostream>
using namespace std;

class IClient 
{
    public:
        
        virtual void setId (int id) = 0;
        virtual int getId () = 0;
        virtual void setName (string name) = 0;
        virtual string getName () = 0;
        virtual void setDNI (int dni) = 0;
        virtual int getDNI () = 0;
        virtual void setEmail (string email) = 0;
        virtual string getEmail() = 0;

};

#endif // ICLIENT_HPP
