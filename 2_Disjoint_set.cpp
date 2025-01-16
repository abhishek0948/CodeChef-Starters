#include <bits/stdc++.h>
using namespace std;

class Disjoint{
    vector<int> parent;
    vector<int> rank;
    vector<int> size;
    
public:
    Disjoint(int n){
        parent.resize(n+1);
        rank.resize(n+1,0);
        size.resize(n+1,1);
        for(int i=0;i<n+1;i++) parent[i]=i;
    }

    int find_parent(int node){
        if(parent[node]==node) return node;
        // Path Compression
        return parent[node]=find_parent(parent[node]); 
    }

    void Union_By_Rank(int u,int v){
        int u_ult_parent=find_parent(u);
        int v_ult_parent=find_parent(v);

        if(u_ult_parent==v_ult_parent) return ;

        if(rank[u_ult_parent]>rank[v_ult_parent]){
            parent[v_ult_parent]=u_ult_parent;
        }

        else if(rank[u_ult_parent] < rank[v_ult_parent]) {
            parent[u_ult_parent]=v_ult_parent;
        }

        // Same rank
        else{
            parent[v_ult_parent]=u_ult_parent;
            rank[u_ult_parent]++;
        }
    }

    void Union_By_Size(int u,int v){
        int u_ult_parent=find_parent(u);
        int v_ult_parent=find_parent(v);

        if(u_ult_parent==v_ult_parent) return ;

        if(size[u_ult_parent]>size[v_ult_parent]){
            parent[v_ult_parent]=u_ult_parent;
            size[u_ult_parent]+=size[v_ult_parent];
        }

        else{
            parent[u_ult_parent]=v_ult_parent;
            size[v_ult_parent]+=size[u_ult_parent];
        }
    }
    
    bool check(int u,int v){
        return find_parent(u) == find_parent(v);
    }
};

int main(){
    Disjoint ds(7);

    ds.Union_By_Rank(1,2);
    ds.Union_By_Rank(2,3);
    ds.Union_By_Rank(4,5);
    ds.Union_By_Rank(6,7);
    ds.Union_By_Rank(5,6);

    // if 3 and 7 are in same component or not
    cout<<ds.check(3,7)<<"\n";
    ds.Union_By_Rank(3,7);
    cout<<ds.check(3,7)<<"\n";
}