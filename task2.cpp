//В квадратной матрице найти сумму положительных элементов, лежащих на и выше
//главной диагонали и расположенных в чётных столбцах.

#include <iostream>
#include <array>

using namespace std;

int main{
array <array<int, N>, M> arr;
    int sum=0;

    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++) {
            arr[i][j]=rand()%20-10;
            cout<<arr[i][j]<<" ";
            if (cond(arr[i][j], i, j)) sum+=arr[i][j];
        }
        cout<<endl;
    }

    cout<<"sum="<<sum<<endl;

}

bool cond(int a, int i, int j){
    return (
        (a>0)&&
        ((i==j)||(j>i))&&
        (j%2==0)
    );

}
