#include<iostream>
using namespace std;
int main(){
   int array[10]={1,2,3,4,5,6,7,8,9,10};
   int n=sizeof(array)/sizeof(array[0]);

   for (int i=0;i<n/2;i++){
    swap(array[i],array[n-1-i]);
   }
    for (int i=0;i<10;i++){
        cout<<array[i];
    }
}

