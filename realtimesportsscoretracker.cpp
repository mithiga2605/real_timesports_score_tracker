#include <iostream>
#include <string>
using namespace std;

int main() {
    string team1, team2;
    int score1 = 0, score2 = 0;
    int choice, points;

    cout << "=== Real-Time Sports Score Tracker ===" << endl;

    // Input team names
    cout << "Enter Team 1 Name: ";
    cin >> team1;
    cout << "Enter Team 2 Name: ";
    cin >> team2;

    do {
        cout << "\nCurrent Score: " << team1 << " " << score1 
             << " - " << team2 << " " << score2 << endl;

        cout << "\nMenu:\n";
        cout << "1. Add score to " << team1 << endl;
        cout << "2. Add score to " << team2 << endl;
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter points to add to " << team1 << ": ";
                cin >> points;
                score1 += points;
                break;

            case 2:
                cout << "Enter points to add to " << team2 << ": ";
                cin >> points;
                score2 += points;
                break;

            case 3:
                cout << "\nFinal Score: " << team1 << " " << score1 
                     << " - " << team2 << " " << score2 << endl;

                if(score1 > score2)
                    cout << team1 << " Wins!" << endl;
                else if(score2 > score1)
                    cout << team2 << " Wins!" << endl;
                else
                    cout << "Match Draw!" << endl;
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 3);

    return 0;
}
