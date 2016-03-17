#include <iostream>
using namespace std;

void insert_sort(int* a,int tam)
{
	for(int j=2;j<tam;j++)
	{
		int key=a[j];
        int i=j-1;
        while(i>=0 && a[i]>key)
        {
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;
	}
}

int main() {
	int a[6]={31,41,59,26,41,58};
	insert_sort(a,6);
	for(int i=0;i<6;i++)
    {
        cout<<a[i]<<", ";
    }
	return 0;
}
