#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

bool prime(int n){
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0) return false;
    for (int i = 3; i <= sqrt(n); i+=2)
    {
        if(n%i==0) return false;
    }
    return true;
    
}

int main(){
    int n=7;
    if(prime(n)==true)cout<<"Prime"<<endl;
    else cout<<"Not prime";
    return 0;
}