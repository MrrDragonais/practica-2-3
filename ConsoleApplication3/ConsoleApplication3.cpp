
#include<iostream>
#include<fstream>
class Road {
public:
	double length;
	int width;
};


int main() {
	using namespace std;
	Road road;
	std::ifstream fIn;
	fIn.open("C:\visual\kasatka\2\ConsoleApplication3\ConsoleApplication3\\length.txt");
	fIn >> road.length;
	fIn.close();
	fIn.open("C:\visual\kasatka\2\ConsoleApplication3\ConsoleApplication3\\width.txt");
	fIn >> road.width;
	fIn.close();
	std::cout << "Lenght: " << road.length << endl;
	std::cout << "Width: " << road.width << endl;
};
