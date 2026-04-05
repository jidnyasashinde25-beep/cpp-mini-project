#include <iostream>
#include <fstream>
using namespace std;

int hashFunction(string key) {
    int sum = 0;
    for (char ch : key) {
        sum += ch;
    }
    return sum % 10;
}

int main() {
    ofstream outFile("data.txt");

    string name;
    cout << "Enter name: ";
    cin >> name;

    int hashValue = hashFunction(name);

    outFile << name << " " << hashValue << endl;
    outFile.close();

    cout << "Data written to file\n";

    ifstream inFile("data.txt");
    string n;
    int h;

    cout << "Reading from file:\n";
    while (inFile >> n >> h) {
        cout << n << " -> " << h << endl;
    }

    inFile.close();

    return 0;
}
