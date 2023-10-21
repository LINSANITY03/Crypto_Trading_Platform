#include <iostream>
#include <string>
#include <vector>
#include "OrderBookEntry.h"
#include "MerkelMain.h"

int main()
{
    MerkelMain app{};
    app.init();
}

//     // without & it create a copy of each order when we iterate
//     // for (OrderBookEntry &order : orders)
//     // {
//     //     std::cout << "The price is " << order.price << std::endl;
//     // }

//     double sum = 0;
//     double lowest_price = orders[0].price;
//     double highest_price = orders[0].price;

//     // alternative ways to iterate over vector
//     for (unsigned int i = 0; i < orders.size(); ++i)
//     {
//         sum += orders[i].price;

//         if (orders[i].price < lowest_price)
//         {
//             lowest_price = orders[i].price;
//         };

//         if (orders[i].price > highest_price)
//         {
//             highest_price = orders[i].price;
//         };

//         std::cout
//             << "The price is " << orders[i].price << std::endl;
//     }

//     std::cout << "The total sum is " << sum << std::endl;
//     std::cout << "The total average is " << sum / orders.size() << std::endl;
//     std::cout << "The highest price is " << highest_price << std::endl;
//     std::cout << "The lowest price is " << lowest_price << std::endl;
//     // for (unsigned int i = 0; i < orders.size(); ++i)
//     // {
//     //     std::cout << "The price is " << orders.at(i).price << std::endl;
//     // }
// }