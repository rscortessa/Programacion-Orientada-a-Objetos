#include "funciones.h"

void initial_conditions(Particle & body)
{
  body.Ry = 1.6598;
  body.Vx = 0.23698;

  body.rad = 0.235;
  body.mass = 0.29698;
}

void compute_force(Particle & body)
{
  // reset force
  body.Fx = body.Fy = body.Fz = 0.0;

  // gravitational force
  body.Fy += body.mass*G;

  // force with ground
  double delta = body.rad - body.Ry;
  if (delta > 0) {
    body.Fy += K*delta;
    //body.Fy -= 1.9876*body.Vy; 
  }
 
}

void start_integration(Particle & body, const double & dt)
{
  
}

  void time_integration(Particle & body, const double & dt)
{
  body.Rx=body.Rx+body.Vx*dt+body.Fx*dt*dt*0.5/body.mass;
  body.Rz=body.Rz+body.Vz*dt+body.Fz*dt*dt*0.5/body.mass;
  body.Ry=body.Ry+body.Vy*dt+body.Fy*dt*dt*0.5/body.mass;
  body.Vx=body.Vx+body.Fx*dt/body.mass;
  body.Vz=body.Vz+body.Fz*dt/body.mass;
  body.Vy=body.Vy+body.Fy*dt/body.mass;
}


void print(Particle & body, double time)
{
  std::cout << time << "  " 
            << body.Rx << "  "
            << body.Ry << "  "
            << body.Rz << "  "
            << body.Vx << "  "
            << body.Vy << "  "
            << body.Vz << "  "
            << "\n";
}
