#include<iostream>
using namespace std;

int bs(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = (start+end)/2;

    while (start<= end)
    {
        /* code */
        if (arr[mid] == key)
        {
            /* code */
            return mid;
        }
        if (key>arr[mid])
        {
            /* code */
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int index = bs(even, 6, 18);
    cout<<"index of 18 is "<<index<<endl;

    int oddindex = bs(odd, 5, 14);
    cout<<"index of 14 is "<< oddindex<<endl;

    return 0;
}