# Build example
add_executable(example
  window.cpp
  glew.c
  vec2.cpp
  rectangle.cpp
  circle.cpp
  example.cpp)
target_link_libraries(example
  glfw
  ${GLFW_LIBRARIES}
  m)
add_dependencies(example glfw ${COPY_BINARY})

# Build tests
add_executable(tests
  tests.cpp
  vec2.cpp
  glew.c
  window.cpp
  rectangle.cpp
  circle.cpp
  mat2.cpp)
target_link_libraries(tests glfw
  ${GLFW_LIBRARIES})


