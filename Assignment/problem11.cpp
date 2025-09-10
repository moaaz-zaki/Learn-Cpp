#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int add(vector<int> nums);

int main()
{
    vector<int> numbers1{100, 200, 300, 400};

    for (int val : numbers1)
    {
        cout << val << " ";
    }

    numbers1.push_back(500);

    cout << "\nFirst Element Is: " << numbers1.front() << endl;
    cout << "Last Element Is: " << numbers1.back() << endl;

    cout << "======================" << endl;

    vector<int> numbers2{10, 20, 30, 40};
    vector<int>::iterator it = numbers2.begin();

    cout << "Method 1: \n"
         << "First Element Is: " << numbers2.front() << endl;
    cout << "Last Element Is: " << numbers2.back() << endl;

    cout << "\nMethod 2: \n"
         << "First Element Is: " << numbers2.at(0) << endl;
    cout << "Last Element Is: " << numbers2.at(numbers2.size() - 1) << endl;

    cout << "\nMethod 3: \n"
         << "First Element Is: " << numbers2[0] << endl;
    cout << "Last Element Is: " << numbers2[numbers2.size() - 1] << endl;

    cout << "\nMethod 4: \n"
         << "First Element Is: " << *it << endl;
    advance(it, 3);
    cout << "Last Element Is: " << *it << endl;

    cout << "======================" << endl;

    vector<int> numbers3{10, 20, 30, 40, 50, 60, 70, 80};
    vector<int>::iterator fir = numbers3.begin();
    auto last = numbers3.end() - 1;

    cout << *fir << endl;
    cout << *last << endl;
    cout << "======================" << endl;

    vector<float> floats = {1.5, 3.5, 5.5};
    vector<int> numbers{10, 20, 30, 40, 50, 60, 70, 80};
    vector<double> doubles;
    vector<float>::iterator it1;

    it1 = floats.begin() + 2;
    auto last1 = numbers.end() - 1;
    doubles.push_back(10);

    cout << *it1 << "\n";          // 5.5
    cout << *last1 << "\n";        // 80
    cout << doubles.at(0) << "\n"; // 10

    cout << "======================" << endl;

    vector<int> numbers4 = {10, 20, 30, 40, 50, 60, 70, 80};
    vector<int>::iterator it2 = numbers4.begin();

    cout << "Method 1: " << *(it2 + 4) << endl;
    cout << "Method 2: " << *(numbers4.begin() + 4) << endl;
    advance(it2, 4);
    cout << "Method 1: " << *it2 << endl;

    cout << "======================" << endl;

    vector<int> numbers5{10, 20, 10, 40, 50, 60, 10, 80};
    int check = 10;
    int count_one = 0;
    int count_two = 0;

    count_one = count(numbers5.begin(), numbers5.end() - 1, check);
    cout << "Method 1: " << count_one << endl;

    for (auto it = numbers5.begin(); it != numbers5.end() - 1; ++it)
    {
        if (*it == check)
        {
            count_two++;
        }
    }
    cout << "Method 2: " << count_two << endl;

    cout << "======================" << endl;

    vector<int> numbers6{10, 20, 10, 40, 50};
    vector<int>::iterator iter = numbers6.begin();

    for (;;)
    {
        cout << *iter << " ";
        ++iter;
        if (iter == numbers6.end())
        {
            break;
        }
    }
    cout << "\n======================" << endl;

    vector<int> numbers7 = {10, 20, 30, 40, 50};
    vector<int>::iterator iter1 = numbers7.begin();

    // Write Line Here
    advance(iter1, 2);
    cout << *iter1 << "\n"; // 30

    // Write Line Here
    iter1 = numbers7.end() - 1;
    cout << *iter1 << "\n"; // 50

    // Write Line Here
    advance(iter1, -3);
    cout << *iter1 << "\n"; // 20

    cout << "======================" << endl;

    vector<int> numbers8 = {10, 20, 30, 40, 50, 60, 70, 80};
    int helperone = 2;
    int helpertwo = 6;

    // Write Your Line Of Code Here
    numbers8.erase(numbers8.begin() + helperone, numbers8.begin() + helpertwo);

    for (int i : numbers8)
    {
        cout << i << "\n";
    }

    cout << "======================" << endl;

    vector<int> numbers9(100, 1000);
    cout << numbers9.at(0) << "\n";  // 1000
    cout << numbers9.at(99) << "\n"; // 1000

    cout << "======================" << endl;
    vector<int> numbers10;
    vector<float> floats1(100);

    // Fill Integers Here
    for (int i = 0; i < 100; ++i)
    {
        numbers10.push_back(1000);
    }
    // Fill Floats Here
    for (auto it = floats1.begin(); it < floats1.end(); ++it)
    {
        *it = 100.5;
    }

    cout << numbers10.at(0) << "\n";  // 1000
    cout << numbers10.at(99) << "\n"; // 1000

    cout << floats1.at(0) << "\n";  // 100.50
    cout << floats1.at(99) << "\n"; // 100.50

    cout << "======================" << endl;

    vector<int> numbers11 = {10, 20, 30, 40};

    // numbers11.pop_back();
    // numbers11.erase(numbers11.begin() + 3);
    numbers11.resize(numbers11.size() - 1);
    for (int i : numbers11)
    {
        cout << i << "\n";
    }

    cout << "======================" << endl;
    vector<int> numbersone = {10, 20, 30};
    vector<int> numberstwo = {5, 15, 25};

    cout << add(numbersone) << "\n";
    cout << add(numberstwo) << "\n";

    cout << "======================" << endl;

    vector<int> numbers12 = {5, 4, 3, 2, 1};
    // Method One
    // sort(numbers12.begin(), numbers12.end());
    // Method Two
    // reverse(numbers12.begin(), numbers12.end());
    // Method Three -> Use Swap + Loop For Challenge
    int j = numbers12.size() - 1;
    for (int i = 0; i < 2; ++i)
    {
        int temp;
        temp = numbers12.at(j);
        numbers12.at(j) = numbers12.at(i);
        numbers12.at(i) = temp;
        j--;
    }

    for (int i : numbers12)
    {
        cout << i << " ";
    }
    cout << "\n======================" << endl;

    vector<int> numbers13 = {1, 2, 3, 4, 5, 6, 7, 8};

    // Your Code Here
    reverse(numbers13.begin(), numbers13.end());
    sort(numbers13.begin(), numbers13.begin() + 3);
    sort(numbers13.begin() + 4, numbers13.end());

    for (int i : numbers13)
    {
        cout << i << " ";
    }
    cout << "\n======================" << endl;

    vector<int> n1 = {1, 2, 3};
    vector<int> n2 = {4, 5, 6};

    // Your Merge Code Here
    vector<int> allvectors;
    allvectors.resize(n1.size() + n2.size());
    merge(n1.begin(), n1.end(), n2.begin(), n2.end(), allvectors.begin());
    for (int i : allvectors)
    {
        cout << i << " ";
    }
    cout << "\n======================" << endl;

    vector<int> num2 = {1, 2, 3};
    vector<int> num3 = {4, 5, 6};
    vector<int> allvectors2;

    // Your Insert Code Here
    allvectors2.insert(allvectors2.end(), num2.begin(), num2.end());
    allvectors2.insert(allvectors2.end(), num3.begin(), num3.end());

    for (int i : allvectors2)
    {
        cout << i << " ";
    }
    cout << "\n======================" << endl;

    vector<int> firstnumbers = {10, 30, 50, 70};
    vector<int> secondnumbers = {20, 40, 60, 80};

    vector<int> new_vector;
    new_vector.resize(firstnumbers.size()+ secondnumbers.size());

    merge(firstnumbers.begin(), firstnumbers.end(), secondnumbers.begin(), secondnumbers.end(), new_vector.begin());
    sort(new_vector.begin(), new_vector.end());

    for(int i: new_vector){
        cout << i << " ";
    }
    cout << "\n======================" << endl;


    return 0;
}

int add(vector<int> nums)
{
    int result = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        result += nums.at(i);
    }
    return result;
}