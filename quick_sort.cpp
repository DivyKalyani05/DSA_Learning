#include <iostream>
using namespace std;

int partition(int *arr,int s, int e){
    

    int count_lesser_pivot=0;
    int pivot=arr[s];
    for (int i=s+1;i<=e;i++){
        if (arr[i]<=pivot){
            count_lesser_pivot++;
        }
        
    }

    swap(arr[s],arr[s+count_lesser_pivot]);
    int pi =s+count_lesser_pivot;

    int start_index=s;
    int end_index=e;

    while (start_index<pi && end_index>pi){
        while (arr[start_index]<pivot){
            start_index++;
        }
        while (arr[end_index]>pivot){
            end_index--;
        }

        if(start_index<pi && end_index>pi){
            swap (arr[start_index++],arr[end_index--]);
        }

        
            }
            return pi;
        }
    



    



void quick_sort(int *arr,int s,int e){
    if (s>=e){
        return;
    }
    int pivot=partition(arr,s,e);

    quick_sort(arr,s,pivot-1);

    quick_sort(arr,pivot+1,e);
}





int main(){
    int arr[9]={23,42,45,56,43,34,21,12,74};

    quick_sort(arr,0,8);

    for (int i=0;i<9;i++){
        cout << arr[i]<<" ";
    }
    cout<<endl;

    
}