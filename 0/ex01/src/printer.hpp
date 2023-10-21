#ifndef PRINTER_HPP
#define PRINTER_HPP

#include <iostream>
#include <string>

#define standard "\033[0m"
#define red "\033[31m"
#define green "\033[32m"
#define yellow "\033[33m"
#define blue "\033[34m"
#define magenta "\033[35m"
#define cyan "\033[36m"

void printer(std::string color, std::string message);

void printer(std::string color, std::string message, std::string extra);

void printer(std::string color, std::string message, int n);

#endif
