#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}
void showImage(const bool Ima[N][M]){
    cout << "------------------------------------------------------------------------"<<endl;
        for(int i=0;i<N;i++){
            cout << "|";
            for(int j=0;j<M;j++){
            if(Ima[i][j]==true)
            {
                cout << "*";
            }
            else{
                cout << " ";
            }
            }
            cout <<"|"<<endl;
        }
        cout << "------------------------------------------------------------------------"<<endl;
}
void updateImage(bool ima[N][M],int s,int x,int y){
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            double dat;
            dat=pow(pow(i-x,2)+pow(j-y,2),1/2);
            if(dat<=s-1){
                ima[i][j]=1;
            }
        }
    }
}