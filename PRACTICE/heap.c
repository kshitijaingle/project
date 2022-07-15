#include<stdio.h>

void swap(int *p,int *r)
{
	int temp=*p;
	*p=*r;
	*r=temp;
}

void Heapify_method(int arr[],int n,int i)
{
        int largest=i;
        int left=(2*i)+1;
        int right=(2*i)+2;

        while(left<n && arr[largest]<arr[left])
	{
                largest=left;
	}
        while(right<n && arr[largest]<arr[right])
	{
                largest=right;
	}

        if(largest!=i)
	{
		swap(&arr[i],&arr[largest]);
		Heapify_method(arr,n,largest);
	}
}


void Heapsort(int arr[],int n)
{
        int i,temp;
        //to build the max tree
        for(i=n/2-1;i>=0;i--)
        {
                Heapify_method(arr,n,i);
        }

        //To delete the array
        for(i=n-1;i>=0;i--)
        {
                swap(&arr[0],&arr[i]);
                Heapify_method(arr,i,0);
        }
}

void print_array(int arr[],int n)
{
        for(int i=0;i<n;i++)
                printf("%d ", arr[i]);
        printf("\n");
}

int main()
{
        int arr[25];
        int n;
        printf("Enter the no. of elements\n");
        scanf("%d",&n);
        printf("Enter the value of the element\n");
	    for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
        print_array(arr,n);
        Heapsort(arr,n);
        printf("Element after sorted order\n");
        print_array(arr,n);
}

