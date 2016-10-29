#pragma once
#include "Singleton.h"
#include <string>
#include <SDL.h>

struct Settings : public Singleton<Settings>
{
public:
	Settings():Window(WindowSettings())
	{

	}
	~Settings() {}

	struct WindowSettings
	{
		WindowSettings() :
			Fullscreen(false),
			VSyncEnabled(false),
			AspectRatio(Width / (float)Height),
			Title("OpenGl Planet Renderer"),
			pWindow(nullptr)
		{
			Width = Fullscreen ? 1920 : 1280;
			Height = Fullscreen ? 1080 : 720;
		}
		bool Fullscreen;
		bool VSyncEnabled;
		int Width;
		int Height;
		float AspectRatio;
		std::string Title;
		SDL_Window* pWindow;
	}Window;
};
