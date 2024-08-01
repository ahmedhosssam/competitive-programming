#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <stack>
#include <cmath>
using namespace std;

#define int long long

int dx[10001],dy[1001],r[1001],n;
int check(int x,int y) {
	for(int i=0;i<n;i++)
		if(((x-dx[i])*(x-dx[i]))+((y-dy[i])*(y-dy[i]))<=r[i]*r[i])
			return 0;
	return 1;
}

int32_t main() {
    int x1,y1,x2,y2,count=0;
	cin>>x1>>y1>>x2>>y2;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>dx[i]>>dy[i]>>r[i];
	int xmax=max(x1,x2),xmin=min(x1,x2);
	int ymax=max(y1,y2),ymin=min(y1,y2);
	for(int i=xmin;i<=xmax;i++)
		for(int j=ymin;j<=ymax;j++)
			if(i==xmin||i==xmax||j==ymin||j==ymax)
				if (check(i,j))
					count++;
	cout<<count<<endl;
    return 0;
}
