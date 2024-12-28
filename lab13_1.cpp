#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}
void stat(const double inp[],int number,double outp[]){
    double max=inp[0];
    double min=max;
    double sum2=0,sum1=0,sum3=0,sum4=1;
    for(int i=0;i<number;i++){
        if(max<inp[i]){
            max=inp[i];
        }
        if(min>inp[i]){
            min=inp[i];
        }
        sum1=sum1+inp[i];
        sum3=sum3+(1/inp[i]);
        sum4=sum4*inp[i];
    }
    outp[0]=sum1/number;
    for(int i=0;i<number;i++){
        sum2+=pow((inp[i]-outp[0]),2);
    }
    outp[1]=sqrt(sum2/number);
    outp[2]=pow(sum4,(1.0/number));
    outp[3]=number/sum3;
    outp[4]=max;
    outp[5]=min;
}