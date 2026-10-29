#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    char names[5][20];
    int marks[5][3];
    int total[5];
    float avg[5];
    int topstu = 0;
    for(int i = 0; i < 5; i++) {
        cout << "Enter name for student " << i + 1 << ": ";
        cin.getline(names[i], 20);    
        total[i] = 0;
        cout << "Enter 3 marks: ";
        for(int j = 0; j < 3; j++) {
            cin >> marks[i][j];
            total[i] += marks[i][j];
        }
        avg[i] = total[i] / 3.0;
        cin.ignore(); 
    }   
    for(int i = 1; i < 5; i++) {
        if(total[i] > total[topstu]) {
            topstu = i;
        }
    }
    cout << "\n" << setw(10) << left << "Name" 
         << setw(6) << "M1" << setw(6) << "M2" << setw(6) << "M3" 
         << setw(8) << "Total" << setw(6) << "Avg" << "\n";
    cout << "\n";
    for(int i = 0; i < 5; i++) {
        cout << setw(10) << names[i]
             << setw(6) << marks[i][0] 
             << setw(6) << marks[i][1] 
             << setw(6) << marks[i][2] 
             << setw(8) << total[i] 
              << avg[i] << "\n";
    }
     cout << "\nTop student: " << names[topstu] << endl;
    return 0;
}
