// The default template of Code Develop App
// You can change or add a template in /FileTemplates directory.

#include <iostream>

using namespace std;

int measure(int x, int y){
    int z = y;
    while (x%y!=0){
        z = x%y;
        x=y;
        y=z;
    }
    return z;
}

int main() {
    int x=1,y=1,i,j,t,n=0,out[100];
    while(n<2 && x!= 0 ){
        cin>>x;
        cin>>y;
        if(x == 0 && y == 0){
            break;
        }
        out[n] = measure(x, y);
        n+=1;
        x=0;
        y=0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(out[j]>out[j+1]){
                t=out[j+1];
                out[j+1]=out[j];
                out[j]=t;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<out[i]<<" ";
    }
    
    return 0;
}
