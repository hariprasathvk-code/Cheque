#include <iostream>
#include <string>
using namespace std;

// Global variables 
string senderAcc, receiverAcc;
string bankCard;
double value;
int days;
char authorize;

// Initialization Function
void initialization() {
    int choice;
    cout << "Choose Input Method:\n";
    cout << "1. Insert Bank Card\n";
    cout << "2. Enter Bank Account Number\n";
    cout << "Enter choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Bank Card Inserted.\n";
        bankCard = "Card123"; // Simulated card number
    } 
    else if (choice == 2) {
        cout << "Enter Bank Account Number: ";
        cin >> bankCard;  // Store account number
    } 
    else {
        cout << "Invalid choice. Transaction aborted.\n";
        exit(0);  // Stop program
    }

    cout << "Enter Receiver Bank Account: ";
    cin >> receiverAcc;

    cout << "Cheque inserted to machine.\n";

    cout << "Enter Transaction Value: ";
    cin >> value;

    cout << "Enter Sender Bank Account: ";
    cin >> senderAcc;
}

// Process Function
void process() {
    cout << "Enter number of days since cheque issued: ";
    cin >> days;

    if (days <= 7) {
        cout << "Do you authorize the transaction? (Y/N): ";
        cin >> authorize;

        if (authorize == 'Y' || authorize == 'y') {
            cout << "Transaction Successful! Money transferred to receiver account.\n";
        } else {
            cout << "Invalid Transaction. Authorization denied.\n";
        }
    } else {
        cout << "Cheque expired (>7 days). Transaction requires sender review.\n";
        cout << "Invalid Transaction.\n";
    }
}
// Termination Function
void termination() {
    cout << "End Transaction.\n";
}
// Main Function
int main() {
    initialization();
    process();
    termination();
    return 0;
}
