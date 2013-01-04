#include "StdAfx.h"
#include "Earth.h"


Earth::Earth(void) { /* constructor body */ }
Earth::~Earth(void) { /* destructor body */ }

LPCWSTR Earth::getImageName()
{
	return TEXT("earth.bmp");
}

double Earth::getRadius()
{
	return 1.0;
}

double Earth::getSpinPeriod()
{
	return 1.0;
}

double Earth::getOrbitPeriod()
{
	return 365.0;
}

coord Earth::getDistanceToOrbitCenter()
{
	return coord(1000.0, 0.0, 0.0);
}

rotationCoord Earth::getSpinRotationCoord()
{
	return rotationCoord(this->getSpinRotationAngle(), 0.0, 1.0, 0.0);
}

rotationCoord Earth::getOrbitRotationCoord()
{
	return rotationCoord(this->getOrbitRotationAngle(), 0.0, 1.0, 0.0);
}

rotationCoord Earth::getInitRotationCoord()
{
	return rotationCoord(23 + this->sphereDrawnAngle, 1.0, 0.0, 0.0);
}