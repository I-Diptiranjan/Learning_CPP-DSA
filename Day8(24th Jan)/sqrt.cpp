// Find Sqrt Using Binary Search

#include<iostream>
using namespace std;

 int findTempSol(int x)
{
     int s=0,end=x;
      int ans;
      while(s<=end)
      {
          int mid = s+(end-s)/2;
          int sqr = mid*mid;
          if(sqr == x)
          {
              return mid;
          }
          else if(sqr < x)
          {
              ans = mid;
              s=mid+1;
          }
          else if(sqr > x)
          {
              end=mid-1;
          }
      }  

      return ans;
}

double findOptimalSol(int x,int prec,int tempSol)
{
    double factor = 1;
    double ans=tempSol;
 
    
    for(double i=1;i<=prec;i++)
    {
        factor=factor/10;
        for(double j=ans;(j*j)<=x;j=j+factor)
        {
            ans=j;
        }
    }

    return ans;
}


int main()
{
    int num,tempSol;
    cout<<"Enter Your Number : "<<endl;
    cin>>num;
    tempSol=findTempSol(num);
    cout << "Ans is " << tempSol << endl ;
    double solution;
    solution = findOptimalSol(num,3,tempSol);
    cout<<"Final ans is "<<solution<<endl;
    
}