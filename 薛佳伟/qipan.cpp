nclude <iostream>
using namespace std;
int main()
{
	int i,max,k,x;
	cout<<"请输入最多*的个数:";
	cin>>max;//输入的数控制菱形的大小
	cout<<endl;
	for(i=max;i>=0;i--)
	{
		for(k=i;k>=0;k--)//k循环控制每行前面的空格
			cout<<" ";
		for(x=i;x<=max-1;x++)//x循环控制每行*和空格的个数
		{
			cout<<"*";
			cout<<" ";
		}
		cout<<endl;
	}
	for(i=max-1;i>=0;i--)//此后为上面循环的逆过程
	{
		for(k=i;k<=max;k++)
			cout<<" ";
		for(x=i;x>=1;x--)
		{
			cout<<"*";
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
