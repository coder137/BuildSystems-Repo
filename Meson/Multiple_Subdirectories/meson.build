project('multiple_subdirectories', 'c')

# subdirectory
subdir('foo')
subdir('bar')

# SRCS
sources = ['main.c'] + foo_srcs + bar_srcs

# Summation of two include directories
# https://github.com/mesonbuild/meson/issues/5748
inc_dir = [foo_dirs] + [bar_dirs]

executable('multiple_subdirectories', sources, include_directories : inc_dir)
