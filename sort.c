#include "sort.h"
void read(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
}

void print(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

void insertion_sort(int a[], int n){
	for(int n; i<n ; i++){
		int key = a[i];
        int j=i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=key;
    }
}

void selection_sort(int a[], int n){
	for(int n; i<n; i++){
		for(int i=0; i<n-1; i++)
    {
        int min=i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            } }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
	}        
}
}

void bubble_sort(int a[], int n){
	for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
