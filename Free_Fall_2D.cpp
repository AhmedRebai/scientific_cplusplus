// To contact the authors : Ahmed REBAI ahmed.rebai2@gmail.com 
// and Mohamed TALBI mohamedtalbi.chem@gmail.com 

/* A projectile is launched into the air with an initial velocity v0 
  and angle alpha indicated by the vertical axis Oy. */

/* Required parameters

Number of step 2000
Time step 0.1
x0 = 0
y0 = 0
Initial velocity = 100
Inclination angle in degrees = 45

*/


#include <cmath>
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;

int main(){

  clock_t start, end;
  double cpu_time_used;

  FILE *pFile;

  int i,n;
  double t(0),dt,alpha,v0,g(0.81);
  double x(0),y(0),x0,y0,vx,vy;
  
  do {cout<< " Give the number of step " << endl;
    cin >> n;} while(n < 0);
  
  do {cout<< " Give the time step " << endl;
    cin >> dt;} while(dt < 0);
  
  cout << " x0 ??? " << endl;
  cin >> x0;
  
  cout << " y0 ??? " << endl;
  cin >> y0;
  
  do {cout<< " Initial velocity ??? " << endl;
    cin >> v0;} while(v0 < 0);
  
  do {cout<< " Give the inclination angle in degrees ??? " << endl;
    cin >> alpha;} while(alpha < 0);
  
  alpha = (alpha/180.0) * M_PI;
  
  
  start = clock();
  // Open the results.txt file
  pFile = fopen("results.txt","w");
  
  for (i = 0; i < n ; i++)
    {
      t = i * dt;
      x = v0 * t * sin(alpha) + x0;
      y = -0.5 * g * t * t + v0 * t * cos(alpha) + y0;
      vx = v0 * sin(alpha);
      vy = -g * t + v0 * cos(alpha);
      // cout << t << " " << x << " " << y << " " << vx << " " << vy << endl;
      fprintf(pFile, "%f %f %f %f %f \n",t,x,y,vx,vy);
    }
  
  fclose(pFile);
  
  //
  // Study of the program performance
  // with CPU used time
  end = clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;  
  cout << endl << endl << endl;
  cout << "end = " << end << endl;
  cout << "start = " << start << endl;
  cout << "CLOCKS_PER_SEC = " << CLOCKS_PER_SEC << endl;
  cout << "cpu_time_used = " << cpu_time_used << endl;
  
  return 0;

}
