#include <iostream>
#include <memory>

class Car {
public:
  Car() { std::cout << "Car created\n"; }
  ~Car() { std::cout << "Car destroyed\n"; }
  void drive() { std::cout << "Driving...\n"; }
};

int main() {
  std::unique_ptr<Car> car = std::make_unique<Car>();
  car->drive();

  // Owernership Transfer
  // std::unique_ptr<Car> newOwner = std::move(car);
  if(!car) std::cout << "car is null after move\n";

  int a = 5, b = 10;
  const int* p = &a; // Pointer to const int
  int* const ptr = &b; // Constant pointer to int
  const int *const qtr = &a; // Const pointer to const integer.

  return 0;
}