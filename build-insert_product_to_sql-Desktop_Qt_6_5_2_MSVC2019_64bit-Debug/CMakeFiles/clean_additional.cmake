# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\insertToSql_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\insertToSql_autogen.dir\\ParseCache.txt"
  "insertToSql_autogen"
  )
endif()
