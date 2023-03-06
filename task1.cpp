//Преобразовать матрицу: элементы строки, в которой находится минимальный
//элемент матрицы, заменить нулями.
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array <array<int, N>, M> arr;
    int minn=201, mins=0;

    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++) {
            arr[i][j]=rand()%200-100;
            cout<<arr[i][j]<<" ";
            if (arr[i][j]<minn) {
                minn=arr[i][j];
                mins=i;
            }
        }
        cout<<endl;
    }

    for (int i=0; i<N; i++){
        arr[mins][i]=0;
    }

    cout<<endl;

    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
