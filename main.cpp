#include<iostream>
#include<string>
#include<vector>


using namespace std;

void brackets_checker(vector<string> expression)
{
	vector<string> stck;
	string ch;

	ch = expression.back();
	expression.pop_back();
	stck.insert(stck.begin(),ch);
	
	int total = expression.size();
	for(unsigned i=0; i<total; i++)
	{	
		cout<<"\n inside for loop"<<i;	
	 if(expression.empty()==0)
	 {
		//ch = expression.back();
		//cout<<"\n current last element: "<<ch;
		
		//expression.pop_back();
		//stck.insert(stck.begin(),ch);
		
		cout<<"\n expression now is:";
		for (unsigned j=0;j<expression.size();j++)
			cout<<expression.at(j);
		cout<<"\n stck now is: ";
		for(unsigned j=0;j<stck.size();j++)
			cout<<stck.at(j);

		
		ch = expression.back();
		expression.pop_back();
		
		cout<<"\n picked up in ch: "<<ch<<"\t and expression now is: ";
		for (unsigned j=0;j<expression.size();j++)
			cout<<expression.at(j);

		if(ch.compare("[")==0 && (stck.front()).compare("]")==0)
			stck.erase(stck.begin()+0);
		else if(ch.compare("(")==0 && (stck.front()).compare(")")==0)
			stck.erase(stck.begin()+0);
		else if(ch.compare("{")==0 && (stck.front()).compare("}")==0)
			stck.erase(stck.begin()+0);
		else
		{
			stck.insert(stck.begin(),ch);
		}
		
		cout<<"\n at the end of loop "<<i<<" \t stck is: ";
		for(unsigned j=0;j<stck.size();j++)
			cout<<stck.at(j);
		
	
	 }
	}

	if(stck.size()==0 && expression.empty())
	{
		cout<<"\n balanced";
	}
	else cout<<"\n not";

}



int main()
{
	vector <string> expression;
	string s="{[}]({(})"; string ch;
	//ch=s.at(0); cout<<ch;
	
	for(unsigned i=0;i<s.length();i++)
	{
		ch=s.at(i); 
		expression.push_back(ch);
	}

	brackets_checker(expression);
	cout<<"\n back in main. BBYE";
	return 0;
}
