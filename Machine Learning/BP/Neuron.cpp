#include<iostream>
#include<string>
#include<vector>

using std::string;
using std::cin; using std::cout; using std::endl;
using std::vector;

 class Neuron 
{
	#define n 3
	#define m 3
	private:
		
//		int n = 0;
//		cin >> n;
//		int *x = new int[n];
//		delete[] x;

	    double x[n];
	    double w[n][m];
	    double link[n];
	    double pre[m];
	    double after[m];
	    
	    double rate;
	    double resi[];
	    double change;
	    
	public:
	    void getX()
	    {
	        
	    }
	    
	    void getW()
	    {
	        
	    }
	    
	    void getLink()
	    {
	        
	    }
	    
	    void getRate()
	    {
	        
	    }
	    
	    double *dgemv(double a[n], double b[n][m])	//œÚ¡ø≥À∑® 
	    {
	    	int i = 0 , j = 0 ;
	    	while (j+1 != m){
	    		double temp[j] = a[i] * b[i][j];
	    		while (i+1 != n){
	    		i++;
	    		temp[j] = temp[j] + a[i] * b[i][j];
				}
				j++;
			}
	    	return temp;
		}
	  
	  double *pre(double x[n], double w[n][m]) {	//
	  	double pre[m];
	  	return pre = dgemv(double x[n], double w[n][m]);
	  }
	  
	  double after(double pre){
	  	
	  }
};
 

