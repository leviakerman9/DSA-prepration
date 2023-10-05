#include<iostream>
using namespace std;

int main(){
int n,a=0,b=1;
cout<<"enter the value number n"<<endl;;
cin>>n;
cout<<a<<" "<<b;
for(int i=1; i<=10; i++){
    int next_number=a+b;
    cout<<next_number;

    a=b;
    b=next_number;
}
return 0;
}