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

int indexRecorder()
{
    // if the object containing the address 
}

int main(){
   
    Customer customer1[21];//object for customer
//  vector <Customer> cust;
    ifstream customerFile;// customer file variable. 
    customerFile.open("customers.dat");//opens file of customer names

    string custNum;
    string custName;
    double getCredit;
    double credit;
    string *ptrCredit;
    string address;
    string input[100];
    
    
    for (int i=0;i<21;i++){
    getline(customerFile, input[i]);//num
    custNum = StringHelper::parse(input[i],'|')[0];
    custName = StringHelper::parse(input[i],'|')[1];
    getCredit = stod(StringHelper::parse(input[i],'|')[2]);
    //credit= atof(getCredit);    
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

    
    //product
    ifstream inventoryFile;
    Product product[100];
    inventoryFile.open("inventory.dat");
    string read[100];
    
    for (int i=0;i<20;i++){
    getline(inventoryFile, read[i]);//num
    int itemNumber = stoi(StringHelper::parse(read[i],',')[0]);
        cout<<itemNumber<<endl;
    string description =StringHelper::parse(read[i],',')[1];
         cout<<description<<endl;
    double price = stod(StringHelper::parse(read[i],',')[2]);
         cout<<price<<endl;
    int stockQuantity= stoi(StringHelper::parse(read[i],',')[3]);
         cout<<stockQuantity<<endl;
    
    product[i].setItemNumber(itemNumber);     
    product[i].setDescription(description);
    product[i].setPrice(price);
    product[i].setStockQuantity(stockQuantity);
    //check by printing
//     product[i].printItemNumber();
//     product[i].printDescription();
//     product[i].printPrice();
//     product[i].printStockQuantity();    
    }
	return 0;
}
