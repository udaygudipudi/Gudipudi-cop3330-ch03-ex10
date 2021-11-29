/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Uday Gudipudi
 */

#include "std_lib_facilities.h"

void addition(double first, double second){

  double result;

  result = first + second;

  std::cout << result;

}

void subtraction(double first, double second){

  double result;

  result = first - second;

  std::cout << result;

}

void multiplication(double first, double second){

  double result;

  result = first * second;

  std::cout << result;

}

void division(double first, double second){

  double result;

  result = first / second;

  std::cout << result;

}

int main() {

  string operation;
  double first, second, result;

  std::cout << "Enter an operation and two operands:\n";

  std::cin >> operation >> first >> second;

  if (operation == "+" || operation == "plus") {

    addition(first,second);

  }

  if (operation == "-" || operation == "minus") {

    subtraction(first,second);

  }

  if (operation == "*" || operation == "mul") {

    multiplication(first,second);

  }

  if (operation == "/" || operation == "div") {

    division(first,second);

  }

  return 0;

} 