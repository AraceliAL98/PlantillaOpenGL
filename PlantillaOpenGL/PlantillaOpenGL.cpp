// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <stdio.h>
#include<stdlib.h>


#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>


int main()
{
	//Declaramos apuntador de ventana
	GLFWwindow *window;
	
	//Si no pudo iniciar glfw
	//terminamos ejecucion
	if(!glfwInit())
	{
	
	}
    return 0;
}

