#include "StdAfx.h"
#include "Sun.h"


Sun::Sun(void) { /* constructor body */ }
Sun::~Sun(void) { /* destructor body */ }

LPCWSTR	Sun::getImageName()
{
	return TEXT("sun.bmp");
}

double Sun::getRadius() 
{
	return 4.6491;
}

double Sun::getSpinPeriod()
{
	return 25.0;
}

double Sun::getOrbitPeriod() 
{
	return 0.0;
}

coord Sun::getDistanceToOrbitCenter() 
{
	return coord(0.0, 0.0, 0.0);
}

rotationCoord Sun::getSpinRotationCoord() 
{
	return rotationCoord(this->getSpinRotationAngle(), 0.0, 1.0, 0.0);
}

rotationCoord Sun::getOrbitRotationCoord()
{
	return rotationCoord(0.0, 0.0, 0.0, 0.0);
}

double Sun::getSphereSlices() 
{
	return 40.0;
}

double Sun::getSphereStacks()
{
	return 32.0;
}