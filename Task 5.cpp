#include <iostream>
#include <string>
using namespace std;

class Policy {
private:
    const int policyNumber;
    string policyholderName;
    double premiumAmount;
    static int totalPolicies;

public:
    Policy(int number, string name, double premium)
        : policyNumber(number),
          policyholderName(name),
          premiumAmount(premium) {
        totalPolicies++;
    }

    void setPolicyholderName(string name) {
        policyholderName = name;
    }

    string getPolicyholderName() const {
        return policyholderName;
    }

    void setPremiumAmount(double premium) {
        premiumAmount = premium;
    }

    double getPremiumAmount() const {
        return premiumAmount;
    }

    static int getTotalPolicies() {
        return totalPolicies;
    }

    void display() const {
        cout << "Policy Number: " << policyNumber << endl;
        cout << "Policyholder: " << policyholderName << endl;
        cout << "Premium Amount: " << premiumAmount << endl;
    }

    ~Policy() {
        cout << "Policy " << policyNumber
             << " has been closed." << endl;
    }
};

int Policy::totalPolicies = 0;

int main() {
    Policy p1(10001, "Ali Khan", 25000);
    Policy p2(10002, "Sara Ahmed", 30000);

    p1.display();
    cout << endl;
    p2.display();

    cout << "\nTotal Policies: "
         << Policy::getTotalPolicies() << endl;

    return 0;
}

