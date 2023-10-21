#pragma once
#include <vector>
#include "OrderBookEntry.h"

class MerkelMain
{
public:
    MerkelMain();
    /** start the app*/
    void init();

private:
    void LoadOrderBook();
    void printMenu();

    int getUserOption();

    void printHelp();

    void printMarketStats();

    void enterOffer();

    void enterBid();

    void printWallet();

    void gotoNextTimeframe();

    void processUserOption(int userOption);

    std::vector<OrderBookEntry> orders;
};
