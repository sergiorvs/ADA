#include <iostream>


using namespace std;
void marge(int*A , int p ,int q, int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int L[n1+1],R[n2+1];
    for (int i=0 ; i<n1;++i)
       L[i]=A[p+i];
    for (int j =0; j<n2;++j)
       R[j]=A[q+j+1];
    L[n1]=999;
    R[n2]=999;
    int i=0;
    int j=0;
    for(int k=p;k<=r;++k)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i++];
        }
        else
        {
            A[k]=R[j++];
        }
    }
}

 void merge_sort(int *A,int p, int r)
 {
     cout<<(p+r)/2<<",  "<<r<<endl;
     if(p<r)
     {
         merge_sort(A,p,(p+r)/2);
         merge_sort(A,((p+r)/2)+1,r);
         marge(A,p,(p+r)/2,r);
     }
 }
int main()
{
    int A[8]={3,4,2,7,6,5,2,1};
    merge_sort(A,0,7);
    for (int i=0;i<8;++i)
    {
        cout<<A[i]<<",";
    }
    return 0;
}
