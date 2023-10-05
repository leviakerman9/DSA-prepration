#include<iostream>
using namespace std;

int main(){
//     int  n;
// int num=2;
// cout<<"tell the no";
// cin>>n;
// while(num<n){
// if(num<n && n%num!=0){
//     num=num+1;
// }
// }
// int n=1,sum=0;

// while(n<=11){
//     cout<<n<<endl;
//     sum=sum+n;
//     n++;
// }
// cout<<sum;

// int n=4;
// int i=0;
// while(i<4){
//     cout<<"* * * *"<<endl;
//     i++;
    
// }

// int n;
// cout<<"print the no ";
// cin>>n;
// int i=1;
// while(i<=n){
    
//     int j=1;
//     while(j<=n){
//         cout<<n-j+1;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// int n;
// cout<<"print the no ";
// cin>>n;

// int i=1;

// while(i<=n){

// int j=1;
//     while(j<=i){
//         cout<<"*";
//         j++;
        
//     }
//     cout<<endl;
//     i++;
    
// }

// int n;
// cout<<"print the no ";
// cin>>n;

// int i=1;
// int count=1;
// while(i<=n){

// int j=1;
//     while(j<=i){
//         cout<<count;
//         j++;
//     }
//     count=count+1;
//     cout<<endl;
//     i++;
    
// }

// int n;
// cout<<"print the no ";
// cin>>n;

// int i=1;
// while(i<=n){

// int j=1;

//     while(j<=i){
//         cout<<i+j-1;
//         j++;
//     }
//     cout<<endl;
//     i++;
    
// }


// int n;
// cout<<"print the no ";
// cin>>n;

// int i=1;
// while(i<=n){

// int j=1;

//     while(j<=i){
//         cout<<i+1-j;
//         j++;
//     }
//     cout<<endl;
//     i++;
    
// }

// int n;
// cout<<"print the no ";
// cin>>n;

// int i=1;
// while(i<=n){

// int j=1;
// // char ch='A';
//     while(j<=n){
//         char ch='A'+j-1;
//         cout<<ch;
//         j++;
//         // ch++;
//     }
//     cout<<endl;
//     i++;
    
// }

// int n;
// cout<<"print the no ";
// cin>>n;

// int i=1;
// char count='A';

// while(i<=n){

// int j=1;
//     while(j<=n){
//         cout<<count;
//         j++;
//         count++;
//     }
//     cout<<endl;
//     i++;
    
// }

// int n;
// cout<<"print the no ";
// cin>>n;

// int i=1;
// // char count='A';

// while(i<=n){

// int j=1;
//     while(j<=i){
//         // cout<<count;
//         char ch='A'+i+j-1;
//         cout<<ch;
//         j++;
//     }
//     cout<<endl;
//     i++;
//     // count++;
    
// }

// int n;
// cout<<"print the no ";
// cin>>n;

// int i=1;

// while(i<=n){

// int j=1;

// char start='A'+n-i;
//     while(j<=i){
//         cout<<start;
//         j++;
//         start++;
//     }
//     cout<<endl;
//     i++;
    
// }


// Q  _ _ _ *
//    _ _ * *
//    _ * * *
//    * * * *

// int n;
// cout<<"print the no ";
// cin>>n;

// int i=1;

// while(i<=n){
// int space = n-i;
// while(space){
//     cout<<" ";
//     space--;
// }

// int j=1;
//     while(j<=i){
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
    
// }

//Q ****
//  ***
//  **
//  *


// int n;
// cout<<"print the no ";
// cin>>n;

// int i=4;

// while(i!=0){

// int j=1;

//     while(j<=i){

//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i--;
    
// }

//Q _ _ _ 1 _ _ _
//  _ _ 1 2 1 _ _
//  _ 1 2 3 2 1 _
//  1 2 3 4 3 2 1 
int n;
cout<<"print the no ";
cin>>n;

int i=1;

while(i<=n){

int space=n-i;

// first triangle
while(space){
    cout<<" ";
    space--;
}

    int j=1;
int count =1;

// second triangle
    while(j<=i){
        cout<<count;
        j++;
        count++;
    }

    // third triangle

    int start=i-1;
    while(start){
        cout<<start;
        start--;
    }
    cout<<endl;
    i++;
    
}
return 0;
}