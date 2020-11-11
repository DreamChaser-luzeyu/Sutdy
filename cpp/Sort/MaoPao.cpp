#include<cstdio>

void mySwap(int& a,int& b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int* mySort(int* arr,int len){
    for(int j = 0; j<len+1; j++){
        for(int i=0; i<len-1; i++){
            if(*(arr+i) > *(arr+i+1))
                mySwap(*(arr+i),*(arr+i+1));
        }
    }
    return arr;
}

int main(){
    int inputData[5] = {0};
    int n; //scanf("%d",&n);
    n=5;
    int i=0;
    for(; i<n; i++){
        scanf("%d",(inputData+i));
    }
    mySort(inputData,5);
    //for(int i=0; i<5; i++){
      //  printf("%d ",inputData[i]);
    //}
    printf("%d",inputData[3]);
    return 0;
}