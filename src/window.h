#ifndef WINDOW_H
#define WINDOW_H
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <stdlib.h>
#include <iostream>
#include <functional>
#include "defines.h"
#include "stbImage.h"// Used to load the icon

class Window
{
public:
	Window();
	~Window();

	void start();

	// Functions called each frame
	std::function<void()> draw;
	std::function<void()> consensus;
	std::function<void()> generation;
	std::function<void()> run;
private:
	GLFWwindow *_mainWindow;
	GLFWwindow *_consensusWindow;
	GLFWwindow *_generationWindow;
};
#endif// WINDOW_H
