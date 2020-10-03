#pragma once

#ifdef MX_PLATFORM_WINDOWS

extern Matrix::Application* Matrix::CreateApplication();

int main(int argc, char** argv)
{
	Matrix::Log::Init();

	MX_CORE_WARN("dumb");

	auto app = Matrix::CreateApplication();
	app->Run();
	delete app;
}

#endif