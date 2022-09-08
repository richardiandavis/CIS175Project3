#include <iostream>
#include <valarray>
int main() {
	std::valarray<float> varr = { 0,0,0,0,0 };
	std::string answer = "yes";
	
	
	while (answer == "yes") {
		for (auto& f : varr) {
			std::cout << "enter a test score" << std::endl;
			std::cin >> f;
		}
		std::cout << "the average test score is " << varr.sum() / 5 << std::endl << std::endl;
		std::cout << "would you like to calculate another average test score?" << std::endl;
		std::cin >> answer;

	}
	return 0;
}