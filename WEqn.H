///////////////////////////////////////////////////////////////////////
fvScalarMatrix W0Eqn
(
    fvm::ddt(W0)
  + fvm::div(phi, W0)
  + fvm::div(phiW0, W0)
  - fvm::laplacian(turbulence->nuEff()/Sc0,W0)
 ==
    fvOptions(W0)
);

W0Eqn.relax();
fvOptions.constrain(W0Eqn);
W0Eqn.solve();
///////////////////////////////////////////////////////////////////////
fvScalarMatrix W1Eqn
(
    fvm::ddt(W1)
  + fvm::div(phi, W1)
  + fvm::div(phiW1, W1)
  - fvm::laplacian(turbulence->nuEff()/Sc1,W1)
 ==
    fvOptions(W1)
);

W1Eqn.relax();
fvOptions.constrain(W1Eqn);
W1Eqn.solve();
///////////////////////////////////////////////////////////////////////
fvScalarMatrix W2Eqn
(
    fvm::ddt(W2)
  + fvm::div(phi, W2)
  + fvm::div(phiW2, W2)
  - fvm::laplacian(turbulence->nuEff()/Sc2,W2)
 ==
    fvOptions(W2)
);

W2Eqn.relax();
fvOptions.constrain(W2Eqn);
W2Eqn.solve();
///////////////////////////////////////////////////////////////////////
fvScalarMatrix W3Eqn
(
    fvm::ddt(W3)
  + fvm::div(phi, W3)
  + fvm::div(phiW3, W3)
  - fvm::laplacian(turbulence->nuEff()/Sc3,W3)
 ==
    fvOptions(W3)
);

W3Eqn.relax();
fvOptions.constrain(W3Eqn);
W3Eqn.solve();
///////////////////////////////////////////////////////////////////////
fvScalarMatrix W4Eqn
(
    fvm::ddt(W4)
  + fvm::div(phi, W4)
  + fvm::div(phiW4, W4)
  - fvm::laplacian(turbulence->nuEff()/Sc4,W4)
 ==
    fvOptions(W4)
);

W4Eqn.relax();
fvOptions.constrain(W4Eqn);
W4Eqn.solve();
///////////////////////////////////////////////////////////////////////
fvScalarMatrix W5Eqn
(
    fvm::ddt(W5)
  + fvm::div(phi, W5)
  + fvm::div(phiW5, W5)
  - fvm::laplacian(turbulence->nuEff()/Sc5,W5)
 ==
    fvOptions(W5)
);

W5Eqn.relax();
fvOptions.constrain(W5Eqn);
W5Eqn.solve();
///////////////////////////////////////////////////////////////////////
fvScalarMatrix W6Eqn
(
    fvm::ddt(W6)
  + fvm::div(phi, W6)
  + fvm::div(phiW6, W6)
  - fvm::laplacian(turbulence->nuEff()/Sc6,W6)
 ==
    fvOptions(W6)
);

W6Eqn.relax();
fvOptions.constrain(W6Eqn);
W6Eqn.solve();
///////////////////////////////////////////////////////////////////////
fvScalarMatrix W7Eqn
(
    fvm::ddt(W7)
  + fvm::div(phi, W7)
  + fvm::div(phiW7, W7)
  - fvm::laplacian(turbulence->nuEff()/Sc7,W7)
 ==
    fvOptions(W7)
);

W7Eqn.relax();
fvOptions.constrain(W7Eqn);
W7Eqn.solve();
///////////////////////////////////////////////////////////////////////
fvScalarMatrix W8Eqn
(
    fvm::ddt(W8)
  + fvm::div(phi, W8)
  + fvm::div(phiW8, W8)
  - fvm::laplacian(turbulence->nuEff()/Sc8,W8)
 ==
    fvOptions(W8)
);

W8Eqn.relax();
fvOptions.constrain(W8Eqn);
W8Eqn.solve();
///////////////////////////////////////////////////////////////////////
fvScalarMatrix W9Eqn
(
    fvm::ddt(W9)
  + fvm::div(phi, W9)
  + fvm::div(phiW9, W9)
  - fvm::laplacian(turbulence->nuEff()/Sc9,W9)
 ==
    fvOptions(W9)
);

W9Eqn.relax();
fvOptions.constrain(W9Eqn);
W9Eqn.solve();
///////////////////////////////////////////////////////////////////////
