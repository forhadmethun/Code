
#include<bits/stdc++.h>

#define s1(n) scanf("%d",&n)
#define s2(n , m) scanf("%d %d",&n,&m)
#define s4(n , m , o,p) scanf("%d %d %d %d",&n,&m,&o,&p)

/// others type -> ld , lld , f , llf , s , c .....

#define p1(n) printf("%d\n",n);
#define p2(n,m) printf("%d %d\n",n,m)
#define p3(n,m,o) printf("%d %d %d\n",n,m,o);


/*
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair<int ,int> ii;
*/

#define vi vector<int>
#define vvi vector<vi>
#define ii pair<int , int>



///size, push
#define sz(a) int((a).size())
#define pb push_back

///traverse all container
#define all(c) c.begin(),c.end()


///loop through all container
#define tr(c,it)\
            for(typeof(c.begin()) it=(c).begin();it!=(c).end();it++)


///finding anything among container
#define present(container,element) (container.find(element)!=container.end())
#define cpresent(container,element) (find(all(container,element)!=container.end()))



using namespace std;


int main()
{
    int a,b,c,d;
    s4(a,b,c,d);
    if(c>a ){
        if(d>b){
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a,d-b);
        }else{
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a-1,60+d-b);
        }
    }
    else{
       if(d>b){
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a+24,d-b);
        }else{
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a+24-1,60+d-b);
        }

    }

    return 0;
}


