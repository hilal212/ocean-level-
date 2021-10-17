#include <iostream>

using namespace std;

int main()

{
    const float rise_per_year= 1.5; 

    float number_of_millimeters_each_year = 0;

    cout << "--------------------------------------------------\n";
    for (int i = 1; i <= 25; i++)
    {
        number_of_millimeters_each_year += rise_per_year;
        
        cout << "Year " << i << ":    " 
             << number_of_millimeters_each_year 
             << endl;
    }
    cout << "--------------------------------------------------\n";

    return 0;
}