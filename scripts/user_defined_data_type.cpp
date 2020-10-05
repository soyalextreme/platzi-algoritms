#include <iostream>
#include <string>
using namespace std;

class Client
{
public:
    string name;
    string uid;
    string address;
    float credit;

    Client(string name, string uid, string address, float credit)
    {
        this->name = name;
        this->uid = uid;
        this->address = address;
        this->credit = credit;
    }

    Client &setName(string val)
    {
        name = val;
        return *this;
    }

    Client &setUid(string val)
    {
        uid = val;
        return *this;
    }

    Client &setAddress(string val)
    {
        address = val;
        return *this;
    }

    Client &setCredit(float val)
    {
        credit = val;
        return *this;
    }
};

int main()
{
    Client newClient = Client("Alejandro", "00000001", "Avenida Platzi", 2000.10);
    cout << newClient.name << endl;
    cout << newClient.uid << endl;
    cout << newClient.address << endl;
    cout << newClient.credit << endl;
    return 0;
}