#include <iostream>
using namespace std;

struct Planet
{
    char name[32];
    long double distance;
    double dm;
    double mass;
    void createPlanet()
    {
        cout << "Enter the name: ";
        cin.getline(name, 32, '\n');
        do
        {
            cout << "Enter the distance: ";
            cin >> distance;
        } while (distance < 0);

        do
        {
            cout << "Enter the diameter: ";
            cin >> dm;
        } while (dm < 0);

        do
        {
            cout << "Enter the mass: ";
            cin >> mass;
        } while (mass < 0);
        cin.ignore();
    }
    void printPlanet()
    {
        cout<<"Name: "<<name << endl;
        cout<<"Distance: "<< distance << endl;
        cout<< "Diameter: " << dm  << endl;
        cout<<"Mass: "<< mass<<endl;
        cout << "Time to sun: " << timeToSun() << endl;
        cout<< endl;
    }
    double timeToSun()
    {
        return distance / SUN_LIGHT_SPEED;
    }
};


int main()
{
    
    return 0;
}