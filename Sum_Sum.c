#include <stdio.h>
int main(){
    int n,i,pos=0,neg=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>0){
            pos+=arr[i];
        }
        else{
            neg+=arr[i];
        }
    }
    printf("%d %d\n",pos,neg);
    return 0;
}