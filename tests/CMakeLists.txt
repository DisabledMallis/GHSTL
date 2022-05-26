add_executable(tests)
target_sources(tests PRIVATE
	"tests.cpp"
)
target_link_libraries(tests PRIVATE ghstl)