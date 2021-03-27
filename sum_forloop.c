#include<stdio.h>

<<<<<<< HEAD
=======
int sum(int arr[], int n) {
    int s = 0;
    int i;
    for (i=0;i<n;i++){
        s += arr[i];
    }
    return s;
}


>>>>>>> ashikul_test
int main() {
    int i,j,k,n=3;
    int arr[] = {1, 3, 5};
    printf("sum of the elements of this array is %d", sum(arr, n));
    return 0;
}

<<<<<<< HEAD
int sum(int arr[], int n) {
    int s = 0;
    int i;
    for (i=0;i<n;i++){
        s += arr[i];
=======
    printf("Enter size of array ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%dth element ",i+1);
        scanf("%d",&arr[i]);
>>>>>>> ashikul_test
    }
    return s;
}

int ret_z(){
    return 0;
}

void hello(){
    printf("hello");
}
