#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

double calcDistance(double x1, double x2, double y1, double y2, double z1, double z2) {
	double xPoint, yPoint, zPoint,final;
	xPoint = pow((x1 - x2), 2);
	yPoint = pow((y1 - y2), 2);
	zPoint = pow((z1 - z2), 2);
	final = sqrt(xPoint + yPoint + zPoint);
	return final;
}

