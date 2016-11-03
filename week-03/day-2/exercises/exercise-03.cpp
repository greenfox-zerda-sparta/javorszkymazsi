#include <string>
#include <iostream>

using namespace std;

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};  // I don't like this enum thing

struct Car {
  string name;
  CarType type;
  double km;
  double gas;
};

void display(Car &car) {
  cout << car.name << " can go " << car.km << " kms.";
  if (car.type != TESLA) {
    cout << " And has a tank of " << car.gas << " cubic meter gas." << endl;
  } else {
    cout << endl;
  }
}

// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

int main() {
  Car* cars = new Car[4];
  cars[0] = {"Volvo", VOLVO, 400, 500};
  cars[1] = {"Toyota", TOYOTA, 900, 600};
  cars[2] = {"Land Rover", LAND_ROVER, 1100, 4500};
  cars[3] = {"Tesla", TESLA, 400, 0};
  for (int i = 0; i < 4; ++i) {
    display(cars[i]);
  }
  cout << "It may be clear for you at this point that I know exactly nothing about cars :D" << endl;

  delete[] cars;
  cars = nullptr;

  return 0;
}
