/*
Submitted by: Sneha Jaiswal
GitHub Link: https://github.com/Sneha-jais
Problem Statement:
Two cats and a mouse are at various positions on a line. You will be given their starting positions. 
Your task is to determine which cat will reach the mouse first, assuming the mouse does not move 
and the cats travel at equal speed. If the cats arrive at the same time,
the mouse will be allowed to move and it will escape while they fight.
sample_input=2, 1 2 3, 1 3 2
sample_output=Cat B, Mouse C*/


#include <bits/stdc++.h>
using namespace std;
string catAndMouse(int x, int y, int z) {
    string ans;    
    if(abs(x-z)>abs(y-z))
       ans="Cat B";
    else if(abs(x-z)<abs(y-z))
      ans="Cat A";
    else
        ans="Mouse C";
    return ans;
}
int main()
{
   int q,x,y,z;
    cin>>q;
    while(q--){
        cin>>x>>y>>z;
        cout<<catAndMouse(x,y,z)<<endl;
    }   
    return 0;
}
