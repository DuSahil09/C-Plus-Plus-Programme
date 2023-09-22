#include<iostream>
using namespace std;
int  prime();
int main()
{
    int i,num,flag = 0;
    num = prime();
    for(i = 2 ;i <= num ; i++){
        if(num%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout <<num<<"is not a prime number.";
    }
    else{
        cout << num <<"is a prime number.";
    }
    return 0;
}
int prime(){
    int n;
    cout<<"Enter a positive integer fo check :";
    cin>>n;
    return n;
}
