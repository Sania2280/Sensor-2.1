# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Hw9_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Hw9_autogen.dir\\ParseCache.txt"
  "Hw9_autogen"
  )
endif()
