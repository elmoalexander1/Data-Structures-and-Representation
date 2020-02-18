//Elmo Alexanader, 2/5/18, testPostfixCalc.cpp
#include <iostream>
#include <stack>
using namespace std;

#include "postfixCalculator.h"

int main() {
  postfixCalculator p;
  p.pushNum(1);
  p.pushNum(2);
  p.pushNum(3);
  p.pushNum(4);
  p.pushNum(4);
  p.add();
  p.add();
  p.add();
  p.add();
  cout << "Result is: " << p.topNum() << endl;
  return 0;
}
