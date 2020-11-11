#include<iostream>
using namespace std;
int getArrayLength(char* begin){
    int i = 0;
    for(;*(begin+i)!='\0';i++);
    return i;
}

char* genDaoXuArray(char* b1, char* b2,int len){
    for(int i=0; i<len; i++)
        *(b2+len-1-i) = *(b1+i);
    return b2;
}

bool isSame(char* b1, char* b2, int len){
    for(int i=0; i<len; i++)
        if(*(b1+i) != *(b2+i))
            return false;
    return true;
}

int main(){
    char a[15];
    cin >> a;
    int len = getArrayLength(a);
    char b[15];
    genDaoXuArray(a,b,getArrayLength(a));
    if(isSame(a,b,getArrayLength(a)))
        cout << "yes";
    else
        cout << "no";
    return 0;
}