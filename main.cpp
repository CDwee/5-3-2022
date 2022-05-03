// Started at 5:34 5-3-2022

 // Section 9
// Challenge

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
        vector<int> numbers {};
        char selection {};
        
    do {
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> selection;
        
        if (selection == 'p' || selection == 'P') {
            if (numbers.size() == 0) 
                cout << "[] - the list is empty" << endl;
            else {
                cout << "[ ";
                for (auto num: numbers)
                    cout << num << " ";
                cout << "]" << endl;;
            }
        } else if (selection == 'a' || selection == 'A') {
            int num_to_add{};
            cout << "Enter an integer to add to the list: ";
            cin >> num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << " added" << endl;
        } else if (selection == 'm' || selection == 'M') {
            if (numbers.size() == 0)
                cout << "Unable to calculate mean - no data" << endl;
            else {
                double total {};
                for (auto num: numbers)
                    total += num;
                cout << "The mean is: " << total/numbers.size() << endl;
            }
        } else if (selection == 's' || selection == 'S') {
            if (numbers.size() == 0)
                cout << "Unable to determine the smallest - list is empty" << endl;
            else {
                int smallest_num = numbers.at(0);
                for (auto num: numbers)
                    if (num < smallest_num)
                        smallest_num = num;
                        cout << "The smallest number is: " << smallest_num << endl;;
            }
        } else if (selection == 'l' || selection == 'L')
            if (numbers.size() == 0)
                cout << "Unable to determine the largest - list is empty" << endl;
            else {
                int largest_num = numbers.at(0);
                for (auto num: numbers)
                    if (num > largest_num)
                        largest_num = num;
                        cout << "The largest number is: " << largest_num << endl;;
            }
    } while (selection != 'q' && selection != 'Q');
    
    cout << endl;
    return 0;
}

// Ended at 6:43 5-3-2022
