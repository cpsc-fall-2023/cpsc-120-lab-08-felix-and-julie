// Julie Araujo
// julie0211@csu.fullerton.edu
// @Julie0211
// Partners: @IlFeIix

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2 || arguments.empty()) {
    std::cout << "error you must supply at least 1 argument. \n";
    return (2);
  }

  double sum{0.0};
  bool first = true;
  for (const std::string& arg : arguments) {
     if (first) {
      first = false;
     } else {
      double number = std::stod(arg, nullptr);
      sum += number;
     }
  }

  double avg{sum / static_cast<double>(arguments.size() - 1)};

  std::cout << "average = " << avg << "\n";
  
  return 0;
}
