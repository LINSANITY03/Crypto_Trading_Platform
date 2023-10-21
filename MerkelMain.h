
class MerkelMain
{
public:
    MerkelMain();
    /** start the app*/
    void init();

private:
    void printMenu();

    int getUserOption();

    void printHelp();

    void printMarketStats();

    void enterOffer();

    void enterBid();

    void printWallet();

    void gotoNextTimeframe();

    void processUserOption(int userOption);
};
