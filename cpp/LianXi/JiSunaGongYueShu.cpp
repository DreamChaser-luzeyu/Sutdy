#include<iostream>
#include<algorithm>
using namespace std;
bool isYinshu(int yinshu,int yuanshu){
    if(yuanshu % yinshu == 0)
        return true;
    else
        return false;
}

int main(){
    int n,a,b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        for(int i=min(a,b); i>=1; i--){
            if(isYinshu(i,a) && isYinshu(i,b)){
                cout << i << " ";break;
            }               
        }
        for(int i=max(a,b);; i++){
            if(isYinshu(a,i) && isYinshu(b,i)){
                cout << i <<;break;
            }               
        }
        if(n!=0)
            cout << endl;
    }
    return 0;
}