//Elisha Parslow 
// QA 320 HW1 EX01_04 a
//unionizing two vectors

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> a;
	vector<int> b;
	vector<int>& unionVectors(vector<int>& a, vector<int>& b);

	for (int i = 0; i < 20; i++) {
		a.push_back(i);
		b.push_back(i + 1);
		b.push_back(i+2);
	}

	


	return 0;
}