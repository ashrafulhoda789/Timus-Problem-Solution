#include<iostream>

int main(){

    int n,sum=0;
    std::cin >> n;
    
    int i;
    if(n>0){
        for(i=1; i<=n; i++){
            sum = sum + i;
        }
    }else{
        for(i=1; i>=n; i--){
            sum = sum + i;
        }
    }

    std::cout << sum <<std::endl;

    
}