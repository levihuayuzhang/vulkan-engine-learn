#include <vulkan/vulkan.h>
#include <iostream>

int main()
{
    VkApplicationInfo appInfo = {};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "Pong";
    appInfo.pEngineName = "ph1gine";

    VkInstanceCreateInfo instanceInfo = {};
    instanceInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instanceInfo.pApplicationInfo = &appInfo;
    instanceInfo.flags |= VK_INSTANCE_CREATE_ENUMERATE_PORTABILITY_BIT_KHR;

    VkInstance instance;

    VkResult result = vkCreateInstance(&instanceInfo, 0, &instance);

    if (result == VK_SUCCESS)
    {
        std::cout << "Successfully Create Vulkan Instance..." << std::endl;
    }

    return 0;
}