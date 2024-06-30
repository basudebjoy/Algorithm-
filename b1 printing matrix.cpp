#include<bits/stdc++.h>
using namespace std;

void printmatrix(int **p, int r, int c){


for(int i = 0 ; i<r; i++){
    for(int j=0 ; j<c ; j++)
    {
        cout<<p[i][j]<<" ";
    }
    cout<<endl;

}
}

int main(){
    int row;
    int col;

    cout<<"Enter the row: "<<endl;
    cin>>row;
    cout<<"enter the column: "<<endl;
    cin>>col;

    int **mat = new int *[row];
    for(int i =0 ; i<row; i++){

	 mat[i] = new int[col];

}

    srand(time(0));

     for(int i = 0 ; i<row; i++){
    for(int j=0 ; j<col ; j++)
    {
        mat[i][j]=rand()%100+1;
    }

}

 printmatrix(mat, row , col);

return 0;
}
