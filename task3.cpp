//Дана матрица. Элементы первой строки — количество осадков в соответствующий
//день, второй строки — сила ветра в этот день. Найти, был ли в эти дни ураган?
//(ураган — когда самый сильный ветер был в самый дождливый день).
#include <iostream>
#include <array>

using namespace std;

int main{
    array <array<int, 10>, 2> arr;
    int max1=0, max2=0, count=0;

    for (int i=0; i<2; i++){
        for (int j=0; j<10; j++) {
            arr[i][j]=rand()%10;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i=0; i<10; i++){
        if (arr[0][i]>max1) max1=arr[0][i];
        if (arr[1][i]>max2) max2=arr[1][i];
    }

    for (int i=0; i<10; i++){
        if ((arr[0][i]==max1)&&(arr[1][i]==max2)) count++;
    }

    if (count!=0) cout<<"yes\n";
    else cout<<"no\n";

}
