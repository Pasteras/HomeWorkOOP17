#include "Camera.h"

Camera::Camera(string name) : Component(name) {}

string Camera::UseComponent()
{
	return "Captures an image.";
}