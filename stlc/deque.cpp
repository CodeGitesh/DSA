#include<iostream>
#include <deque>
using namespace std;
int main() {
    deque<int> d;

    d.push_back(1);
    d.push_front(5);

    cout<<"First index element: "<<d.at(1)<<endl;
    cout<<"Front: "<<d.front()<<endl;
    cout<<"back: "<<d.back()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}