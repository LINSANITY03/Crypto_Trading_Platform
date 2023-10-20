#include <iostream>
#include <string>
#include <vector>
#include "OrderBookEntry.h"

// prints available menu to user
void printMenu()
{

    // 1 print help
    std::cout << "1: Print help " << std::endl;

    // 2 print exchange stats
    std::cout << "2: Print exchange stats " << std::endl;

    // 3 make an offer
    std::cout << "3: Make an offer " << std::endl;

    // 4 make a bid
    std::cout << "4: Make a bid " << std::endl;

    // 5 print wallet
    std::cout << "5: Print wallet " << std::endl;

    // 6 continue
    std::cout << "6: Continue " << std::endl;

    std::cout << "===============" << std::endl;
}

// get input from user and return the input
int getUserOption()
{
    int userOption;
    std::cout << "Type in 1-6" << std::endl;
    std::cin >> userOption;
    std::cout << "You chose: " << userOption << std::endl;
    return userOption;
}

void printHelp()
{
    std::cout << "Help - your aim is to make money. Analyze the market and make bids." << std::endl;
}

void printMarketStats()
{
    std::cout << "Market looks good" << std::endl;
}

void enterOffer()
{
    std::cout << "Make and offer - enter the amount" << std::endl;
}

void enterBid()
{
    std::cout << "Make a bid - enter the amount" << std::endl;
}

void printWallet()
{
    std::cout << "Your wallet is empty. " << std::endl;
}

void gotoNextTimeframe()
{
    std::cout << "Going to the next time frame. " << std::endl;
}

// takes the userinput and print message accordingly
void processUserOption(int userOption)
{
    if (userOption == 0)
    {
        std::cout << "Invalid choice. Choose 1-6" << std::endl;
    }
    if (userOption == 1)
    {
        printHelp();
    }
    if (userOption == 2)
    {
        printMarketStats();
    }
    if (userOption == 3)
    {
        enterOffer();
    }
    if (userOption == 4)
    {
        enterBid();
    }
    if (userOption == 5)
    {
        printWallet();
    }
    if (userOption == 6)
    {
        gotoNextTimeframe();
    }
}

int main()
{
    std::vector<OrderBookEntry> orders;
    orders.push_back(OrderBookEntry{10000, 0.002, "2020/03/17 17:01:24.884492", "BTC/USDT", OrderBookType::bid});
    orders.push_back(OrderBookEntry{3000, 0.02187008, "2020/03/17 17:01:24.884492", "ETH/BTC", OrderBookType::bid});
    orders.push_back(OrderBookEntry{5000, 0.002, "2020/03/17 17:01:29.884492", "BTC/USDT", OrderBookType::bid});

    // without & it create a copy of each order when we iterate
    // for (OrderBookEntry &order : orders)
    // {
    //     std::cout << "The price is " << order.price << std::endl;
    // }

    double sum = 0;
    double lowest_price = orders[0].price;
    double highest_price = orders[0].price;

    // alternative ways to iterate over vector
    for (unsigned int i = 0; i < orders.size(); ++i)
    {
        sum += orders[i].price;

        if (orders[i].price < lowest_price)
        {
            lowest_price = orders[i].price;
        };

        if (orders[i].price > highest_price)
        {
            highest_price = orders[i].price;
        };

        std::cout
            << "The price is " << orders[i].price << std::endl;
    }

    std::cout << "The total sum is " << sum << std::endl;
    std::cout << "The total average is " << sum / orders.size() << std::endl;
    std::cout << "The highest price is " << highest_price << std::endl;
    std::cout << "The lowest price is " << lowest_price << std::endl;
    // for (unsigned int i = 0; i < orders.size(); ++i)
    // {
    //     std::cout << "The price is " << orders.at(i).price << std::endl;
    // }
}