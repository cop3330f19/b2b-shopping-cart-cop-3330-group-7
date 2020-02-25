#include <Address.h>
#include <string>

Address::Address (string sAddress, City, State, zCode){
    setStreetAddress(string sAddress);
    setCity(string City);
    setState(string State);
    setZipCode(string zCode);
}

Address::Address (){
    setStreetAddress("");
    setZipCode("");
    setState("");
    setCity("");
    
}

string getAddress(void);

void Address::setStreetAddress(string sAddress){
    streetAddress=sAddress;
}
void Address::setCity(string City){
    city=City;
}
void Address::setState(string State){
    state=State;
}
void Address::setZipCode(string zCode){
    zipCode=zCode;
}

string Address::getStreetAddress(){
    return streetAddress;
}

string Address::getCity(){
    return city;
}

string Address::getState(){
    return state;
}
string Address::getZipCode(){
    return zipCode;
}

string Address::getAddress(void){
    string space = " ";
    return streetAddress + space + city + space + state + space + zipCode;
}

// Ignore following
void Address::printAddress(){
    
}

void Address::printStreetAddress(){
    cout << streetAddress;
}

void Address::printCity(){
    cout << city;
}

void Address::printState(){
    cout << state;
}

void Address::printZipCode(){
    cout << zipCode;
}
