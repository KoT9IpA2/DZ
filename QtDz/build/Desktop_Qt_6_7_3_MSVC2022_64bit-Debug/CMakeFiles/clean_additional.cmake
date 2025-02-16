# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QtDz_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QtDz_autogen.dir\\ParseCache.txt"
  "QtDz_autogen"
  )
endif()
