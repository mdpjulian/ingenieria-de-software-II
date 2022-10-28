#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "IClient.hpp"
#include "json.hpp"

class Client : public IClient
{
    private:
        int m_id;
        string m_name;
        int m_dni;
        string m_email;
    
    public:
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(Client, m_id, m_name, m_dni, m_email);
        Client();
        Client(int id, string name, int dni, string email);
        virtual ~Client();
        
        void setId (int id);
        int getId ();
       
        void setName(string name);
        string getName();
       
        void setDNI(int dni);
        int getDNI ();
        
        void setEmail(string email);
        string getEmail();

};

Client :: Client (){}
Client :: Client (int id, string name, int dni, string email)
{
    m_id = id;
    m_name = name;
    m_dni = dni;
    m_email = email;
}
Client :: ~Client(){}

void Client :: setId ( int id)
{
    m_id = id;
}

int Client :: getId ()
{
    return m_id;
}

void Client :: setDNI ( int dni)
{
    m_dni = dni;
}
int Client :: getDNI()
{
    return m_dni;
    
}

void Client :: setName(string name)
{
    m_name = name;
}
string Client :: getName()
{
    return m_name;
}

void Client :: setEmail(string email)
{
     m_email = email;
}
string Client :: getEmail()
{
    return m_email;
}

#endif // CLIENT_HPP
