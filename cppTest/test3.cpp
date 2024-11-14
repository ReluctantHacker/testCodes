#include <iostream>
#include <vector>



int main() {
	std::vector<int> vec(5);
	vec[0] = 0;
	vec[4] = 1;

	vec[10] = 1;
	std::cout << vec[0] << std::endl;
	std::cout << vec[10] << std::endl;

}	
