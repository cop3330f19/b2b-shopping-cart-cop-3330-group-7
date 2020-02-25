#include <Product.h>
#include <string>

Product::Product (int itemNo, string description, double price, int stockQuantity){
    setItemNo(int iNum)
    setDescription(string Description)
    setPrice(double Price)
    setStockQuantity(int StockQuantity)
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
