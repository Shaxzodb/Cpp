#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int **arr;
    int m,n;
    cout<<"Massew satrini kiritish: ";
    cin>>m;
    cout<<"Massew ustunlar sonini kiritish: ";
    cin>>n;
    arr=new int *[m];
    
    for (int i = 0; i < m; i++) 
    {
        arr[i]=new int [n];
        for (int z = 0; z < n; z++) 
        {    
            arr[i][z]=z;
            //delete []arr[i];
            //delete []arr;
            //delete arr;
            cout<<arr[i][z];
        }
    }
    //system("pause>0");
    getch();
    return 0;
    
}