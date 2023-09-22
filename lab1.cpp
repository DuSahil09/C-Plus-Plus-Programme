#include<iostream>
#include<string>
using namespace std;

class BankAccount{
private:
string name;
int account_number;
string account_type;
double balance;
public:
void assign(string n, int a_n, string a_t, double b){
name = n;
account_number = a_n;
account_type = a_t;
balance = b;
}
void deposit(double amount){
balance += amount;
cout<<"Amount deposited: "<<amount<<endl;
cout<<"New balance: "<<balance<<endl;
}
void withdraw(double amount){
if(amount>balance){
cout<<"Insufficient balance"<<endl;
}else{
balance -= amount;
cout<<"Amount withdrawn: "<<amount<<endl;
cout<<"New balance: "<<balance<<endl;
}
}
void display(){
cout<<"Name: "<<name<<endl;
cout<<"Balance: "<<balance<<endl;
}
};

int main(){
BankAccount customer[10];
string name, account_type;
int account_number;
double balance, amount;
int choice, customer_number;
for(int i=0;i<10;i++){
    cout<<"Enter details for customer "<<i+1<<endl;
    cout<<"Name: ";
    getline(cin,name);
    cout<<"Account Number: ";
    cin>>account_number;
    cout<<"Account Type: ";
    cin>>account_type;
    cout<<"Balance: ";
    cin>>balance;
    cin.ignore();
    customer[i].assign(name, account_number, account_type, balance);
}

do{
    cout<<"\nSelect an option"<<endl;
    cout<<"1. Deposit"<<endl;
    cout<<"2. Withdraw"<<endl;
    cout<<"3. Display"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter choice: ";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"Enter customer number: ";
            cin>>customer_number;
            cout<<"Enter amount to deposit: ";
            cin>>amount;
            customer[customer_number-1].deposit(amount);
            break;
        case 2:
            cout<<"Enter customer number: ";
            cin>>customer_number;
            cout<<"Enter amount to withdraw: ";
            cin>>amount;
            customer[customer_number-1].withdraw(amount);
            break;
        case 3:
            cout<<"Enter customer number: ";
            cin>>customer_number;
            customer[customer_number-1].display();
            break;
        case 4:
            cout<<"Exiting...";
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
}while(choice!=4);

return 0;
}