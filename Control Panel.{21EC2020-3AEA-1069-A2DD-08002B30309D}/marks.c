#include <stdio.h>
#define N 6
int solve(int marks[], int n, char gender){
    int g_sum = 0;
    int b_sum = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 != 0){
            g_sum += marks[i];
        }else{
            b_sum += marks[i];
        }    
    }
    if(gender == 'b')
        return b_sum;
    return g_sum;
}
int main(){
    int marks[N] = {88,90,67,78,89,80};
    char gender = 'b';
   
    int sum = solve(marks, N, gender);
    printf("%d", sum);
}