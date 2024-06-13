#include <bits/stdc++.h>
using namespace std;
void printname(string name){
cout<<"Successful"<<" "<<name<<"\n";
}
int main(){
    string name1;
    cin>>name1;
    printname(name1);

    string name2;//here code is being reused again and again
    cin>>name2;//you can use any number of times
    printname(name2);

    return 0;

}