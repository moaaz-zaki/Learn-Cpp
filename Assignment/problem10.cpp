#include <iostream>
#include <ctype.h>
using namespace std;

int calcSpecial(int n1, int n2);
float money(float salary, int days);
int plusnums(int numone, int numtwo);
int minusnums(int numone, int numtwo);
int divnums(int numone, int numtwo);
void the_power(int num, int exp);
int before_result(int num1, int num2);
int plus_and_multiply(int nums[], int nums_size);
int sum_all(int nums[], int nums_size, int no_need);
int first_negative(int nums[], int nums_size);
string swapping(string text);
int min_positive(int nums[], int nums_size);
int calculate(int n1, int n2, string oper = "add");
int calculation(int n1, int n2 = 50, int n3 = 150);
string greeting(string name, string gander = "");
string create_URL(string url, string name, string domain, bool check = true);
float avarage(int nums[], int nums_size);
int book(int n1, int n2, int n3, int shelf);
int pricing(int n1, int n2, int n3, float n4);

int main()
{
    int numbers1[]{10, 20, 3, 30, 5, 7, 40};
    int numbers1_size = size(numbers1);

    int numbers2[]{13, 20, 3, 30, 5, 7, 40, 13};
    int number2_size = size(numbers2);
    int no_need = 13;

    int numbers3[]{-10, -20, 15, 100, 10, 5, -50, 0};
    int number3_size = size(numbers3);

    int numbers4[]{-10, -20, 15, 100, 10, 5, -50, 0, -5, -10};
    int number4_size = size(numbers4);

    int numbers5[]{10, 20, 15, 25, 30, 35};
    int number5_size = size(numbers5);

    cout << calcSpecial(40, 40) << endl;
    cout << calcSpecial(200, 50) << endl;
    cout << calcSpecial(100, 300) << endl;
    cout << "=========\n";

    cout << money(2015, 21) << endl;
    cout << money(4500, 40) << endl;
    cout << "=========\n";

    cout << plusnums(50, 60) << "\n";
    cout << minusnums(150, 50) << "\n";
    cout << divnums(100, 5) << "\n";
    cout << "=========\n";

    cout << calculation(50, 100, 150) << endl;
    cout << calculation(100, 50) << endl;
    cout << calculation(100) << endl;
    cout << "=========\n";

    the_power(2, 5);
    cout << "=========\n";

    cout << swapping("hero Of THe PROgramming") << endl;
    cout << "=========\n";

    cout << before_result(10, 5) << endl;
    cout << before_result(3, 15) << endl;
    cout << "=========\n";

    cout << plus_and_multiply(numbers1, numbers1_size) << endl;
    cout << "=========\n";

    cout << sum_all(numbers2, number2_size, no_need) << endl;
    cout << "=========\n";

    cout << min_positive(numbers3, number3_size) << endl;
    cout << "=========\n";

    cout << first_negative(numbers4, number4_size) << endl;
    cout << "=========\n";

    cout << create_URL("https", "elzero", "org") << endl;
    cout << create_URL("https", "google", "com", false) << endl;
    cout << create_URL("http", "learn", "net") << endl;
    cout << "=========\n";

    cout << greeting("Osama", "Male") << endl;
    cout << greeting("Eman", "female") << endl;
    cout << greeting("Sameh") << endl;
    cout << "=========\n";

    cout << calculate(10, 20) << endl;
    cout << calculate(10, 20, "a") << endl;
    cout << calculate(10, 20, "s") << endl;
    cout << calculate(10, 20, "subtract") << endl;
    cout << calculate(10, 20, "multiply") << endl;
    cout << calculate(10, 20, "m") << endl;
    cout << calculate(50, 5, "d") << endl;
    cout << calculate(20, 10, "devision") << endl;
    cout << calculate(10, 20, "invaild") << endl;
    cout << "=========\n";

    cout << avarage(numbers5, number5_size) << endl;
    cout << "=========\n";

    cout << book (10, 4, 3, 4) << endl;
    cout << book (10, 4, 3, 2) << endl;
    cout << "=========\n";

    cout << pricing(50, 10, 800, 20) << endl;
    cout << "=========\n";

    return 0;
}

int calcSpecial(int n1, int n2)
{

    if (n1 == n2)
    {
        return n1 + n2;
    }
    else if (n1 > n2)
    {
        return n1 - n2;
    }
    else
    {
        return n2 - n1;
    }
}

float money(float salary, int days)
{
    int week = days / 7;
    int total_days = days - week * 2;
    return salary / total_days;
}

int plusnums(int numone, int numtwo)
{
    return numone + numtwo;
}

int minusnums(int numone, int numtwo)
{
    return numone - numtwo;
}

int divnums(int numone, int numtwo)
{
    return numone / numtwo;
}

void the_power(int num, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= num;
    }
    cout << result << endl;
}

string swapping(string text)
{
    string result;
    for (int i = 0; i < size(text); i++)
    {
        if (text[i] == 'h' || text[i] == 'H')
        {
            result += text[i];
        }
        else if (isspace(text[i]))
        {
            result += text[i];
        }
        else if (isupper(text[i]))
        {
            result += tolower(text[i]);
        }
        else
        {
            result += toupper(text[i]);
        }
    }
    return result;
}

int before_result(int num1, int num2)
{
    int result = 0;
    if (num1 > num2)
    {
        for (int i = 0; i <= num2; i++)
        {
            result += num1;
            num1--;
        }
    }
    else
    {
        for (int i = 0; i <= num1; i++)
        {
            result += num2;
            num2--;
        }
    }
    return result;
}

int plus_and_multiply(int nums[], int nums_size)
{
    for (int i = 0; i < nums_size; i++)
    {
        if (i == 0 || i == 2)
        {
            continue;
        }
        if (nums[i] % 2 == 0)
        {
            nums[0] += nums[i];
        }
        else
        {
            nums[2] *= nums[i];
        }
    }
    return nums[0] + nums[2];
}

int sum_all(int nums[], int nums_size, int no_need)
{
    int result = 0;

    for (int i = 0; i < nums_size; i++)
    {
        if (nums[i] != no_need)
        {
            result += nums[i];
        }
    }

    return result;
}

int min_positive(int nums[], int nums_size)
{
    int min = nums[0];
    for (int i = 1; i < nums_size; i++)
    {
        if (nums[i] > 0)
        {
            if (nums[i < min])
            {

                min = nums[i];
            }
        }
    }
    return min;
}

int first_negative(int nums[], int nums_size)
{
    int max = nums[0];

    for (int i = 1; i < nums_size; i++)
    {
        if (nums[i] < 0)
        {
            if (nums[i] > max)
            {
                max = nums[i];
            }
        }
    }
    return max;
}
int calculate(int n1, int n2, string oper)
{
    if (oper == "add" || oper == "a")
    {
        return n1 + n2;
    }
    else if (oper == "subtract" || oper == "s")
    {
        return n1 - n2;
    }
    else if (oper == "multiply" || oper == "m")
    {
        return n1 * n2;
    }
    else if (oper == "devision" || oper == "d")
    {
        return n1 / n2;
    }
    else
    {
        cout << "Invaild Opertation\t";
        return 0;
    }
}

int calculation(int n1, int n2, int n3)
{
    return n1 + n2 + n3;
}

string create_URL(string url, string name, string domain, bool check)
{
    string result;
    if (check)
    {
        result = "// " + url + "://www." + name + "." + domain;
    }
    else
    {
        result = "// " + url + "://" + name + "." + domain;
    }
    return result;
}

string greeting(string name, string gander)
{

    if (gander == "Male" || gander == "male")
    {
        return "Hello Mr " + name;
    }
    else if (gander == "Female" || gander == "female")
    {
        return "Hello Miss " + name;
    }
    else
    {
        return "Hello " + name;
    }
}

float avarage(int nums[], int nums_size)
{
    int sum = 0;
    for (int i = 0; i < nums_size; i++)
    {
        sum += nums[i];
    }
    return (float)sum / nums_size;
}

int book (int n1, int n2, int n3, int shelf){
    int book_space = n1 * 2 + n2 * 4 + n3 * 6;
    int shelf_space = shelf * 20;

    if(shelf_space > book_space){
        return shelf_space - book_space;
    }else{
        return 0;
    }
}

int pricing(int n1, int n2, int n3, float n4){
   int new_phone = n1 - n2;
   int total = (new_phone * n3 + n2 * (n3 - 200));
   return  total * (n4*0.1-1 ) ;
}