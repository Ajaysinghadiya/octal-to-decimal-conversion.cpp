#include <iostream>
using namespace std;

int octalToDecimal(int num)
{
    int remaindar;  //declaring the remaindar
    int ans = 0;    // initialising the final ans
    int x = 1;      //initialising  the 2 the power zero
    while (num > 0) //while loop begins
    {
        remaindar = num % 2;       //remaindar
        ans = remaindar * x + ans; //ans=remaindar*2^0+ans
        x = x * 8;                 //increasing the power of 8
        num = num / 10;            //for next tern
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter any bianary number" << endl;
    cin >> n;
    cout << octalToDecimal(n) << endl; //calling the octalToDecimal function
    return 0;
}
