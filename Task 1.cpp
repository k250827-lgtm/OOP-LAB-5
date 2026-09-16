#include <iostream>
#include <string>
using namespace std;

class Flight {
private:
    const int flightNumber;
    static string airlineName;
    static int totalFlights;

public:
    Flight(int number) : flightNumber(number) {
        totalFlights++;
    }

    static int getTotalFlights() {
        return totalFlights;
    }

    static string getAirlineName() {
        return airlineName;
    }

    void display() const {
        cout << "Airline: " << airlineName << endl;
        cout << "Flight Number: " << flightNumber << endl;
    }

    ~Flight() {
        cout << "Flight " << flightNumber << " record has been removed." << endl;
    }
};

string Flight::airlineName = "Pakistan International Airlines";
int Flight::totalFlights = 0;

int main() {
    Flight f1(101);
    Flight f2(202);

    f1.display();
    cout << endl;
    f2.display();

    cout << "\nTotal Flights: " << Flight::getTotalFlights() << endl;
    cout << "Airline: " << Flight::getAirlineName() << endl;

    return 0;
}

