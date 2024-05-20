#include <stdexcept>
#include <iostream>
using namespace std;

class Calc {
public:
	int getZegop(int a) {
		if (a > 46340) {
			throw invalid_argument("제곱의 결과가 최대치를 벗어납니다.");
		}

		return (a * a);
	}
};