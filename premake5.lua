workspace "Raiva"
	architecture "x64"

	configurations 
	{
		"Debug",
		"Release",
		"Dist"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Include Dirs
IncludeDir = {}
IncludeDir["GLFW"] = "Raiva/vendor/GLFW/include"


include "Raiva/vendor/GLFW"



project "Raiva"
	location "Raiva"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	pchheader "rvpch.h"
	pchsource "Raiva/src/rvpch.cpp"

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"%{prj.name}/src",
		"%{prj.name}/vendor/spdlog/include",
		"%{IncludeDir.GLFW}"
	}

	links
	{
		"GLFW",
		"opengl32.lib"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"RV_PLATFORM_WINDOWS",
			"RV_BUILD_DLL"
		}

		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
		}

	filter "configurations:Debug"
		defines "RV_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "RV_RELEASE"
		optimize "On"
	
	filter "configurations:Dist"
		defines "RV_DIST"
		optimize "On"

project "Sandbox"
	location "sandbox"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"Raiva/vendor/spdlog/include",
		"Raiva/src"
	}

	links 
	{
		"Raiva"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"RV_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "RV_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "RV_RELEASE"
		optimize "On"
	
	filter "configurations:Dist"
		defines "RV_DIST"
		optimize "On"


	