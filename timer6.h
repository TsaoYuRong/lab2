#include <string>
using namespace std;
class BMI {
public:
	void get();
	float reBMI(float,float);
	string  category(float);
private:
	float height,weight;
}; 
