# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Auth_autogen"
  "CMakeFiles\\Auth_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Auth_autogen.dir\\ParseCache.txt"
  )
endif()
