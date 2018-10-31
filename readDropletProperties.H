
Info<<"Reading Droplet Properties\n" << endl;
IOdictionary dropletProperties
(
    IOobject
    (
	"dropletProperties",
	runTime.constant(),
	mesh,
	IOobject::MUST_READ_IF_MODIFIED,
	IOobject::NO_WRITE
    )
);
