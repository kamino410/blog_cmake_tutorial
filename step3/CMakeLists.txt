cmake_minimum_required(VERSION 3.1)
set(MY_VARIABLE_A hogehoge)
set(MY_VARIABLE_B ${MY_VARIABLE_A} CACHE STRING "Test for cache variable")
message(STATUS "MY_VARIABLE_A : ${MY_VARIABLE_A}")
message(STATUS "MY_VARIABLE_B : ${MY_VARIABLE_B}")
if("${MY_VARIABLE_B}" MATCHES "^fuga")
  message("MY_VARIABLE_B starts with 'fuga'")
endif()

