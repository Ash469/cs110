#include<iostream>
using namespace std;
int main()
{
    int dec;
    int oct;
    int n;
    cout<<"Enter dec number"<<endl;
    cin>>dec;
    cout<<"Enter oct number"<<endl;
    cin>>oct;
    int n1=oct%10;//4
    int n2=oct/10;//57
    int n3=n2%10;//7
    int n4=n3*8;//56
    int n5=n2/10;//5
    int n6=n5*8*8;//320
    int n7=n6+n4+n1;
    int dec1=n7+dec;
    int n8=dec1%16;//11
    int n9=dec1/16;//64
    int n10=n9%16;//0
    int n11=n9/16;//4
    char c;
    if(n8>9){
    if(n8==10)
    c='A';
    else 
    if(n8==11)
    c='B';
    else 
    if(n8==12)
    c='C';
    else 
    if(n8==13)
    c='D';
    else 
    if(n8==14)
    c='E';
    else
    c='F';
    cout<<n11<<n10<<c;
    }
    else
    cout<<n11<<n10<<n8;
    return 0;
}


