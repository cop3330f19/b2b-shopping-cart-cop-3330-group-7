#include <iostream>
#include <string>
#include "Address.h"
using namespace std;

Address::Address(string streetAddress, string city, string state, string zipCode)
{
    setAddressStreet (streetAddress);
    setAddressCity (city);
    setAddressState (state);
    setAddressZipCode (zipCode);
}

Address::Address(){
    addressStreet = "";
    addressCity = "";
    addressState = "";
    addressZipCode = "";
}

void Address::setAddressStreet (string streetAddress)
{
    AddressStreet=streetAddress;
}
string Address::getAddressStreet()
{
    return AddressStreet;
}

void Address::setAddressCity (string city)
{
    AddressCity=city;
}
string Address::getAddressCity()
{
    return AddressCity;
}

void Address::setAddressState (string state)
{
    AddressState=state;
}
string Address::getAddressState()
{
    return AddressState;
}

void Address::setAddressZipCode (string zipCode)
{
    AddressZipCode=zipCode;
}
string Address::getAddressZipCode()
{
    return AddressZipCode;
}
