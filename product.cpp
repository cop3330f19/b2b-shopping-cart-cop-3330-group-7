#include <iostream>
#include <string>
#include "Product.h"
using namespace std;

   
    
    Product::Product(int itemNumber, string descript, double prce, int stockQty)
    {
        setItemNumber(itemNumber);
        setDescription(descript);
        setPrice (prce);
        setStockQuantity(stockQty);
    }
    Product::Product()
    {
        itemNo=0;
        description="";
        price=0.0;
        stockQuantity=0;
    }
    void Product::setItemNumber(int itemNumber)
    {
        itemNo=itemNumber;
    }
    int Product::getItemNumber()
    {
        return itemNo;
    }
    void Product::printItemNumber()
    {
        cout<<itemNo<<endl;
    }
    void Product::setDescription(string descript)
    {
        description=descript;
    }
    string Product::getDescription()
    {
        return description;
    }
    void Product::printDescription()
    {
        cout<<description;
    }    
    void Product::setPrice(double prce)
    {
        price=prce;
    }
    double Product::getPrice()
    {
        return price;
    }
    void Product::printPrice()
    {
        cout<<price<<endl;
    }
    void Product::setStockQuantity(int stockQty)
    {
        stockQuantity=stockQty;
    }
    int Product::getStockQuantity()
    {
        return stockQuantity;
    }
    void Product::printStockQuantity()
    {
        cout<<stockQuantity<<endl;
    }
