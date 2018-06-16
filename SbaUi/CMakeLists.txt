
include_directories("."
					"../SbaCore/Source"
					"../SbaCore/Source/Utility")

add_executable(SbaUi
				"Main.cpp"
				"StartScreen.cpp"
				"StartScreen.h"
				"StartScreen.ui"
				"NewProject.cpp"
				"NewProject.h"
				"NewProject.ui"
				"OpenProject.cpp"
				"OpenProject.h"
				"OpenProject.ui")

target_link_libraries(SbaUi SbaCore Qt5::Core Qt5::Widgets)