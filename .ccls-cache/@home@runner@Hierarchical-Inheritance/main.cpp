#include <iostream>
using namespace std;

//Hierarchical

class Car{
  public:
    int age;
    int weight;

    void speedUp(){
      cout << "Trying to speed up !!" << endl;
      cout << "Speed : 90 km/h" << endl;
    }
};

class Scorpio:public Car{

};
class Fortuner:public Car{

};

int main() {
  
  // Hierarchical Inheritance

  Scorpio s11;
  s11.speedUp();
  Fortuner legender;
  legender.speedUp();
}