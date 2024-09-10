# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "MinSizeRel")
  file(REMOVE_RECURSE
  "CMakeFiles\\dataRec_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\dataRec_autogen.dir\\ParseCache.txt"
  "dataRec_autogen"
  )
endif()
