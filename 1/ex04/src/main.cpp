#include "stuff.hpp"

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Usage: " << argv[0] << instructions << std::endl;
		return 1;
	}
	//assign arguments for later use
	std::string fileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	//opening file
	std::ifstream inFile(fileName);
	if (!inFile.is_open()) {
		std::cerr << "Error opening : " << fileName << std::endl;
		return 1;
	}
	//reading file and writing to string
	std::stringstream buffer;
	buffer << inFile.rdbuf();
	inFile.close();
	std::string input = buffer.str();
	//making new string with the corrected string
	std::string correct = "";
	if (s1 == "") {
		correct += input;
	} else {
		size_t pickup = 0;
		size_t spot = input.find(s1);
		while(spot != std::string::npos) {
			correct += input.substr(pickup, spot - pickup) + s2;
			pickup = spot + s1.length();
			spot = input.find(s1, pickup);
		}
		correct += input.substr(pickup);
	}
	//making a new file that ends on .replace
	std::string newFile = fileName + ".replace";
	std::ofstream outFile(newFile);
	//filling the new file
	outFile << correct;
	outFile.close();
	return 0;
}
