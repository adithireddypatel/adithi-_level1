//Write a program to find the sum of n different numbers using 4 functions#include<stdio.h>
int main() {
    get_input();
    return 0;
}
void get_input() {
int n;
    printf("Enter total number of values:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d numbers: ",n);
    for(int i=0; i<n; i++) {
             scanf("%d", &arr[i]);
    }
    calculate(n, arr);
}
 void  calculate(int n, int arr[ ])
{
          int s=0;
          for(int i=0; i<n;i++) {
                       s = s +arr[i];
          }
          display_out(s,n);
}
void display_out(int s, int n)
{
        printf("sum of the given %d num is %d", n, s);
}

