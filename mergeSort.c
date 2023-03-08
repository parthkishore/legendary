#include <stdio.h>
void merge(int a[],int beg,int mid,int last){
    int n1=mid-beg+1;
    int n2=last-mid;
    int i,j,k;
    int larr[n1],rarr[n2];
    for(i=0;i<n1;i++){
        larr[i]=a[beg+i];
    }
    for(j=0;j<n2;j++){
        rarr[i]=a[mid+1+j];
    }
    i=0;
    j=0;
    k=beg;
    while(i<n1&&j<n2){
        if(larr[i]<rarr[j]){
            a[k]=larr[i];
            i++;
        }
        else{
            a[k]=rarr[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=larr[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=rarr[j];
        j++;
        k++;
    }
}
void mergeSort(int a[],int beg,int last)   {
    if(beg<last){
        int mid=(beg+last)/2;
        mergeSort(a,beg,mid);
        mergeSort(a, mid + 1, last);  
        merge(a, beg, mid, last); 
    }
}
void print(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
       
    }
    printf("\n");
}






int main(){
    int a[]={45,34,12,67,23,54};
    int n=sizeof(a)/sizeof(a[0]);
    printf("before sorting \n");
    print(a,n);
    printf("after sorting\n");
    mergeSort(a,0,n-1);
    print(a,n);
    return 0;
}
