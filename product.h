#include<iostream>
#include<string>


class Product
{
    private:
        int itemNo;
        std::string description;
        double price;
        int stockQuantity;
    
    public:
        Product(int itemNumber, std::string itemNum, double prce, int stockQty);
        Product();
        
        void setItemNumber(int itemNumber);
        int getItemNumber();
        void printItemNumber();
        void setDescription(std::string description);
        std::string getDescription();
        void printDescription();
        void setPrice(double price);
        double getPrice();
        void printPrice();
        void setStockQuantity(int stockQuantity);
        int getStockQuantity();
        void printStockQuantity();
            
};
