#include "Product.h"
#include <string>
#include <iostream>
using namespace std;

Product::Product (int iNum, string Description, double Price, int StockQuantity){
    setItemNo(iNum);
    setDescription(Description);
    setPrice(Price);
    setStockQuantity(StockQuantity);
}

Product::Product (){
    setItemNo(0);
    setDescription("");
    setPrice(0);
    setStockQuantity(0);
    
}

void Product::setItemNo(int iNum){
    iNum = itemNo;
}
void Product::setDescription(string Description){
    description=Description;
}
void Product::setPrice(double Price){
    Price=price;
}
void Product::setStockQuantity(int StockQuantity){
    StockQuantity=stockQuantity;
}

int Product::getItemNo(){
    return itemNo;
}

string Product::getDescription(){
    return description;
}

double Product::getPrice(){
    return price;
}
int Product::getStockQuantity(){
    return stockQuantity;
}

void Product::printItemNo(){
    cout << itemNo;
}

void Product::printDescription(){
    cout << description;
}

void Product::printPrice(){
    cout << price;
}

void Product::printStockQuantity(){
    cout << stockQuantity;
}
