
public class Neuron {
	const int n = 3;
	const int m = 3;
	private:
	    double x[n] = {1,2,3};
	    double [n][m] w;
	    double [n] link;
	    double [m] pre;
	    double [m] after;
	    
	    double rate;
	    double [] resi;
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
	    
	    double [] dgemv(double[n] a, double[n][m] b)	//œÚ¡ø≥À∑® 
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
	    	return temp[j];
		}
	  
	  double pre(double[n] x, double[n][m] w) {	//
	  	return pre = double dgemv(double[n] x, double[n][m] w);
	  }
	  
	  double after(double pre){
	  	
	  }
};
