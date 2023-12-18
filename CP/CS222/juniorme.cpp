
#include <iostream>
using namespace std;


void rvereseArray(int arr[], int i, int j)
{
	while (i < j)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}	


void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}


int main()
{   
    int s;
    cout<<"Enter size"<<endl;
    cin>>s;
    int arr[s];
    for (int i = 0; i < s; i++)
    {
        /* code */
        cin>>arr[i];
    }
    
	int n = sizeof(arr) / sizeof(arr[0]);
    
	rvereseArray(arr, 0, n-1);

	cout << "Reversed array is" << endl;

	printArray(arr, n);
	return 0;
}
