#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void addEdge(vector<string>*adj,int u,string v){
	adj[u].push_back(v);
}

void printg(vector<string>*adj,int v){
	for(int i=0;i<v;i++){
		cout<<i<<" -> ";
		for(auto x:adj[i])
			cout<<x<<" ";
		cout<<endl;	
	}

}
int main()
{
	int v;
	cout<<"enter no. of vertices in GRAPH? ";
	cin>>v;
	cout<<"Enter ur choice :"<<endl;
	cout<<"1. Insert VERTICE"<<endl<<"2. Print Graph "<<endl;
        int choice;
	cin>>choice;
	vector<string>adj[10];
	unordered_map<string,int>mp;
 	while(choice==1 || choice==2){
		if(choice==1){
		cout<<"enter the vertice";
		string temp,val_temp;
		cin>>temp;
		cout<<"enter the 2nd vertice ";
		cin>>val_temp;
		int indx;
		if(mp.find(temp)!=mp.end()){
		auto t=mp.find(temp);
		indx=t->second;
		}
		else{
		indx=mp.size();
			mp[temp]=mp.size();
		
		}
		addEdge(adj,indx,val_temp);
		}

		else if(choice==2){
			printg(adj,mp.size());
		}
		else break;
		cout<<"CHOICE ?";
		cin>>choice;
	}	
	return 0;
}
