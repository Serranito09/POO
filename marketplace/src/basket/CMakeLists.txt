add_library(basket basket.cc basket.h)
target_link_libraries(basket PUBLIC product tv computer)
target_include_directories(basket PUBLIC
 ${CMAKE_CURRENT_LIST_DIR}
${PROJECT_SOURCE_DIR}/src/product)

add_executable(basket_main basket_main.cc)
target_link_libraries(basket_main basket product tv computer)
