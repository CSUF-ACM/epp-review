#pragma once

#include <iostream>
#include <string>
using namespace std;

class Customer {
public:
	Customer(const string name = "Tuffy", const string licensePlate = "1111111", bool premiumWash = false) {
		this->name = name;
		this->licensePlate = licensePlate;
		this->premiumWash = premiumWash;
	}

	~Customer() {}

	void setName(const string name) {
		this->name = name;
	}

	void setLicensePlate(const string licensePlate) {
		this->licensePlate = licensePlate;
	}

	void setPremiumWash(bool premiumWash) {
		this->premiumWash = premiumWash;
	}

	string getName() const {
		return name;
	}

	string getLicensePlate() const {
		return licensePlate;
	}

	bool getPremiumWash() const {
		return premiumWash;
	}

	bool operator>(const Customer & right) const {
		return(licensePlate > right.licensePlate);
	}

	bool operator==(const Customer & right) const {
		return(licensePlate == right.licensePlate);
	}

	bool operator<(const Customer & right) const {
		return(licensePlate < right.licensePlate);
	}

	friend ostream & operator<<(ostream & out, const Customer customer) {
		out << "Name: " << customer.getName() << endl;
		out << "License Plate Number: " << customer.getLicensePlate() << endl;
		out << "Premium Wash: ";
		if (customer.getPremiumWash())
			out << "Yes\n";
		else
			out << "No\n";
		return out;
	}

private:
	string name;
	string licensePlate;
	bool premiumWash;

};