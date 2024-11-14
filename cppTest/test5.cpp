#include <iostream>
using namespace std;


template <class T, class U>
T findSquare(T n, U x) {
	return n*n;
};


int main() {
	cout << findSquare(3.23422666, 111) << endl;
}


