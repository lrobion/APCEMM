/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*                                                                  */
/*     Aircraft Plume Chemistry, Emission and Microphysics Model    */
/*                             (APCEMM)                             */
/*                                                                  */
/* Aircraft Header File                                             */
/*                                                                  */
/* Author               : Thibaud M. Fritz                          */
/* Time                 : 7/26/2018                                 */
/* File                 : Aircraft.hpp                              */
/* Working directory    : /home/fritzt/APCEMM-SourceCode            */
/*                                                                  */
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#ifndef AIRCRAFT_H_INCLUDED
#define AIRCRAFT_H_INCLUDED

#include <string>
#include <iostream>
#include <iomanip>
#include <cstring>

#include "Engine.hpp"

class Aircraft
{
    public:

        Aircraft( const char *aircraftName, double temperature_K, double pressure_Pa, double relHumidity_w );
        ~Aircraft( );
        void Debug( ) const;

        /* Aircraft name */
        std::string Name;

        /* Flight speed & mach Number */
        double vFlight_ms;
        double machNumber;

        /* Dimensions */
        double wingSpan; /* [m] */

        /* Weight */
        double MTOW; /* [kg] */
        double currMass; /* [kg] */

        /* Engine */
        Engine engine;

        /* Number of engines */
        unsigned int engNumber;

    private:

};

#endif /* AIRCRAFT_H_INCLUDED */
