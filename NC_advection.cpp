#include <iostream>
#include<math.h>

using std::cout;
using std::endl;


/*u es el valor de y nuevo 
u1 ayuda a actualizar u
u2 son los valores inciales

*/

int main(){

double c=1.0;
double dx=0.001;
double dt=0.001;
double * u;
int N1=700;
double *u1;
double *u2;
double xmin=-2;
double xmax=2;
int N=(xmax-xmin)/dx;



u=new double[N];
u1=new double[N];
u2=new double[N];
u[0]=0;
u[N-1]=0;


/* se esta inicializando los valores */

for(int i=0;i<N;i++){
   double x=-2+i*dx;
   if(x<=0.5 && x>=-0.5){
     
     u1[i]=0.5;
     u2[i]=0.5;
    
     
}
   else{
      
      u1[i]=0;
      u2[i]=0;
           
}  
}
 
/*l representa el numero de iteraciones en el tiempo */

for (int l=0;l<N1;l++){

/*u se iguala a la condicion inicial para l=0 */
if (l=0){

u=u2;
}

for(int i=1;i<N-1;i++){
 
  u[i]= (-c*(u1[i]-u1[i-1])/dx)*dt+u1[i];
  
}
for (int i=0;i<N;i++)
{
u1[i]=u[i];
}


if(l%(700/4)==0){

for (int m=0;m<N;m++){

cout<<u[m]<<" ";
cout<<endl;

}

}

}
return 0;
}



