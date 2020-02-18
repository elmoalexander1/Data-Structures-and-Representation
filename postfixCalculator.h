//Elmo Alexander, 2/4, postfixCalculator.h

#ifndef POSTFIXCALCULATOR_H
#define POSTFIXCALCULATOR_H

#include <iostream>
#include <stack>

class postfixCalculator {
public:

postfixCalculator(); //Constructor
 ~postfixCalculator(); //Destructor
void pushNum(int e); //adds the passed element to the top of the stack
int topNum(); //returns element at the top of the stack
void popNum(); //removes the element off the top of the stack
bool emptyNum(); //tells whether the stack is empty

int add(); //addition
int sub(); //subtraction
int multiply(); //multiplication
int division(); //division
int negate(); //negation

private:
StackNode *head; //start of stack -- like a listnode
};
#endif
