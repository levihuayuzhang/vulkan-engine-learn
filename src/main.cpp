#include <vulkan/vulkan.h>
#include <iostream>
#include <vulkan/vulkan_core.h>

int main()
{
    VkApplicationInfo appInfo = {};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "Pong";
    appInfo.pEngineName = "ph1gine";

    VkDeviceCreateInfo deviceInfo {};
    deviceInfo.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;


    VkInstanceCreateInfo instanceInfo = {};
    instanceInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instanceInfo.pApplicationInfo = &appInfo;


    VkInstance instance;

    VkResult result = vkCreateInstance(&instanceInfo, 0, &instance);

    if (result == VK_SUCCESS)
    {
        std::cout << "Successfully Create Vulkan Instance..." << std::endl;
    }

    return 0;
}