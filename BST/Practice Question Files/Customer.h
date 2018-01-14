// Customer Class
// Email Oscar Olazabal at omolazabal@csu.fullerton.edu if you have any
// questions or concerns about this file.

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>
using namespace std;

class Customer {
public:
    Customer(const string name = "Tuffy", const string license_plate = "1111111", bool premium_wash = false) {
        this->name = name;
        this->license_plate = license_plate;
        this->premium_wash = premium_wash;
    }

    ~Customer() {}

    void set_name(const string name) { this->name = name; }
    void set_license_plate(const string license_plate) { this->license_plate = license_plate; }
    void set_premium_wash(bool premium_wash) { this->premium_wash = premium_wash; }

    string get_name() const { return name; }
    string get_license_plate() const { return license_plate; }
    bool get_premium_wash() const { return premium_wash; }

    bool operator>(const Customer & right) const { return (name > right.name); }
    bool operator==(const Customer & right) const { return (name == right.name); }
    bool operator<(const Customer & right) const { return (name < right.name); }

    friend ostream & operator<<(ostream & out, const Customer customer) {
        out << "Name: " << customer.get_name() << endl;
        out << "License Plate Number: " << customer.get_license_plate() << endl;
        out << "Premium Wash: ";
        if (customer.get_premium_wash())
            out << "Yes\n";
        else
            out << "No\n";
        return out;
    }

private:
    string name;
    string license_plate;
    bool premium_wash;

};

#endif
