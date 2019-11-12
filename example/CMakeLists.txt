project(example)

add_executable(
	example
    main.cpp
)

install(TARGETS example RUNTIME DESTINATION ${BIN_DIR})
