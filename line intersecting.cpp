#include<bits/stdc++.h>
#define fst first
#define sec second
using namespace std;

bool onSegment(pair<int,int>p,pair<int,int>q,pair<int,int>r){
    if(q.fst>=min(p.fst,r.fst) && q.fst<=max(p.fst,r.fst) && q.sec>=min(p.sec,r.sec) && q.sec<=max(p.sec,r.sec)) return true;
    return false;
}

int orientation(pair<int,int>p,pair<int,int>q,pair<int,int>r){
    int o = (q.sec-p.sec)*(r.fst-q.fst)-(q.fst-p.fst)*(r.sec-q.sec);
    if(o==0) return 0;
    if(o>0) return 1;
    return 2;
}

bool isIntersect(pair<int,int>p1,pair<int,int>q1,pair<int,int>p2,pair<int,int>q2){
    int o1 = orientation(p1,q1,p2);
    int o2 = orientation(p1,q1,q2);
    int o3 = orientation(p2,q2,p1);
    int o4 = orientation(p2,q2,q1);
    if(o1!=o2 && o3!=o4) return true;

    if(o1==0 && onSegment(p1,p2,q1)) return true;
    if(o2==0 && onSegment(p1,q2,q1)) return true;
    if(o3==0 && onSegment(p2,p1,q2)) return true;
    if(o4==0 && onSegment(p2,q1,q2)) return true;

    return false;
}
int main(){
    int n,i,j;
    cin>>n;
    vector<pair<pair<int,int>,pair<int,int>>>v(n);
    for(i=0;i<n;i++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        v[i]= {{x1,y1},{x2,y2}};
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(isIntersect(v[i].first,v[i].second,v[j].first,v[j].second)){
                cout<<"Line: "<<i+1<<" "<<j+1<<endl;
            }
        }
    }
}
