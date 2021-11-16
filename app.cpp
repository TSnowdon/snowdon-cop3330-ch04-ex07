/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tyler Snowdon
 */
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

int read_digit(string input)
{
        if (input == "one" || input == "1")
        {
            return 1;
        }
        if (input == "two"|| input == "2")
        {
            return 2;
        }
        if (input == "three"|| input == "3")
        {
            return 3;
        }
        if (input == "four"|| input == "4")
        {
            return 4;
        }
        if (input == "five"|| input == "5")
        {
            return 5;
        }
        if (input == "six"|| input == "6")
        {
            return 6;
        }
        if (input == "seven"|| input == "7")
        {
            return 7;
        }
        if (input == "eight"|| input == "8")
        {
            return 8;
        }
        if (input == "nine"|| input == "9")
        {
            return 9;
        }
    return -1;
}

int main()
{
    string operand;
    string input1;
    string input2;

    int val1 = -1;
    int val2 = -1;
    int result = -1;

    cout << "Please insert your operation and then your values:\n";
    cin >> operand >> input1 >> input2;

    val1 = read_digit(input1);
    val2 = read_digit(input2);

    if (operand == "+" || operand == "plus")
    {
        // cout << val1 << " + " << val2 << "\n";
        result = val1 + val2;
    }
    if (operand == "-" || operand == "minus")
    {
        // cout << val1 << " - " << val2 << "\n";
        result = val1 - val2;
    }
    if (operand == "*" || operand == "mul")
    {
        // cout << val1 << " * " << val2 << "\n";
        result = val1 * val2;
    }
    if (operand == "/" || operand == "div")
    {
        // cout << val1 << " / " << val2 << "\n";
        result = val1 / val2;
    }

    printf("Your result is %d", result);
    return 0;
}