// Use depth first search to find if path exist from the start node to the end node.
#include<bits/stdc++.h>
using namespace std;
bool pathexists(int graph[][10],int source,int destination,int n)
{
    bool visited[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=false;
    }
    stack<int> s;
    s.push(source);
    visited[source]=true;
    while(!s.empty())
    {
        int top=s.top();
        s.pop();
        if(top==destination)
        {
            return true;
        }
        for(int i=0;i<n;i++)
        {
            if(graph[top][i]==1 && visited[i]==false)
            {
                s.push(i);
                visited[i]=true;
            }
        }
    }
    return false;
}
int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    return 0;
}