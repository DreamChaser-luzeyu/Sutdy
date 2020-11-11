#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int myInput[3] = {0};
int main(){
    int n;cin >> n;
    while(n--){
        for(int i=0; i<3; i++){
            cin >> myInput[i];
        }
        sort(myInput,myInput+3);
        if(myInput[0]==0 || myInput[1]==0 || myInput[2]==0 || myInput[2] >= myInput[1]+myInput[0])
            cout << "Error"<<endl;

        else if(pow(myInput[2],2) == (pow(myInput[1],2) + pow(myInput[0],2)))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

    }
    return 0;
}