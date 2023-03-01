#include <iostream>
using namespace std;

int main() {
     int val = 169;
     int *ptr1;
     int **ptr2;
     
     ptr1 = &val;
     ptr2 = &ptr1;
     
     cout<<"Value of variable val is:"<<val<<endl;
     cout<<"Address of pointer 1:"<<ptr1<<endl;
     cout<<"value  of pointer 1:"<<*ptr1<<endl;
     cout<<"Address of pointer2:"<<ptr2<<endl;
    return 0;
}

