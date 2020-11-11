#include<cstdio>

int myFunc(int n){
    if(n==1)
        return 1;
    return (myFunc(n-1) + n);
}

int main(){
    int m; scanf("%d",&m);
    int ans;ans = myFunc(m);
    printf("%d",ans);
    return 0;
}