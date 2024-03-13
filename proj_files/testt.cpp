#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>

using namespace std;


void createEntry() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    stringstream filename;
    filename << "entry_" << 1900 + ltm->tm_year << "_"
             << 1 + ltm->tm_mon << "_"
             << ltm->tm_mday << "_"
             << ltm->tm_hour << "_"
             << ltm->tm_min << "_"
             << ltm->tm_sec << ".txt";

    ofstream file(filename.str());
    if (file.is_open()) {
        string content;
        cout << "Enter your journal entry (press Ctrl+D to finish):\n";
        while (getline(cin, content)) {
            file << content << endl;
        }
        file.close();
        cout << "Entry created successfully.\n";
    } else {
        cout << "Error creating entry.\n";
    }
}


void readEntry() {
    cout << "List of entries:\n";
    system("ls entry_*.txt");

    string filename;
    cout << "Enter filename to read: ";
    cin >> filename;

    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Error reading entry.\n";
    }
}


void deleteEntry() {
    cout << "List of entries:\n";
    system("ls entry_*.txt");

    string filename;
    cout << "Enter filename to delete: ";
    cin >> filename;

    if (remove(filename.c_str()) == 0) {
        cout << "Entry deleted successfully.\n";
    } else {
        cout << "Error deleting entry.\n";
    }
}

int main() {
    int choice;
    do {
        cout << "\nDigital Journal System\n";
        cout << "1. Create Entry\n";
        cout << "2. Read Entry\n";
        cout << "3. Delete Entry\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createEntry();
                break;
            case 2:
                readEntry();
                break;
            case 3:
                deleteEntry();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}