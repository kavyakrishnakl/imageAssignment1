#include<iostream>


using namespace std;

class matrix
{
	public:
		int i,j,M[3][3];
		void accept();
		void display();
		void displayneg();
		void operator -();
	
};

void matrix::	accept()
{
	cout<<"Enter the 3*3 matrix";
	cout<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>M[i][j];
		}
	}
}

void matrix::display()
{
	cout<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<M[i][j];
			cout<<"\t";
		}
		cout<<"\n";
	}
}
void matrix::displayneg()
{
	cout<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<M[i][j];
			cout<<"\t";
		}
		cout<<"\n";
	}
}
void matrix::operator -()
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				M[i][j]=(-1)*M[i][j];
			}
		}
	}

int main()
{
	matrix m;
	m.accept();
	m.display();
	-m;
	m.displayneg();
	
}
