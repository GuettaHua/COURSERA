/*#include <iostream>
using namespace std;
class Sample {
public:
	int v;
	Sample(int n) :v(n) { }
	// �ڴ˴�������Ĵ���
*/
	Sample(const Sample &a) {
		v = a.v + a.v;
	}
//};
/*
	int main() {
	Sample a(5);
	Sample b = a;
	cout << b.v;
	return 0;
}
*?