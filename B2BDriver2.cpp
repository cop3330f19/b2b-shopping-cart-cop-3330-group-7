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
    ifstream customerFile;// customer file variable. 
    customerFile.open("customers.dat");//opens file of customer names

    string custNum;
    string custName;
    double getCredit;
    string address;
    string input[100];//array to load the lines of the file into
    
    
    for (int i=0;i<21;i++)
    {
        //retrieve parsed information
    getline(customerFile, input[i]);//reads in the line from the file names customerFile
    custNum = StringHelper::parse(input[i],'|')[0];// retrieves the customer number from the file located at element 1
    custName = StringHelper::parse(input[i],'|')[1];// retrieves the customer name from the file located at element 2
    getCredit = stod(StringHelper::parse(input[i],'|')[2]);//retrieves the credit value and changes it from a string to a double located at element 3
    address= StringHelper::parse(input[i],'|')[3];//retreves the address frrom the file located at element 4

    //load customer object set functions
    customer1[i].setCustomerNum(custNum);//for setting customer number in object
    customer1[i].setCustomerName(custName);//for setting customer name in object
    customer1[i].setCredit(getCredit); //for setting credit in object 
    }
    
    //Associate Terminal
    string associate,customerName, buyItem;
    int buyQty;
    char option;
    cout<<"Associate, pleare enter your name."<<endl;
    cin>>associate;
    cout<<"Please enter the customers Name"<<endl;
    cin>>customerName;
    
    //search for customer
    string x[21];
    for (int i=0;i<21;i++)
    {
       x[i]=customer1[i].getCustomerName(custName);
        if(x[i]==customerName)
        {
        return -1;
        }
        else
            cout<<"The customer does not exist"<<endl;
    }
   
    //search for item
    do{
        cout<<"Please enter in the item being purchased"<<endl;
        cin>>buyItem;
        cout<<"What is the quantity?"<<endl;
        cin>>buyQty;
        cout<<"Would you like to add another item?"<<endl;
        cin>>option;
    }while(option==Y);
        
    
    vector<Address> addy;  
    //address loading
    for (int i=0;i<1;i++)
    {
         getline(customerFile, input[i]);//reads in line from file
         address= StringHelper::parse(input[i],'|')[3];//sets the address section equal to address
         //cout<<address<<endl;//test for printing correct address
         string streetAddress= StringHelper::parse(address,',')[0];//parses address to retrieve the first element from the vector and sets in to Street address
         string city = StringHelper::parse(address, ',')[1];//parses address to retrieve the second element from the vector and sets it to city
         string state= StringHelper::parse(address,',')[2];//parses address to retgrieve the 3rd element from the vector and sets it to state
         string zipcode= StringHelper::parse(address,',')[3];//parses address to retrieve the 4th element from the vector and sets it to zip code
    }

    
    //product
    ifstream inventoryFile;//declare inventory file variable
    Product product[100];//object array to load address into 
    inventoryFile.open("inventory.dat");//tells the function open what file to read from
    string read[100];//file to load the lines of inventtry into
    
        for (int i=0;i<20;i++){//loop to load the product object and to retrieve the information from the file 
        getline(inventoryFile, read[i]);//num
        int itemNumber = stoi(StringHelper::parse(read[i],',')[0]);//gets the item number from the file and then changed it from a string to an integer
    //         cout<<itemNumber<<endl;
        string description =StringHelper::parse(read[i],',')[1];//gets the description from the file
    //          cout<<description<<endl;
        double price = stod(StringHelper::parse(read[i],',')[2]);//gets the price from the file and changes it from a string to a double
    //          cout<<price<<endl;
        int stockQuantity= stoi(StringHelper::parse(read[i],',')[3]);//gets the stock quantity from the file and changes it from a string to an integer
    //          cout<<stockQuantity<<endl;

        product[i].setItemNumber(itemNumber);     //send itemNumber into the product object for the set function
        product[i].setDescription(description); //send description into the product object for the set function
        product[i].setPrice(price);// send price to the product object for the set function
        product[i].setStockQuantity(stockQuantity);//send stockQuantity to the product for the set function
        //check by printing
//     product[i].printItemNumber();
//     product[i].printDescription();
//     product[i].printPrice();
//     product[i].printStockQuantity();    
    }
    
   
    
	return 0;
}

