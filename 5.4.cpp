#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

class Fahrenheit; // Forward declaration

class Celsius {
    float temp;
public:
    void get_data()
    {
        cout<<"Enter temp in celsius:";
        cin>>temp;
    }
    Celsius(float t = 0) : temp(t) {}

    // Conversion to Fahrenheit
    operator Fahrenheit();

    float getTemp() const { return temp; }

    bool operator==(const Celsius& other) const {
        return fabs(temp - other.temp) < 0.01; // Floating point tolerance
    }
};

class Fahrenheit {
    float temp;
public:
    void get_data()
    {
        cout<<"Enter temp in fahrenheit:";
        cin>>temp;
    }
    Fahrenheit(float t = 32) : temp(t) {}

    // Conversion to Celsius
    operator Celsius() {
        return Celsius((temp - 32) * 5.0 / 9.0);
    }

    float getTemp() const { return temp; }

    bool operator==(const Fahrenheit& other) const {
        return fabs(temp - other.temp) < 0.01;
    }
};

// Implementing Celsius to Fahrenheit conversion
Celsius::operator Fahrenheit() {
    return Fahrenheit(temp * 9.0 / 5.0 + 32);
}

int main() {
    // Create objects
    Celsius c1;
    c1.get_data();
    Fahrenheit f1 = c1; // Celsius to Fahrenheit conversion
     Fahrenheit f2;
     f2.get_data();
    Celsius c2 = f2;    // Fahrenheit to Celsius conversion

    // Comparison
    if (c1 == c2)
        cout << "Temperatures are equal.\n";
    else
        cout << "Temperatures are different.\n";

    // Using a queue to store converted temperatures
    queue<Fahrenheit> tempQueue;

    tempQueue.push(c1);
    tempQueue.push(f1);
    tempQueue.push(c2);
    tempQueue.push(f2);

    cout << "\nQueue of temps:\n";
    while (!tempQueue.empty()) {
        Fahrenheit f = tempQueue.front();
        cout << f.getTemp()<<endl;
        tempQueue.pop();
    }

    return 0;
}
