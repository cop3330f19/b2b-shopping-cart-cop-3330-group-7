/*
 Group Members:
 Andia Dark 
 Aleem Muhammad
 Jonathan Murphy
 Laquisha Smith
 
 Date last edited:
 02/26/2020
 */
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
#include <iomanip>
using namespace std;

//function to search through customer array to see if entered customer name exists
int customerSearch(string * arr, string key, int len)
{
 for (int i=0;i<len; i++)
 {
   if (arr[i] == key)
     return i;
 }
  return -1;
}
//function to search through array to ensure that the item entered has item available in inventory
int checkQty(int *arr,int key, int len)
{
    for(int j=0; j<len;j++)
    {
        if(arr[j] == key)
            return j;
    }
    return -1;
}
//function to searich through array to ensure that the item entered is a valid item n inventory
int checkItemNumber(int *arr,int *key, int len)
{
 for (int j=0;j<len;j++)
 {
     if(arr[j]==key[j])
         return j;
 }
    return -1;
}
 int updateQty(int qtyOld, int qtyNew)
 {
     int finalQty=qtyOld-qtyNew;
     if (finalQty<0||finalQty>qtyOld)
        cout<<"There is not enough of this product"<<endl;
     else 
         return finalQty;
 }
 double updateCreditLimit(double oldCredit, double newCredit)
 {
     double finalCredit=oldCredit-newCredit;
     if (finalCredit<0||finalCredit > oldCredit)
         cout<<"There is not enough money in the account"<<endl;
      else 
          return finalCredit;
 }


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
    string input[21];//array to load the lines of the file into
    int position;
    int position2;
    //loop for customer
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
        customer1[i].setAddress(address);//for setting address in customer object
//         cout<<customer1[i].getCustomerName()<<endl;
    }
    
    Address addy[21];  
    //address loading
    for (int i=0;i<21;i++)
    {
         getline(customerFile, input[i]);//reads in line from file
         address= StringHelper::parse(input[i],'|')[3];//sets the address section equal to address
         //cout<<address<<endl;//test for printing correct address
         string streetAddress= StringHelper::parse(address,',')[0];//parses address to retrieve the first element from the vector and sets in to Street address
         string city = StringHelper::parse(address, ',')[1];//parses address to retrieve the second element from the vector and sets it to city
         string state= StringHelper::parse(address,',')[2];//parses address to retgrieve the 3rd element from the vector and sets it to state
         string zipcode= StringHelper::parse(address,',')[3];//parses address to retrieve the 4th element from the vector and sets it to zip code
    
         addy[i].setAddress(streetAddress);
         addy[i].setCity(city);
         addy[i].setState(state);
         addy[i].setZipCode(zipcode);
        
    }

    
    //product
    ifstream inventoryFile;//declare inventory file variable
    Product product[100];//object array to load inventory information into 
    inventoryFile.open("inventory.dat");//tells the function open what file to read from
    string read[100];//file to load the lines of inventory into
    
    //loop for loading project
        for (int i=0;i<20;i++){//loop to load the product object and to retrieve the information from the file 
            getline(inventoryFile, read[i]);//num
            int itemNumber = stoi(StringHelper::parse(read[i],',')[0]);//gets the item number from the file and then changed it from a string to an integer
            string description =StringHelper::parse(read[i],',')[1];//gets the description from the file
            double price = stod(StringHelper::parse(read[i],',')[2]);//gets the price from the file and changes it from a string to a double
            int stockQuantity= stoi(StringHelper::parse(read[i],',')[3]);//gets the stock quantity from the file and changes it from a string to an integer

            product[i].setItemNumber(itemNumber);     //send itemNumber into the product object for the set function
            product[i].setDescription(description); //send description into the product object for the set function
            product[i].setPrice(price);// send price to the product object for the set function
            product[i].setStockQuantity(stockQuantity);//send stockQuantity to the product for the set function
              
    }
    
    
    //Associate Terminal
    string associate,customerName, buyItem;
    int buyQty;
    char option;
    cout<<"Associate, please enter your name."<<endl;
    cin>>associate;
    cout<<"Please enter the customers Name"<<endl;
    cin>>customerName;
    
    string x[21];//a
        for(int j=0;j<21;j++)
        {
        x[j]=customer1[j].getCustomerName();
        }
    position = customerSearch(x,customerName,21);
    cout<< (position== -1 ? "Not found": " ")<<endl;
    
    //item being purchased
    int buy;
    cout<<"How many items would they like to purchase"<<endl;
    cin>>buy;
    int in[buy];
    int qty;
    for(int n=0;n<buy;n++)
    {
    cout<<"Enter item number."<<endl;
    cin>>in[n];
    }
    int y[21];//array for items
        for(int j=0;j<21;j++)
        {
           y[j]=product[j].getItemNumber(); 
        }
    
    int position1= checkItemNumber(y,in,21);
    cout<<(position1==-1 ? "Not found":" ")<<endl;
    int outItem=product[position1].getItemNumber();
    //cout<<position1<<endl;
//  item qty   
    
    cout<<"Enter the quantity being purchased."<<endl;
    cin>>qty;
    
    int z[20];//array for qty
        for (int j=0;j<20;j++)
        {
            z[j]=product[j].getStockQuantity();
        }
    position2=checkQty(z,qty,20);
    cout<<(position2==-1 ? "Not found":"Qty Found")<<endl;
    //cout<<product[position2].getStockQuantity()<<endl;
    int oldQty=product[position2].getStockQuantity();

//double price= 
    //credit limit
   double cLim=customer1[position].getCredit();
    
   //updateCreditLimit(cLim,)
  // updateQty(oldQty,qty)    
    
    
    
    
    
    
    /*************FINAL OUTPUT*************/
     
    cout<<"-----------------------------------"<<endl;
    cout<<"OrderNumber: "<<generateOrderNum()<<endl;
    cout<<"Associate: "<<associate<<endl;
    cout<<"Customer Name: "<<customerName<<endl;
    cout<<"Address: "<<customer1[position].getAddress()<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<"Item No"<<setw(5)<<"Description"<<setw(5)<<"Qty"<<setw(5)<<"Total"<<endl;
    cout<<"-----------------------------------"<<endl;
//     for (int j=0;j<itemN.size();j++)
//     {
//         //item no, description, qty, total
//     cout<<<<itemN
//         }
    
    
    
	return 0;
}


