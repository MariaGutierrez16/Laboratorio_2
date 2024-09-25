# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\pruebas_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\pruebas_autogen.dir\\ParseCache.txt"
  "pruebas_autogen"
  )
endif()
