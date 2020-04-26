#include<stdio.h>
int main(){
    char a[100];
    char b[100];
    char c[100];
    printf("Enter the first string: ");
    gets(a);
    printf("Enter the second string: ");
    gets(b);
    int ans = 0;
    for(int i=0; i<a[i]; i++){
        c[i] = a[i];
        ans++;
    }
    for(int i=0; i<b[i]; i++){
        c[ans] = b[i];
        ans++;
    }
    printf("The concatenate of the string is: ");
    puts(c);
}