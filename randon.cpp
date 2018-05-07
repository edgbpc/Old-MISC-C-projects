//testing random number generator 

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
unsigned seed = time(0);
srand(seed);

int maxValue, minValue, y;

cout << "Please give a max and min value seperated by a space." << endl;
cin >> maxValue >> minValue;

y = (rand() % (maxValue - minValue + 1)) + maxValue;

cout << y;

return 0;


}
