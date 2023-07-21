#pragma once
#include <iostream>

using namespace std;

bool isBalanced(string line);
bool isOperator(char c);
bool isOperand(char c);
int precedence(char op);
string conversion(const string& line);