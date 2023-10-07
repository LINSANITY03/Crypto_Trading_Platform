#include <iostream>
#include <string>
#include <vector>

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
                                              orderType(orderType)

    // inserting the value of constructor to this. classes variables
    {
    }

    double price;
    double amount;
    std::string timestamp;
    std::string product;
    OrderBookType orderType;
};

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
    orders.push_back(
        OrderBookEntry{10000, 0.002, "2020/03/17 17:01:24.884492", "BTC/USDT", OrderBookType::bid});

    // without & it create a copy of each order when we iterate
    for (OrderBookEntry &order : orders)
    {
        std::cout << "The price is " << order.price << std::endl;
    }

    // alternative ways to iterate over vector
    for (unsigned int i = 0; i < orders.size(); ++i)
    {
        std::cout << "The price is " << orders[i].price << std::endl;
    }

    for (unsigned int i = 0; i < orders.size(); ++i)
    {
        std::cout << "The price is " << orders.at(i).price << std::endl;
    }
}