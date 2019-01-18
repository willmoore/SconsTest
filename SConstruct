
env = Environment()
debug = ARGUMENTS.get('debug', False)

if debug == "true":
    env.Append(CCFLAGS = '-g')

env.Append(CXXFLAGS = '-std=c++11')
env.Append(CXXFLAGS = '-ftemplate-depth=1024000')

env.Program('main.cpp', LIBS=['SomeLibrary'], LIBPATH='.')

env.Library('SomeLibrary', ['Looper.cpp'])
