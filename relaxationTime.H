//////////////////////////////////////////////////////////////////////////////////////

#include "readSchmidtNumber.H"

//////////////////////////////////////////////////////////////////////////////////////

#include "readDropletDiameter.H"

//////////////////////////////////////////////////////////////////////////////////////

Info<< "Reading water density\n" << endl;
dimensionedScalar rhoW
(
    "rhoW",
    transportProperties.lookup("rhoW")
);
Info<< "Reading air viscosity\n" << endl;
dimensionedScalar mu
(
    "mu",
    transportProperties.lookup("mu")
);
Info<< "Reading air kinematic viscosity\n" << endl;
dimensionedScalar nu
(
    "nu",
    transportProperties.lookup("nu")
);

//////////////////////////////////////////////////////////////////////////////////////

#include "Reloc.H"
#include "dragCoefficient.H"
#include "relt.H"

//////////////////////////////////////////////////////////////////////////////////////

Info<< "\nReading gravitationalProperties" << endl;
IOdictionary gravitationalProperties
(
    IOobject
    (
        "gravitationalProperties",
        runTime.constant(),
        mesh,
        IOobject::MUST_READ_IF_MODIFIED,
        IOobject::NO_WRITE
    )
);

const dimensionedVector g(gravitationalProperties.lookup("g"));
const dimensionedScalar magg = mag(g);
const dimensionedVector gHat = g/magg;

Info<< "Reading field grav\n" << endl;
volVectorField grav
(
    IOobject
    (
        "grav",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::NO_WRITE
    ),
    mesh,
    g
);

//////////////////////////////////////////////////////////////////////////////////////

#include "settlingVelocity.H"

//////////////////////////////////////////////////////////////////////////////////////

#include "createPhiW.H"

//////////////////////////////////////////////////////////////////////////////////////
