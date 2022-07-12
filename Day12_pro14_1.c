14. Find common elements in three sorted arrays, 3 array values are given as input to program.
program:

int main()
{
    int arr1[] = { 1,2,3,5,7,11,13,17,19};
    int arr2[] = { 1,2,4,8,16,32,64,128 };
    int arr3[] = { 1,2,17,19,45,46,93,53 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);//size of array 1
    int n2 = sizeof(arr2) / sizeof(arr2[0]);//size of array 2
    int n3 = sizeof(arr3) / sizeof(arr3[0]);//size of array 3
    printf("The common elements are:");
    int i = 0, j = 0, k = 0;//instilization
    while (i < n1 && j < n2 && k < n3) {//Comparing 3 arrays by using while loop
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            printf("%d ", arr1[i]);
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr3[k])
            j++;
        else
            k++;
    }


    printf(" ");//common numbers
    return 0;
}