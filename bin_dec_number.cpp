#include<iostream>
using namespace std;
int main(){
int dec=111,pow=1,bin=0;
while(dec>0){
   int tem=dec%10;
bin=bin+(tem*pow);
dec=dec/10;
pow=pow*2;
   
}
cout<<bin;
return 0;
}