#include<iostream>
#include<bits/stdc++.h>
#include<math.h>


using namespace std;

int main(){

    double PI = 3.14159265 ;
    float n , r;
    cin >> n >> r;
    double a = (360/(2*n));
    double theta = a*(PI/180);
    double b = 1/(sin(theta));
    double c = 1/(b-1);
    double R;
    R = r*c;
    printf("%.12lf",R);


}
