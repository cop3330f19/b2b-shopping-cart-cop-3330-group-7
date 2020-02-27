#include <string>
class Product{
    private:
    int itemNo;
    std::string description;
    double price;
    int stockQuantity;
    
    public:
    Product (int itemNo, std::string description, double price, int stockQuantity);
    Product ();
    void setItemNo (int iNum);
    void setDescription (std::string Description);
    void setPrice (double Price);
    void setStockQuantity (int StockQuantity);
    int getItemNo();
    std::string getDescription();
    double getPrice();
    int getStockQuantity();
    void printItemNo();
    void printDescription();
    void printPrice();
    void printStockQuantity();
};
