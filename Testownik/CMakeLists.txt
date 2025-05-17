cmake_minimum_required(VERSION 3.19)
project(Testownik LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(Testownik
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    core/question.h core/question.cpp
    core/textquestion.h core/textquestion.cpp
    core/textquestion.cpp core/textquestion.h
    core/QuestionSource.h
    core/jsonquestionsource.h core/jsonquestionsource.cpp
    core/quizmanager.h core/quizmanager.cpp
    base/miernictwoForTesting.json
)

target_link_libraries(Testownik
    PRIVATE
        Qt::Core
        Qt::Widgets
)

include(GNUInstallDirs)

install(TARGETS Testownik
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET Testownik
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
