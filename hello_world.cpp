#include <iostream>
#include <string>
int
main()
{
  string name;
  std::cin >> name;                           // Read input from standard input
  std::cout << "Hello, World from @" << name; // Output to standard output
  std::cout << std::endl;                     // New line
  return 0;
}