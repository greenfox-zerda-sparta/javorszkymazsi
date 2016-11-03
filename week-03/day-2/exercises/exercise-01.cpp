#include <string>
#include <iostream>

using namespace std;

struct Computer {
  string name;
  double cpu_speed_hz;
  double ram_size;
};

int main() {
  Computer computer = {"Macbook", 3.2e9, 8e9};
  computer.name = "MacBook Pro";
  cout << computer.name << ", " << computer.cpu_speed_hz << "Hz, RAM: " << computer.ram_size << "B." << endl;

  // Change the name of the computer to "Macbook Pro" and print all the stats

  return 0;
}
