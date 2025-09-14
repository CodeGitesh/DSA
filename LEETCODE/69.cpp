#include<iostream>
using namespace std;

long long int mySqrt(int x) {
    int s=0,e=x;
    long long int answer=-1;
    while(s<=e){
        long long int mid= s + (e-s)/2;
        if(mid*mid==x) return mid;
        else if(mid*mid >x) e = mid-1;
        else {
            answer=mid;
            s=mid+1;
        }
    }
    return answer;
}
int main() {
    
    cout<<mySqrt(39)<<endl;
    return 0;
}