#include <iostream>
using namespace std;
 
void function(int* ptr) { *ptr = 5; }
 
// Driver code
int main()
{
    int x = 9;
    //before swapping
    cout << "value of x before calling fun: " << x << endl;
    fun(&x);
 
    //after swapping
    cout << "value of x after calling fun: " << x << endl;
    return 0;
}

