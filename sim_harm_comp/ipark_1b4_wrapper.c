
/*
 * Include Files
 *
 */
#if defined(MATLAB_MEX_FILE)
#include "tmwtypes.h"
#include "simstruc_types.h"
#else
#include "rtwtypes.h"
#endif



/* %%%-SFUNWIZ_wrapper_includes_Changes_BEGIN --- EDIT HERE TO _END */
#include <math.h>
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define u_width 1
#define y_width 1

/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
/* extern double func(double a); */
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output function
 *
 */
void ipark_1b4_Outputs_wrapper(const real_T *id,
			const real_T *iq,
			const real_T *theta,
			real_T *i_alpha,
			real_T *i_beta)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
/*ipark to alpha beta reference frame
*/
#include <math.h>

double Ds, Qs;
 Ds= id[0];
 Qs = iq[0];
 

i_alpha[0] = (Ds*cos(theta[0])) - (Qs*sin(theta[0]));		
i_beta[0]  = (Qs*cos(theta[0])) + (Ds*sin(theta[0]));
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}


