#include<stdio.h>

void displyArray(int arr[], int size){
    printf("Array elements: ");
    for(int i = 0; i<size; i++)
    {
        printf("%d", &arr[i]);
    }
    printf("\n");
}

int insertelement(int arr[], int size, int position, int element){
    if (size>=100)
    {
        printf("Array is full");
        return -1;
    }
    
    if (position<0 || position>size)
    {
        /* code */
        printf("Invalid position");
        return -1;
    }
    
    for (int i = size; i > position; i--)
    {
        /* code */
        arr[i] = arr[i-1];
    }
    
    arr[position] = element;

    size++;

    return 0;
}


int deleteelement(int arr[], int size, int position){
    if (size>=100)
    {
        printf("Array is full");
        return -1;
    }
    
    if (position<0 || position>size)
    {
        /* code */
        printf("Invalid position");
        return -1;
    }

    for(int i = position; i<size-1;i--)
    {
        arr[i] = arr[i+1];
    }
    size--;

    return 0;
}

int main(){
    int arr[100];
    int size = 0;
    int choice;

    printf("Enter choice: \n 1. Enter element \n 2. delete element \n 3. print array \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Element and position ");
        int boonk;
        int position;
        scanf("%d%d", &boonk, &position);
        insertelement(arr, &size, position, boonk);
        break;
    case 2:
        printf("position ");
        int position;
        scanf("%d", &position);
        deleteelement(arr, size, position);
        break;
    case 3:
            displyArray(arr, size);
            break;
    // case 4:
    //         exit();
    default:
        printf("invalid");
        break;
    }
}