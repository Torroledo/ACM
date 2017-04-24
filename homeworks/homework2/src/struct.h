#ifndef STRUCT_H
#define STRUCT_H
#define GAMMA 1.4
#define LEN_TUBE 1.0
#define DELTA_X 0.01
#define FLOAT double
typedef struct physics_grid_str{
  int N;
  FLOAT L;
  FLOAT delta_x;
  FLOAT *pos;
  FLOAT *pres;
  FLOAT *rho;
  FLOAT *vel;
  FLOAT *ene;
} physics_grid;
typedef struct U_grid_str{
  int N;
  FLOAT *U_1;
  FLOAT *U_2;
  FLOAT *U_3;
  FLOAT *U_1_star;
  FLOAT *U_2_star;
  FLOAT *U_3_star;
  FLOAT *U_1_new;
  FLOAT *U_2_new;
  FLOAT *U_3_new;
} U_grid;
typedef struct F_grid_str{
  int N;
  FLOAT *F_1;
  FLOAT *F_2;
  FLOAT *F_3;
  FLOAT *F_1_star;
  FLOAT *F_2_star;
  FLOAT *F_3_star;
} F_grid;
#endif
