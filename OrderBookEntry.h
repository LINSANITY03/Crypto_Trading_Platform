// only include this file once
#pragma once
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
                   OrderBookType orderType);

    double price;
    double amount;
    std::string timestamp;
    std::string product;
    OrderBookType orderType;
};