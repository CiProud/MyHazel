#pragma once

#include <memory>
#include "Core.h"

namespace Hazel {
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	std::unique_ptr<Application> CreateApplication();
}


