#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int get_min_number(vector<int> numbers);
int get_max_number(vector<int> numbers);

int main (){
    cout << "===============================" << endl;
    cout << "Get Minimum And Maximum Numbers" << endl;
    cout << "===============================" << endl;

    vector<int> numbers;
    int size;
    cout << "Enter The Size Of Vector: ";
    cin >> size;

    numbers.resize(size);

    for (int i = 0; i < size; i++){
        cout << "Number[" << i + 1 << "]: ";
        cin >> numbers.at(i);
    }
    cout << "============================" << endl;
    cout << "Minimum Number Is:  " << get_min_number(numbers) << endl;
    cout << "MaxiMum Number Is:  " << get_max_number(numbers) << endl;

    return 0;
}

int get_min_number (vector<int>numbers){
    //Method 1:
    int min = numbers.at(0);

    for (int i = 1; i < numbers.size(); ++i){
        if(numbers.at(i) < min){
            min = numbers.at(i);
        }
    }
    
    return min;
    
    //Method 2:
    
    //  sort(numbers.begin(), numbers.end());
    //  return numbers.at(0);

}

int get_max_number (vector<int>numbers){
    //Method 1:
    // int max = numbers.at(0);

    // for (int i = 1; i < numbers.size(); ++i){
    //     if(numbers.at(i) > max){
    //         max = numbers.at(i);
    //     }
    // }
    
    // return max;
    //Method 2:
    
     sort(numbers.begin(), numbers.end());
     return numbers.back();
    

}