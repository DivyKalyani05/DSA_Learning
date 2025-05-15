#include <iostream>
using namespace std ;


int main(){
int arr[]={1,2,3,4,5,6,7,8};

int i;
int j;


for (i=8;i>=0;i--){

    int swap_count=0;
    for (j=0;j<=i;j++){
        if (arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swap_count ++;
        cout<<swap_count<<endl;

        }

        else {
            continue;
        }

    if (swap_count==0)
    break;
    }

}

for (i=0;i<=8;i++){
    cout << arr[i]<<" ";
}
}
