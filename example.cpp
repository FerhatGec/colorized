/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#include <Colorized.hpp>
#include <iostream>

int main(void) {
  setColor(colorize(COLOR{255, 0, 0}));
  std::cout << "TEST";
  return 0;
  // std::cout << Templatestr + intToString(1) + Semicolonstr + intToString(RED)
  // + "m" << "Hello!\n";
  printfc(colorize(TYPE::BOLD, CYAN), "Hello, Colorized!");
  printfc(colorize(TYPE::BOLD, MAGENTA), "\nHello, Colorized (Char)!\n");
  return 0;
}
