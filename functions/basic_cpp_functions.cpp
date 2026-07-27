#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // Using <iostream>
    cout << "Hello, Geek!" << endl;

    // Using <cmath>
    double squareRoot = sqrt(25);
    cout << "Square root of 25: " << squareRoot << endl;

    // Using <cstdlib>
    int randomNum = rand() % 100; // Random number between 0 and 99
    cout << "Random number: " << randomNum << endl;

    // Using <cstring>
    char str1[20] = "Hello";
    char str2[] = " World";
    strcat(str1, str2);
    cout << "Concatenated string: " << str1 << endl;

    // Using <vector>
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "Vector elements: ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    // Using <string>
    string greeting = "Hello, ";
    string name = "Programmer";
    string fullGreeting = greeting + name;
    cout << "Greeting message: " << fullGreeting << endl;

    return 0;
}
