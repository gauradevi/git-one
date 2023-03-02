#include <iostream>

using namespace std;

void swap(int* x, int *y){
     int temp = *x;
     *x = *y;
     *y = temp;
     }
     
     

int main(){

     int a=12, b =5;
     cout<<"Value of a and b before swapping"<<endl;
     
     swap(&a, &b);
     
     cout<<"Value of a and b after swapping"<<endl;
     }
