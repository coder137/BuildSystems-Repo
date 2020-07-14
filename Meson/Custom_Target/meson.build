project('custom_target_example', 'cpp')
all_target = executable('custom_target_example', 'main.cpp')

# Run Target is used to run an executable, script or meson target
# This will only run once all_target is built above
run_target('run', command: [all_target, 'second_argument'], depends: all_target)

# Used to generate input and output files
custom_target('compile_test',
  output: 'main.exe',
  input: 'main.cpp',
  command: ['g++', '@INPUT@', '-o', '@OUTPUT@'],
  build_by_default: true
)
