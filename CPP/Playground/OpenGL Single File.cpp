//OpenGL Single File

#include <glew.h>
#include <GLFW/glfw3.h>

#include <iostream>


int main(){
	
	glfwInit() ? std::cout << "glfwInit Success!\n" : std::cout << "glfwInit Failed!\n";

	GLFWwindow* window = glfwCreateWindow(windowW, windowH, "Hello World", NULL, NULL);
	if (!window)
	{
		std::cout << "failed to make the window!";
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	
	
	glfwMakeContextCurrent(window);
	glfwSwapInterval(1); //limit draw to screen refresh rate. 
	glewInit() == GLEW_OK ? std::cout << "GLEW_OK! Version: " << glewGetString(GLEW_VERSION) << "\n" : std::cout << "GLEW_NOT_OK!\n";
	glfwSetKeyCallback(window, key_callback);
	glfwSetWindowSizeCallback(window, window_size_callback);		//setup window resize callback
	glfwSetCursorPosCallback(window, cursorPositionCallback);		//setup cursor position callback
	
	glViewport(0, 0, windowW, windowH); //set default viewport Should move value to a const uint... can then use window size callback. 
	
	
	
	
	
	
	
}

