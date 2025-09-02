#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

double PI = 3.1415926535897;

double calcLargeCircleArea(double n1, double n2, double n3, double at){
    double r = (n1*n2*n3) / (4*at);
    return (r*r) * PI;
}

double semiPer(double n1, double n2, double n3){
 return (n1+n2+n3)/2;
}

double calcTriangleArea(double n1, double n2, double n3){
    double p = semiPer(n1, n2, n3);
    return sqrt(p*(p-n1)*(p-n2)*(p-n3));
}

double calcSmallCircleArea(double n1, double n2, double n3, double triangleArea){
    double r = triangleArea/semiPer(n1, n2, n3);
    return (r*r)*PI;
}

int main(){
    double n1, n2, n3;
    while(cin >> n1 >> n2 >> n3){
        double t = calcTriangleArea(n1, n2, n3);
        double cg = calcLargeCircleArea(n1, n2, n3, t);
        cg = cg - t;
        double cm = calcSmallCircleArea(n1, n2, n3, t);
        t = t - cm;
        cout << fixed << setprecision(4) << cg << " " << t << " " << cm << endl;
    }
    return 0;
}