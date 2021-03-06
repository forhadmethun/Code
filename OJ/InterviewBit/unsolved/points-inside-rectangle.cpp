#include<bits/stdc++.h>
using namespace std;


#define EPS 1e-9
#define  PI acos(-1)
struct point{
    double x,y;
    point(double a,double b){
        x  = a;
        y = b;
    }
    point(){
        x = 0;
        y = 0;
    }
};
struct vec{
    double x,y;
    vec(double _x,double _y){
        x = _x;
        y = _y;
    }
};

vec toVec(point a,point b ){
    return vec(b.x-a.x, b.y-a.y);
}

double sq(vec x){
    return x.x * x.x + x.y * x.y;
}
double dot(vec a,vec b){
    return a.x*b.x + a.y * b.y;
}
double angle(point a,point o,point b){
    vec oa = toVec(o,a),ob = toVec(o,b);
    return acos(dot(oa,ob)/sqrt(sq(oa)*sq(ob)));

}
double cross(vec a,vec b){
    return a.x * b.y - b.x * a.y ;
}
bool ccw(point p,point q, point r){
    return cross(toVec(p,q),toVec(p,r)) > 0;
}

double dist(point p1, point p2) {
    return hypot(p1.x - p2.x, p1.y - p2.y); }
double perimeter(double ab, double bc, double ca) {
    return ab + bc + ca; }


double perimeter(point a, point b, point c) {
    return dist(a, b) + dist(b, c) + dist(c, a); }

double area(double ab, double bc, double ca) {
    // Heron's formula, split sqrt(a * b) into sqrt(a) * sqrt(b); in implementation
    double s = 0.5 * perimeter(ab, bc, ca);
    return sqrt(s) * sqrt(s - ab) * sqrt(s - bc) * sqrt(s - ca); }

double area(point a, point b, point c) {
    return area(dist(a, b), dist(b, c), dist(c, a)); }

int solve(vector<int> &A, vector<int> &B, vector<int> &C, vector<int> &D) {
    vector<point> P;
    int len = (int) A.size();
    for (int i = 0; i < len; i++) {
        P.push_back(point(A[i], B[i]));
    }
    if ((int) P.size() == 0)return 0;
    int count = 0;

    P.push_back(P[0]);
    reverse(P.begin(), P.end());
//    for(int i=0;i<P.size();i++){
//        cout << P[i].x << "," << P[i].y << endl;
//    }
    for (int k = 0; k < (int) C.size(); k++) {
        point pt(C[k], D[k]);
//        cout << "------------" << endl;
        cout << pt.x << "," << pt.y << endl;
        double sum = 0;
        // cout << "dhukii " << endl;

        bool isRight = false, isLeft = false;
        int leftCount = 0;
        int rightCount = 0;
        for (int i = 0; i < P.size() - 1; i++) {
            cout << "( "<<P[i].x << "," << P[i].y << ") (" << P[i+1].x << "," << P[i+1].y <<")" << endl;
//            if (ccw(P[i], P[i + 1],pt )) {
//                sum += angle(P[i], pt, P[i + 1]);
//                leftCount++;
////                cout << "ccw" << endl;
//            } else {
//                sum -= angle(P[i], pt, P[i + 1]);
//                rightCount++;
//            }
            if(area(P[i],P[i+1],pt)<EPS) cout << "======================================" << endl;
            sum+=area(P[i],P[i+1],pt);

        }
        double area_rect = dist(P[0],P[1]) * dist(P[1],P[2]);
//        cout << "sum " << sum << " area_rect:" << area_rect << endl;
        if(fabs(sum-area_rect) < EPS)count++;
//        cout << "angle:>>>> " << sum << endl;
//        if (fabs(fabs(sum) - 2 * PI) < EPS) {
//            count++;
//        }
//        if(leftCount == 4 || rightCount == 4)count++;
//        cout << endl;
//        cout << "----------------------------" << endl;
//        cout << "leftCount:" << leftCount << endl;
//        cout << "rightCount:" << rightCount << endl;
//        cout << "----------------------------" << endl;
//        cout << endl;


    }
    return count;
}
//int solve(vector<int> &A, vector<int> &B, vector<int> &C, vector<int> &D) {
//    vector<point> P;
//    int len = (int) A.size();
//    for (int i = 0; i < len; i++) {
//        P.push_back(point(A[i], B[i]));
//    }
//    if ((int) P.size() == 0)return 0;
//    int count = 0;
//
//    P.push_back(P[0]);
//    reverse(P.begin(), P.end());
////    for(int i=0;i<P.size();i++){
////        cout << P[i].x << "," << P[i].y << endl;
////    }
//    for (int k = 0; k < (int) C.size(); k++) {
//        point pt(C[k], D[k]);
////        cout << "------------" << endl;
////        cout << pt.x << "," << pt.y << endl;
//        double sum = 0;
//        // cout << "dhukii " << endl;
//
//        bool isRight = false, isLeft = false;
//        int leftCount = 0;
//        int rightCount = 0;
//        for (int i = 0; i < P.size() - 1; i++) {
////            cout << "( "<<P[i].x << "," << P[i].y << ") (" << P[i+1].x << "," << P[i+1].y <<")" << endl;
//            if (ccw(P[i], P[i + 1],pt )) {
//                sum += angle(P[i], pt, P[i + 1]);
//                leftCount++;
////                cout << "ccw" << endl;
//            } else {
//                sum -= angle(P[i], pt, P[i + 1]);
//                rightCount++;
//            }
//
//        }
////        cout << "angle:>>>> " << sum << endl;
////        if (fabs(fabs(sum) - 2 * PI) < EPS) {
////            count++;
////        }
//        if(leftCount == 4 || rightCount == 4)count++;
//        cout << endl;
//        cout << "----------------------------" << endl;
//        cout << "leftCount:" << leftCount << endl;
//        cout << "rightCount:" << rightCount << endl;
//        cout << "----------------------------" << endl;
//        cout << endl;
//
//
//    }
//    return count;
//}

//}int solve(vector<int> &A, vector<int> &B, vector<int> &C, vector<int> &D) {
//    vector<point> P;
//    int len = (int)A.size();
//    for(int i=0;i<len;i++){
//        P.push_back(point(A[i],B[i]));
//    }
//    if((int)P.size() == 0)return 0;
//    int count = 0;
//
//    P.push_back(P[0]);
//    reverse(P.begin(),P.end()) ;
////    for(int i=0;i<P.size();i++){
////        cout << P[i].x << "," << P[i].y << endl;
////    }
//    for(int k=0;k<(int)C.size();k++) {
//        point pt(C[k],D[k]);
////        cout << "------------" << endl;
////        cout << pt.x << "," << pt.y << endl;
//        double sum = 0;
//        // cout << "dhukii " << endl;
//
//        bool isRight = true, isLeft = true;
//        for (int i = 0; i < P.size() - 1; i++) {
////            cout << "( "<<P[i].x << "," << P[i].y << ") (" << P[i+1].x << "," << P[i+1].y <<")" << endl;
//            if (ccw(pt,P[i],P[i+1])){
//                sum+=angle(P[i],pt,P[i+1]);
////                cout << "ccw" << endl;
//            }
//            else{
//                sum-=angle(P[i],pt,P[i+1]);
//            }
//
//        }
////        cout << "angle:>>>> " << sum << endl;
//        if(fabs(fabs(sum) - 2 *PI ) < EPS){
//            count++;
//        }
//
//
//    }
//    return count ;
//}

int main(){
    vector<int> A = {757806, 870553, 1208794, 1096047 };

    vector<int> B = {750581, 637834, 976075, 1088822 };
    vector<int> C = { -960840, -955568, -948123, -944567, -932689, -909006, -899213, -872499, -816231, -815487, -745458, -733965, -731767, -724160, -674483, -668124, -638622, -626199, -601653, -558231, -555957, -545997, -544386, -543614, -535798, -534548, -515867, -476700, -475144, -469624, -458175, -438328, -417182, -381407, -371638, -337506, -329494, -310312, -294120, -293259, -286345, -239709, -236737, -226459, -101763, -95015, -92985, -45365, -39041, -16265, 14345, 20699, 43223, 59858, 80467, 155882, 178162, 185280, 219005, 232976, 270563, 279358, 282342, 289593, 290780, 317859, 329292, 341423, 361695, 393776, 422139, 433328, 444707, 470220, 508399, 509636, 516573, 532007, 537797, 541645, 542654, 606489, 609080, 614672, 617072, 619918, 626655, 690373, 721697, 723175, 750776, 763166, 771255, 814811, 829093, 887413, 898447, 908990, 923037, 935731};
    vector<int> D = {-567401, -305898, -133127, 306804, -128699, 994624, -618554, -827823, 67682, 259449, 256638, 675439, 866179, 202790, -859640, -46451, -328534, 750143, 256970, -520372, -873728, 298573, -830382, 539967, -142881, 886848, -43491, -1859, -229702, 300055, 848590, -694308, -545489, 779474, 916511, -624980, 677863, 377492, 341491, -486602, 414689, 760790, 740840, -294549, -257631, -180968, -361856, -703029, -309178, -15868, -881165, 339541, -137928, -453872, -68725, -569599, -504392, 997206, -545062, 145377, -865567, 666039, -194872, 436167, 835283, -168730, 877227, 663200, -7680, -368684, -566371, 497670, -258796, 29626, -969593, 30447, -419927, -205084, -428907, -854872, 327835, -75951, -465094, -474657, 805466, 874210, 473763, -956825, -188138, -425076, -899816, 588745, -56595, 342698, 305541, 610272, -930175, 175954, 735343, 679916};
//    vector<int> A = {0,-2,2,4};
//
//    vector<int> B = {0,2,6,4};
//    vector<int> C = {1,2, 1,5,-3};
//    vector<int> D = {3,4,2 ,-5,1};
    cout <<"solve: " <<  solve(A,B,C,D) << endl;
//    cout << (angle(point(2,2),point(0,0),point(2,0)) * 180.0)/(PI) << endl;

    return 0;
}