#include <iostream>

int main(int argc, char **argv) {

  std::cout << "Hello World\n";
  std::cout << "Argc: " << argc << "\n";

  for (int i=0;i<argc;i++) {
    std::cout << i << " -> " << argv[i] << "\n";
  }

  return 0;
}
