#ifndef IAGENT_HPP
#define IAGENT_HPP

#include "ISystemUser.hpp"

class IAgent
{
    public:
        virtual void setSystemUser(ISystemUser* user) = 0;
        virtual void setArea (string area) = 0;
        virtual string getArea () = 0;

};


#endif // IAGENT_HPP
