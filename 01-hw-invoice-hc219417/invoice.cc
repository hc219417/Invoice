/**
 *   @file: invoice.cc
 * @author: Hannah Culver
 *   @date: September 8, 2021
 *  @brief: homework 1 (monitor invoice)
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    const double SAMSUNG = 190;
    const double VIEWSONIC = 170;

    char brand;
    double quantity;

    cout << "Please enter a monitor type (s/v) followed by the quantity: ";
    cin >> brand >> quantity;

    double total_price;
    double brand_price = 0;
    string monitor_brand;
    double discount = 0;

    if (brand == 's')
    {
        total_price = SAMSUNG * quantity;
        brand_price = 190;
        monitor_brand = "Samsung";
    }
    else /// (brand == 'v')
    {
        total_price = VIEWSONIC * quantity;
        brand_price = 170;
        monitor_brand = "ViewSonic";
    }

    if (quantity > 3)
    {
        discount = total_price * 0.05;
    }

    double subtotal = total_price - discount;

    char ohio;
    double taxes = 0;
    string ohio_resident;

    cout << "Do you live in Ohio (y/n)? ";
    cin >> ohio;

    if (ohio == 'y')
    {
        taxes = subtotal * 0.07;
        ohio_resident = "Yes";
    }
    else /// (ohio == 'n')
    {
        ohio_resident = "No";
    }

    double total = subtotal + taxes;

    cout << "Hard Monitors Invoice" << endl;
    cout << "---------------------" << endl;
    cout << "Monitor Brand: " << monitor_brand << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Price: $" << fixed << setprecision(2) << brand_price <<endl;
    cout << "Ohio Resident: " << ohio_resident << endl;
    cout << "Total Price: $" << fixed << setprecision(2) << total_price << endl;
    cout << "---------------------" << endl;
    cout << "Discount: $" << fixed << setprecision(2) << discount << endl;
    cout << "Subtotal: $" << fixed << setprecision(2) << subtotal << endl;
    cout << "Taxes: $" << fixed << setprecision(2) << taxes << endl;
    cout << "=====================" << endl;
    cout << "Total: $" << fixed << setprecision(2) << total << endl;
    cout << "=====================" << endl;

    return 0;
} /// main