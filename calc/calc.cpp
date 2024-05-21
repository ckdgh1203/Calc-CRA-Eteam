#include <stdexcept>

class Calc {
public:
    int getGop(int a, int b){
        return a * b;

    }
    int getMinus(int a, int b) {
        return a - b;
    }

    int getDivide(int a, int b)
	{
        if (b == 0) throw std::exception();
		return a / b;
	}
};
