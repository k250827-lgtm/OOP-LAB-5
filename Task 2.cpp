#include <iostream>
#include <string>
using namespace std;

class Reservation {
private:
    const int roomNumber;
    string guestName;
    static string hotelName;
    static int totalReservations;

public:
    Reservation(int room, string guest)
        : roomNumber(room), guestName(guest) {
        totalReservations++;
    }

    void setGuestName(string guest) {
        guestName = guest;
    }

    string getGuestName() const {
        return guestName;
    }

    static int getTotalReservations() {
        return totalReservations;
    }

    void display() const {
        cout << "Hotel: " << hotelName << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Guest Name: " << guestName << endl;
    }

    ~Reservation() {
        cout << "Reservation for room " << roomNumber
             << " has been cancelled." << endl;
    }
};

string Reservation::hotelName = "Pearl Continental";
int Reservation::totalReservations = 0;

int main() {
    Reservation r1(101, "Ali");
    Reservation r2(202, "Ahmed");

    r1.display();
    cout << endl;

    r2.setGuestName("Ahmed Khan");
    r2.display();

    cout << "\nTotal Reservations: "
         << Reservation::getTotalReservations() << endl;

    return 0;
}

