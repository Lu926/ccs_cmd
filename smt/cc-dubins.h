// *** File: cc-dubins.h
// *** Author(s): Th. Fraichard
// *** Last modified on 15 Mar 2017

// Description: 

#ifndef CC_DUBINS_H
#define CC_DUBINS_H

#include <iostream>
#include <float.h>	      /* to have MAXFLOAT, FLT_MAX */
using namespace std;

#include <utilities.h>
#include <configuration.h>
#include <paths.h>

SMT_CC_Dubins_Path *cc_dubins (SMT_Configuration start, 
			       SMT_Configuration end,
			       double kappa, double sigma);

#endif
