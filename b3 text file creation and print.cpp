#include<bits/stdc++.h>
using namespace std;

int main(){

    srand(time(0));
       ofstream fout("50k.txt");
        for(int i =0 ; i<50000; i++){
             int a = rand()%50000+1;
             fout<<a<<endl;
        }

return 0;
}
