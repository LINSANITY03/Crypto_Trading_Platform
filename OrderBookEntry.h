#include <string>

enum class OrderBookType
{
    bid,
    ask
};

class OrderBookEntry
{
public:
    // creating a constructor with initializtion list
    OrderBookEntry(double price,
                   double amount,
                   std::string timestamp,
                   std::string product,
                   OrderBookType orderType) : price(price),
                                              amount(amount),
                                              timestamp(timestamp),
                                              product(product),
                                              orderType(orderType);

    double price;
    double amount;
    std::string timestamp;
    std::string product;
    OrderBookType orderType;
};