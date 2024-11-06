#include <iostream>
#include <string>
using namespace std;

class ArgParser {
public:
    string brand;
    string model;
    int year;
    ArgParser(string brand,string model,int year) {
        this->brand = brand;
        this->model = model;
        this->year = year;
    }

    void pares() {
        cout << "year: " << year << endl;
    }

    void pares1() {
        cout << "brand: " << brand << endl;
        cout << "model: " << model << endl;
    }
};

int main(int argc, char* argv[]) {
    std << "Please enter brand info, as below:" << endl;


    if (argc != 4) {
        cout << "Usage: " << argv[0] << " <brand> <model> <year>" << endl;
        return 1;
    }

    string brand = argv[1];
    string model = argv[2];
    int year = stoi(argv[3]);


    ArgParser argParser(brand, model, year);


    argParser.pares1();
    argParser.pares();

    return 0;
}