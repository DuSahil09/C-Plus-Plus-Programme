#include<iostream>
using namespace std;
void prime();
int main()
{
    prime();
    return 0;
}
void prime(){
    int i,num,remaider;
    cout<<"Enter the number for checking prime:";
    cin>>num;
    for(i = 2 ;i <= num ; i++){
        if(num%i == 0){
            remaider = 0;
            break;
        }
    }
    if(remaider == 0){
        cout <<num<<"is not a prime number.";
    }
    else{
        cout << num <<"is a prime number.";
    }
}
