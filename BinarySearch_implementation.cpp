#include<iostream>
using namespace std;

int Binarysearch(int arr[],int size,int key){
    int start=0;
    int end=start-1;

    int mid = (start + end)/2;

while(start<=end){
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]<key){
        start=mid+1;
    }
    else{
        start=mid-1;
    }
    mid=(start+end)/2;
}
return -1;
}
int main(){
    int even[6]={2,4,6,8,10,24};
    int odd[5]={3,7,8,11,13};

    int index=Binarysearch(even,6,20);

    cout<<"Index of 18 is"<<index<<endl; 
    return 0;
}
