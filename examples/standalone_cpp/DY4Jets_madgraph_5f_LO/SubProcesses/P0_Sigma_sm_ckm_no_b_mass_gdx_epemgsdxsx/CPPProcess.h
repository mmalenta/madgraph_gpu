//==========================================================================
// This file has been automatically generated for C++ Standalone by
// MadGraph5_aMC@NLO v. 2.7.0, 2020-01-20
// By the MadGraph5_aMC@NLO Development Team
// Visit launchpad.net/madgraph5 and amcatnlo.web.cern.ch
//==========================================================================

#ifndef MG5_Sigma_sm_ckm_no_b_mass_gdx_epemgsdxsx_H
#define MG5_Sigma_sm_ckm_no_b_mass_gdx_epemgsdxsx_H

#include <complex> 
#include <vector> 

#include "Parameters_sm_ckm_no_b_mass.h"

using namespace std; 

//==========================================================================
// A class for calculating the matrix elements for
// Process: g d~ > e+ e- g s d~ s~ WEIGHTED<=8 / h
// Process: g d~ > e+ e- g b d~ b~ WEIGHTED<=8 / h
// Process: g d~ > mu+ mu- g s d~ s~ WEIGHTED<=8 / h
// Process: g d~ > mu+ mu- g b d~ b~ WEIGHTED<=8 / h
// Process: g s~ > e+ e- g d s~ d~ WEIGHTED<=8 / h
// Process: g s~ > e+ e- g b s~ b~ WEIGHTED<=8 / h
// Process: g s~ > mu+ mu- g d s~ d~ WEIGHTED<=8 / h
// Process: g s~ > mu+ mu- g b s~ b~ WEIGHTED<=8 / h
// Process: g b~ > e+ e- g d b~ d~ WEIGHTED<=8 / h
// Process: g b~ > e+ e- g s b~ s~ WEIGHTED<=8 / h
// Process: g b~ > mu+ mu- g d b~ d~ WEIGHTED<=8 / h
// Process: g b~ > mu+ mu- g s b~ s~ WEIGHTED<=8 / h
//--------------------------------------------------------------------------

class CPPProcess
{
  public:

    // Constructor.
    CPPProcess() {}

    // Initialize process.
    virtual void initProc(string param_card_name); 

    // Calculate flavour-independent parts of cross section.
    virtual void sigmaKin(); 

    // Evaluate sigmaHat(sHat).
    virtual double sigmaHat(); 

    // Info on the subprocess.
    virtual string name() const {return "g d~ > e+ e- g s d~ s~ (sm_ckm_no_b_mass)";}

    virtual int code() const {return 0;}

    const vector<double> & getMasses() const {return mME;}

    // Get and set momenta for matrix element evaluation
    vector < double * > getMomenta(){return p;}
    void setMomenta(vector < double * > & momenta){p = momenta;}
    void setInitial(int inid1, int inid2){id1 = inid1; id2 = inid2;}

    // Get matrix element vector
    const double * getMatrixElements() const {return matrix_element;}

    // Constants for array limits
    static const int ninitial = 2; 
    static const int nexternal = 8; 
    static const int nprocesses = 2; 

  private:

    // Private functions to calculate the matrix element for all subprocesses
    // Calculate wavefunctions
    void calculate_wavefunctions(const int perm[], const int hel[]); 
    static const int nwavefuncs = 141; 
    std::complex<double> w[nwavefuncs][18]; 
    static const int namplitudes = 408; 
    std::complex<double> amp[namplitudes]; 
    double matrix_gdx_epemgsdxsx_no_h(); 

    // Store the matrix element value from sigmaKin
    double matrix_element[nprocesses]; 

    // Color flows, used when selecting color
    double * jamp2[nprocesses]; 

    // Pointer to the model parameters
    Parameters_sm_ckm_no_b_mass * pars; 

    // vector with external particle masses
    vector<double> mME; 

    // vector with momenta (to be changed each event)
    vector < double * > p; 
    // Initial particle ids
    int id1, id2; 

}; 


#endif  // MG5_Sigma_sm_ckm_no_b_mass_gdx_epemgsdxsx_H
