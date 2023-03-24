//dhairyasingla09
#include <bits/stdc++.h>
using namespace std;

int main(){
     /*n friends
     k bottles
     total_ml=k*l
     total_limes= c*d  -> d hisse, c lemons
     p salt
     
                 1 2 3 4 5 6 7 .....n
      drinks    nl nl nl nl nl ....  total -> n*(nl)
      lime      1  1  1  1   1  .... total -> (cd)
      salt      np  np np np np ...  total -> n*(np)
      
      drinks -> n *(nl) * x = k*l
      lime   -> n * x = cd
      salt  ->  n * (np) * x = p */
 
  int n, k, l, c, d, p, nl, np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  
  int total_limes=c*d;
  int total_drinks=k*l;
  
  int x=total_drinks/(n*nl);
  int y=total_limes/n;
  
  int z=p/(n*np);
  
  int res=min(x,min(y,z));
  cout<<res;
  
  return 0;
}
