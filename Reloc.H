
const dimensionedScalar dummyV("dummyV",dimensionSet(0, 1, -1, 0, 0),1e-10);

Info<< "Computing Reloc0\n" << endl;
volScalarField Reloc0 ("Reloc0", ((max(mag(dummyV),mag(U)))*dW0*rhoW/mu));

Info<< "Computing Reloc1\n" << endl;
volScalarField Reloc1 ("Reloc1", ((max(mag(dummyV),mag(U)))*dW1*rhoW/mu));

Info<< "Computing Reloc2\n" << endl;
volScalarField Reloc2 ("Reloc2", ((max(mag(dummyV),mag(U)))*dW2*rhoW/mu));

Info<< "Computing Reloc3\n" << endl;
volScalarField Reloc3 ("Reloc3", ((max(mag(dummyV),mag(U)))*dW3*rhoW/mu));

Info<< "Computing Reloc4\n" << endl;
volScalarField Reloc4 ("Reloc4", ((max(mag(dummyV),mag(U)))*dW4*rhoW/mu));

Info<< "Computing Reloc5\n" << endl;
volScalarField Reloc5 ("Reloc5", ((max(mag(dummyV),mag(U)))*dW5*rhoW/mu));

Info<< "Computing Reloc6\n" << endl;
volScalarField Reloc6 ("Reloc6", ((max(mag(dummyV),mag(U)))*dW6*rhoW/mu));

Info<< "Computing Reloc7\n" << endl;
volScalarField Reloc7 ("Reloc7", ((max(mag(dummyV),mag(U)))*dW7*rhoW/mu));

Info<< "Computing Reloc8\n" << endl;
volScalarField Reloc8 ("Reloc8", ((max(mag(dummyV),mag(U)))*dW8*rhoW/mu));

Info<< "Computing Reloc9\n" << endl;
volScalarField Reloc9 ("Reloc9", ((max(mag(dummyV),mag(U)))*dW9*rhoW/mu));
