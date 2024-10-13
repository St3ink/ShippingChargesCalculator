/*
Title: Chapter 4 Exercise 15 - Shipping Charges
File Name: ShippingCharges.cpp
Programmer: Kason Steiner
Date: 10/2024

Write a program that asks for the weight of the package and the distance
it is to be shipped, then displays the charges. Do not accept values of 0 or less for the weight of the package. Do not accept weights of more than 20 kg (this is the maximum weight the company will ship). Do not accept distances of less than 10 miles or more than 3,000 miles. These are the company's minimum and maximum shipping distances.
*/  
#include <iostream>
#include <iomanip>

using namespace std;
int main() { 

  double rate = 0;
  double weight = 0;
  double distance = 0;
  double total = 0;

  
  cout << "Fast Freight Shipping Company\n";
  cout << "-----------------------------\n";
  cout << "Please enter the weight of the package in kilograms: ";
  cin >> weight;
  cout << "Enter the distance the package is to be shipped in miles: ";
  cin >> distance;
  
  cout << setprecision(2) << fixed;
  
  if (weight <= 0 || weight > 20){
    cout << "Invalid weight. Must be between 0 and 20 kg.";
    }
  else if (distance < 10 || distance > 3000){
    cout << "Invalid distance. Must be between 10 and 3000 miles.";
    }
 else if (weight < 2){
    rate = 1.10;
    total = rate * (distance / 500);
    cout << "Your total is: $" << total;
    }
  else if (weight > 2 && weight < 6){
    rate = 2.20;
    total = rate * (distance / 500);
    cout << "Your total is: $" << total;
    }
  else if (weight > 6 && weight < 10){
    rate = 3.70;
    total = rate * (distance / 500);
    cout << "Your total is: $" << total;
    }
  else if (weight > 10 && weight <= 20){
    rate = 4.80;
    total = rate * (distance / 500);
    cout << "Your total is: $" << total;
    }

return 0; 
}