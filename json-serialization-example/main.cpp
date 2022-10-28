#include "IClient.hpp"
#include "Client.hpp"
#include "json.hpp"
#include <fstream>
using namespace std;
using json = nlohmann::json;
// #include "ClientManager.hpp"

void writeFile(std::vector<Client> clients);
void readFile();


int main()
{
    // int id;
    // Client client1(1, "emi", 4554545, "jhsfhahsjañsha");
    // Client client2(2, "pepe", 878779, "jdrdrdsssas");
    // ClientManager* cManager = new ClientManager();

    // cManager->addClient(client1);
    // cManager->addClient(client2);


    // cManager->list();
    // cout<< "ingrese id: " ;
    // cin >> id;
    // cout<< " id: "<< cManager->find(id) << endl;

    // cout<< "ingrese id: " ;
    // cin >> id;
    // cManager->supr(id);
    // cManager->list();
    /*
    json storage;
    storage["id"] = c.getId();
    storage["name"] = c.getName();
    storage["dni"] = c.getDNI();
    storage["email"] = c.getEmail(); 
    cout << setw(4) << storage << endl; 
    */ 


    Client client1(1, "emi", 32001743, "emi@gmail.com");
    Client client2(2, "pepe", 41723619, "pepe@gmail.com");

    std::vector<Client> list;
    list.push_back(client1);
    list.push_back(client2);

    json persistance = list;
    std::cout << "client json from memory: " << std::endl;
    cout << setw(4) << persistance << endl;

    //write json to file
    writeFile(list);
    
    //read json and show
    readFile();


    return 0;
}
void writeFile(std::vector<Client> clients){
    json j = clients;

    std::ofstream myfile;
    myfile.open ("clients.json");
    myfile << setw(4) << j;
    myfile.close();
}
void readFile(){
    std::ifstream file("clients.json");
    json j = json::parse(file);
    
    std::vector<Client> clients = j;
    std::cout << "Clients from file: " << std::endl;
    std::cout << std::setw(4) << j << std::endl;
}