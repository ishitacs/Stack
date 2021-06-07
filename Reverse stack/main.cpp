#include <bits/stdc++.h>

using namespace std;
void inbo(stack<int>&st,int x)
{
    if(st.empty()){st.push(x); return;}
    int d=st.top();
    st.pop();
    inbo(st,x);
    st.push(d);
}

void rev(stack<int> &st)
{ if(st.empty()) return;
int x=st.top();
st.pop();
rev(st);
inbo(st,x);
}


int main()
{

    int n,x;
	cin>>n;
	stack<int>s;
	for(int i=0;i<n;i++)
	{ cin>>x;
		s.push(x);
	}
	rev(s);
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}
