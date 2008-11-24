/**
******************************************************************************
 *
 * @file inittab.h
 *
 * @brief YUV conversion defines
 *
 * @details
 * YUV to RGB conversion
 * \n |R|  =  | 1.1644    0       1.596   |   |Y-16 |
 * \n |G|  =  | 1.1644    -0.392  -0.813  |   |U-128|
 * \n |B|  =  | 1.1644    2.02    0       |   |V-128|
 *
 * RGB to YUV conversion
 * \n |Y|  =  |  0.2568    0.5042    0.0978| |R| + |16 |
 * \n |U|  =  | -0.1480   -0.2906    0.4387| |G| + |128|
 * \n |V|  =  |  0.4392   -0.3678   -0.0714| |B| + |128|
******************************************************************************/


#ifndef TAB_76309
#define TAB_76309

#define SCALEY     76309
#define SCALECrv   104597
#define SCALECbu   132201
#define SCALECgu   25675
#define SCALECgv   53279

#define SHIFTY     16
#define SHIFTCC    128
#define SHIFTCrv   128
#define SHIFTCbu   128
#define SHIFTCgu   128
#define SHIFTCgv   128


#define SCALEYR     16831
#define SCALEYG     33040
#define SCALEYB     6412
#define SCALEUR    -9702
#define SCALEUG    -19046
#define SCALEUB     28748
#define SCALEVR     28783
#define SCALEVG    -24105 
#define SCALEVB    -4678

#endif
