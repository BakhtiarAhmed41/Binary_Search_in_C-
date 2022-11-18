#include <iostream>
using namespace std;

int A[]= {2,5,5,5,6,6,8,9,9,9};
int n = sizeof(A)/sizeof(int);

int binary_search(int A[], int item){
    int loc;
    int start = 0;
    int end = n-1;
    int mid = (start + end)/2;


    while(start<=end  && A[mid]!=item){
        if(item<A[mid]){
            end = mid -1;
        }
        else{
            start = mid+1;
        }
        mid = (start + end)/2;

    }

        if(A[mid]==item){
        loc = mid;
    }
        else{
        loc = -1;
        }

        return loc;
  

    cout<<"The element is present at index no."<<loc;
}


int main(){
    binary_search(A, 9);
    }
