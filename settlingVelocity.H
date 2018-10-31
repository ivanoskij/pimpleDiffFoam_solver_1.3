//////////////////////////////////////////////////////////////////////////////////////
Info<< "Computing settling velocity 0\n" << endl;
volVectorField UW0
(
    IOobject
    (
        "UW0",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    relt0*grav
);
//////////////////////////////////////////////////////////////////////////////////////
Info<< "Computing settling velocity 1\n" << endl;
volVectorField UW1
(
    IOobject
    (
        "UW1",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    relt1*grav
);
//////////////////////////////////////////////////////////////////////////////////////
Info<< "Computing settling velocity 2\n" << endl;
volVectorField UW2
(
    IOobject
    (
        "UW2",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    relt2*grav
);
//////////////////////////////////////////////////////////////////////////////////////
Info<< "Computing settling velocity 3\n" << endl;
volVectorField UW3
(
    IOobject
    (
        "UW3",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    relt3*grav
);
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
Info<< "Computing settling velocity 4\n" << endl;
volVectorField UW4
(
    IOobject
    (
        "UW4",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    relt4*grav
);
//////////////////////////////////////////////////////////////////////////////////////
Info<< "Computing settling velocity 5\n" << endl;
volVectorField UW5
(
    IOobject
    (
        "UW5",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    relt5*grav
);
//////////////////////////////////////////////////////////////////////////////////////
Info<< "Computing settling velocity 6\n" << endl;
volVectorField UW6
(
    IOobject
    (
        "UW6",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    relt6*grav
);
//////////////////////////////////////////////////////////////////////////////////////
Info<< "Computing settling velocity 1\n" << endl;
volVectorField UW7
(
    IOobject
    (
        "UW7",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    relt7*grav
);
//////////////////////////////////////////////////////////////////////////////////////
Info<< "Computing settling velocity 8\n" << endl;
volVectorField UW8
(
    IOobject
    (
        "UW8",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    relt8*grav
);
//////////////////////////////////////////////////////////////////////////////////////
Info<< "Computing settling velocity 9\n" << endl;
volVectorField UW9
(
    IOobject
    (
        "UW9",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    relt9*grav
);
//////////////////////////////////////////////////////////////////////////////////////
