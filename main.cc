#include <glfw3.h>
#include <iostream>

int main(void) 
{
	if(!glfwInit()) 
	{
		std::cerr << "GLFW Error: Not Initialized" << std::endl;
		return -1;
	}

	std::cout << "GLFW Success: Initialized" << std::endl;

	GLFWwindow* window = glfwCreateWindow(600, 600, "GLFW Window", nullptr, nullptr);

	if(!window) 
	{
		std::cerr << "GLFW Error: Window not created" << std::endl;
		glfwTerminate();

		return -1;
	}

	while(!glfwWindowShouldClose(window)) 
	{
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	std::cout << "GLFW Terminate" << std::endl;

	return 0;
}
