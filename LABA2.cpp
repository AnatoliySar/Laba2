#include "stdafx.h"
#include <iostream>
using namespace std;

void quickSort(int arr[], int left, int right) {
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];
    while (i <= j) {
        while (arr[i] < pivot)
        i++;
        while (arr[j] > pivot)
        j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    };
    if (left < j)
    quickSort(arr, left, j);
    if (i < right)
    quickSort(arr, i, right);
 
} 
void print(int arr[], int n) {
    for (int i = 0; i <n; i++) {
    cout << arr[i] << " ";
    }
    cout << endl;
}
 
int main ()
{
	int n=0;
    int i;
	char ch;
 	int *arr, buf;
	arr=(int*)malloc(sizeof(int));
	printf ("Vvedite chisla, chtobi zavershit' vvod nazhmite Q\n"); 		
	do	{
			arr=(int*)realloc(arr, (n+2)*sizeof(int));
			scanf("%u", &arr[n]);
			n++;
		}
	while (ch = getchar() != 'Q');
	arr[n-1] = 0;   
	printf ("\n======================================\n");
	printf ("Vi vveli:\n\n");
	print(arr,n-1);
	printf ("\n======================================\nPosle sortirovki:\n\n");
    quickSort(arr, 0, n-2);
    print(arr,n-1);
	printf ("\n======================================\n\n");
	system ("pause");
}