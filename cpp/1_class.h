#include <string>

using namespace std;

class Cat {
  public:
    string name;
    string gender;
    int age;
    float weight;
    string color;
    
    void breath() {};
    void eat(string food) {};
    void run(string destination) {};
    void sleep(int hours) {};
    void meow() {};
};
