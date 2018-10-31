//////////////////////////////////////////////////////////////////////////////////////
Info<< "computing face flux field phiW0\n" << endl;
surfaceScalarField phiW0
(
    IOobject
    (
        "phiW0",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    fvc::flux(UW0)
);
//////////////////////////////////////////////////////////////////////////////////////
Info<< "computing face flux field phiW1\n" << endl;
surfaceScalarField phiW1
(
    IOobject
    (
        "phiW1",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    fvc::flux(UW1)
);
//////////////////////////////////////////////////////////////////////////////////////
Info<< "computing face flux field phiW2\n" << endl;
surfaceScalarField phiW2
(
    IOobject
    (
        "phiW2",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    fvc::flux(UW2)
);
//////////////////////////////////////////////////////////////////////////////////////
Info<< "computing face flux field phiW3\n" << endl;
surfaceScalarField phiW3
(
    IOobject
    (
        "phiW3",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    fvc::flux(UW3)
);
//////////////////////////////////////////////////////////////////////////////////////
Info<< "computing face flux field phiW4\n" << endl;
surfaceScalarField phiW4
(
    IOobject
    (
        "phiW4",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    fvc::flux(UW4)
);
//////////////////////////////////////////////////////////////////////////////////////
Info<< "computing face flux field phiW5\n" << endl;
surfaceScalarField phiW5
(
    IOobject
    (
        "phiW5",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    fvc::flux(UW5)
);
//////////////////////////////////////////////////////////////////////////////////////
Info<< "computing face flux field phiW6\n" << endl;
surfaceScalarField phiW6
(
    IOobject
    (
        "phiW6",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    fvc::flux(UW6)
);
//////////////////////////////////////////////////////////////////////////////////////
Info<< "computing face flux field phiW7\n" << endl;
surfaceScalarField phiW7
(
    IOobject
    (
        "phiW7",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    fvc::flux(UW7)
);
//////////////////////////////////////////////////////////////////////////////////////
Info<< "computing face flux field phiW8\n" << endl;
surfaceScalarField phiW8
(
    IOobject
    (
        "phiW8",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    fvc::flux(UW8)
);
//////////////////////////////////////////////////////////////////////////////////////
Info<< "computing face flux field phiW9\n" << endl;
surfaceScalarField phiW9
(
    IOobject
    (
        "phiW9",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    fvc::flux(UW9)
);
//////////////////////////////////////////////////////////////////////////////////////
