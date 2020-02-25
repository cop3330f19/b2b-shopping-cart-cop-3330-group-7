#include <ctime>
#include <cstdlib> 
#include <cstring> 
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include "StringHelper.h"
#include "Address.h"
#include "Customer.h"
#include "Product.h"
using namespace std;

string generateOrderNum()
{
    time_t now = time(0);
    string oNum;
    stringstream strstream;
    strstream << now;
    strstream >> oNum;
    return oNum;
}

int main(){
   
    Customer customer1[21];//object for customer
//  vector <Customer> cust;
    ifstream customerFile;// customer file variable. 
    customerFile.open("customers.dat");//opens file of customer names

    string custNum;
    string custName;
    string getCredit;
    double credit;
    string *ptrCredit;
    string address;
    string input[100];
    //string num[100];
    
    for (int i=0;i<21;i++){
    getline(customerFile, input[i]);//num
    custNum = StringHelper::parse(input[i],'|')[0];
    custName = StringHelper::parse(input[i],'|')[1];
    getCredit = StringHelper::parse(input[i],'|')[2];
    credit= atof(getCredit);    
    address= StringHelper::parse(input[i],'|')[3];

    customer1[i].setCustomerNum(custNum);
    customer1[i].setCustomerName(custName);   
    //customer1[i].setCredit(); //for setting credit
   
    //for checking inputs from file
    //cout<<custNum<<" "<<custName<<" "<<credit<<" "<<address<<endl;
    }


    //vector<Address> custAdresses;
    //Address location;
    vector<string> location;
    for (int i=0;i<1;i++)
    {
         getline(customerFile, input[i]);//reads in line from file
         address= StringHelper::parse(input[i],'|')[3];//sets the address section equal to address
         //cout<<address<<endl;//test for printing correct address
         string streetAddress= StringHelper::parse(address,',')[0];//parses address for street address
         string city = StringHelper::parse(address, ',')[1];
         string state= StringHelper::parse(address,',')[2];
         string zipcode= StringHelper::parse(address,',')[3];
         
//          location[i].push_back(streetAddress);
//          cout<<location[i]<<endl;
//          custAddress.push_back(streetAddress)
        
//        test printing
//        cout<<streetAddress<<endl;
//        cout<<city<<endl<<state<<endl<<zipcode<<endl;
    }

    
	return 0;
}
