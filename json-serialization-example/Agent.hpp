#ifndef AGENT_HPP
#define AGENT_HPP

#include "IAgent.hpp"

class Agent : public IAgent, public ISystemUser
{
    private:
        ISystemUser* m_user;
        string m_area;
    
    public:
        Agent();
        Agent(ISystemUser* user, string area);
        virtual ~Agent();
        
        void setSystemUser(ISystemUser* user);
        void setArea (string area);
        string getArea ();
        void setDNI(int dni);//SystemUser Interface
        void setName(string name);//SystemUser Interface
        void setEmail(string email);//SystemUser Interface

};

Agent :: Agent (){}
Agent :: Agent (ISystemUser* user, string area)
{
    m_user = user;
    m_area = area;
}
Agent :: ~Agent(){delete this;}

void Agent :: setSystemUser(ISystemUser* user)
{
    m_user = user;
}

void Agent :: setArea ( string area)
{
    m_area = area;
}

string Agent :: getArea ()
{
    return m_area;
}

void Agent :: setDNI ( int dni)
{
    m_user->setDNI(dni);
}

void Agent :: setName(string name)
{
    m_user->setName(name);
}

void Agent :: setEmail(string email)
{
    m_user->setEmail(email);
}


#endif // AGENT_HPP
