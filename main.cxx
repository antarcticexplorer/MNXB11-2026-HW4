/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include <iostream>

int main() {
  using namespace homework;

  // as1
  int x = 9;
  float y = 3.74f;
  int add_one = x;

  printHello();
  AddOneRef(add_one);

  std::cout << "AddOneRef(" << x << "): " << add_one << std::endl;
  std::cout << "isOdd(" << x << "): " << isOdd(x) << std::endl;
  std::cout << "floatToInt(" << y << "): " << floatToInt(y) << std::endl;
  std::cout << "factorial(" << x << "): " << factorial(x) << std::endl;

}

