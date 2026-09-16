#include <iostream>
#include <string>
using namespace std;

class Member {
private:
    const int membershipID;
    string memberName;
    string contactNumber;
    static string gymName;
    static int totalMembers;

public:
    Member(int id, string name, string contact)
        : membershipID(id),
          memberName(name),
          contactNumber(contact) {
        totalMembers++;
    }

    void setMemberName(string name) {
        memberName = name;
    }

    string getMemberName() const {
        return memberName;
    }

    void setContactNumber(string contact) {
        contactNumber = contact;
    }

    string getContactNumber() const {
        return contactNumber;
    }

    static string getGymName() {
        return gymName;
    }

    static int getTotalMembers() {
        return totalMembers;
    }

    void display() const {
        cout << "Gym: " << gymName << endl;
        cout << "Membership ID: " << membershipID << endl;
        cout << "Member Name: " << memberName << endl;
        cout << "Contact Number: " << contactNumber << endl;
    }

    ~Member() {
        totalMembers--;
    }
};

string Member::gymName = "Fitness Arena";
int Member::totalMembers = 0;

int main() {
    Member m1(1001, "Ali", "03001234567");
    Member m2(1002, "Sara", "03111234567");

    m1.display();
    cout << endl;
    m2.display();

    cout << "\nGym Name: " << Member::getGymName() << endl;
    cout << "Active Memberships: "
         << Member::getTotalMembers() << endl;

    return 0;
}

