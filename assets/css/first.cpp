
#include <iostream>
using namespace std;

class Truck {

  public:

    int road(int kilometre);

};

int Truck::road(int kilometre) {

  return kilometre;

}

int main() {

  Truck speed;

  cout << speed.road(200) <<endl;

   cout << speed.road(700);

  return 0;

}

