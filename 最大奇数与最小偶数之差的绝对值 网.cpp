#include<iostream>
using namespace std;

int main(){

    int a[6];//�洢6����
    int maxJ = 0;
    int minO = 100;

    for (int i = 0; i < 6; i++){
        cin >> a[i];
    }

    for (int i = 0; i < 6; i++){
        if (a[i] % 2 == 0){//Ѱ����С��ż��
            int tempO = a[i];
            if (tempO < minO){
                minO = tempO;
            }
        }

        if (a[i] % 2 != 0){//Ѱ����������
            int tempJ = a[i];
            if (tempJ > maxJ){
                maxJ = tempJ;
            }
        }
    }
if (maxJ-minO<0){
	cout<<minO-maxJ;
}else {
	cout<<maxJ-minO;
}
    
    return 0;
}
