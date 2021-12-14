#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin>>t;
	for(int i = 0;i<t;i++)
	{
		int n;
		cin>>n;
		// cin.ignore();
		std::vector<string> v;
		for(int j = 0;j<n-2;j++)
		{
			string c;
			cin>>c;
			v.push_back(c);
		}
		// for(string elements:v)
		// {
		// 	cout<<elements<<' ';
		// }


		int l = 1;
		string str = "";
		str+=v[0];
		for(int f = 1;f<n-2;f++)
		{
			if(v[f-1]=="ba")
			{
				if(v[f]=="ab")
				{
					str+='b';
				}
				else if(v[f]=="aa")
				{
					str+='a';
				}
				else if(v[f]=="bb")
				{
					str+="bb";
				}
				else if(v[f]=="ba")
				{
					str+="ba";
				}
				// l+=1;
			}
			else if(v[f-1]=="ab")
			{
				if(v[f]=="ab")
				{
					str+="ab";
				}
				else if(v[f]=="aa")
				{
					str+="aa";
				}
				else if(v[f]=="bb")
				{
					str+="b";
				}
				else if(v[f]=="ba")
				{
					str+="a";
				}
				// l+=1;
			}
			else if(v[f-1]=="aa")
			{
				if(v[f]=="ab")
				{
					str+='b';
				}
				else if(v[f]=="aa")
				{
					str+='a';
				}
				else if(v[f]=="bb")
				{
					str+="bb";
				}
				else if(v[f]=="ba")
				{
					str+="ba";
				}
				// l+=1;
			}
			else if(v[f-1]=="bb")
			{
				if(v[f]=="ab")
				{
					str+="ab";
				}
				else if(v[f]=="aa")
				{
					str+="aa";
				}
				else if(v[f]=="bb")
				{
					str+="b";
				}
				else if(v[f]=="ba")
				{
					str+="a";
				}
				// l+=1;
			}
			l+=1;

		}
		// if(l>n-1)
		// {
		// 	if(v[n-3]=="aa")
		// 	{
		// 		str+="a";
		// 	}
		// 	else if(v[n-3]=="ab")
		// 	{
		// 		str+="b";
		// 	}
		// 	else if(v[n-3]=="ba")
		// 	{
		// 		str+="a";
		// 	}
		// 	else if(v[n-3]=="bb")
		// 	{
		// 		str+="b";
		// 	}
		// }
		// for(int p = 0;p<n;p++)
		// {
		// 	cout<<str[p]<<' ';
		// }
		// cout<<'\n';
		if(str.length()<n)
		{
			str+=str[n-2];
		}
		// cout<<str[n-2]<<' ';
		cout<<str<<'\n';
	}







	return 0;
}
