//Elmo Alexander, 2/4, postfixCalculator.cpp

#include <iostream>
#include <stack>
#include "postfixCalculator.h"
using namespace std;

Stack::postfixCalculator() { //constructor
  s = new Stack();
}

Stack::~Stack() { //destructor
  s.delete;
}

void Stack::pushNum(int e) { //adds passed element to the top of the stack
  s.push();
}

int Stack::topNum() { //returns the element at the top of the stack
  s.top();
}

void Stack::popNum() { //removes the top element from the stack
  s.pop();
}

bool Stack::emptyNum() { //tells whether there are any elements in the stack
  s.empty();
}


int Stack::add() { //addition
  int tempA = s.popNum();
  int tempB = s.popNum();
  int replace = tempB + tempA;
  s.pushNum(replace);
}

int Stack::sub() { //subtraction
  int tempA = s.popNum();
  int tempB = s.popNum();
  int replace = tempB - tempA;
  s.pushNum(replace);
}

int Stack::multiply() {
  int tempA = s.popNum();
  int tempB = s.popNum();
  int replace = tempB * tempA;
  s.pushNum(replace);
}

int Stack::divide() {
  int tempA = s.popNum();
  int tempB = s.popNum();
  int replace = tempB / tempA;

}

int Stack::negate() {
  int tempA = s.popNum();
  int replace = tempA * -1;
}
