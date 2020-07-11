project('multiple_files', 'c')
incdir = include_directories('foo')
srcs = ['main.c', 'foo/foo.c']
message('sources: ', srcs)
executable('multiple_files', srcs, include_directories : incdir)
