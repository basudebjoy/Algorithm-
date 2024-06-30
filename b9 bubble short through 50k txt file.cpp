#include<bits/stdc++.h>
using namespace std;
void printlist(int *a , int n)
{
       for(int i =0 ; i<n; i++){
            cout<<a[i]<<" ";
        }

cout<<"\n..............."<<endl;
}

int *bubble(int *a, int n){
   for(int i =0 ; i<n; i++)
    for(int j =1 ; j<n-1; j++){
        if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
        }
    }

 return a;
}

int main(){
  int n = 50000 ;
  int *a = new int [n];
  ifstream fin("50k.txt");


        for(int i =0 ; i<n; i++){
             fin>>a[i];
        }
printlist(a,n);
int *m = new int [n];
 m = bubble(a,n);
printlist(m,n);

return 0;
}
