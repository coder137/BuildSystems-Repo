- [Adding Build Options](#adding-build-options)
  - [Adding your build options](#adding-your-build-options)
  - [Check build options](#check-build-options)
  - [Configuring your build options](#configuring-your-build-options)
  - [Compile your program to see meson options](#compile-your-program-to-see-meson-options)

# Adding Build Options

Adding user related build options

## Adding your build options

[Read the official documentation](https://mesonbuild.com/Build-options.html)

## Check build options

```
meson configure
```

Here you can even see the user defined build options inside `meson_options.txt`

## Configuring your build options

```
meson configure -D <key>=<value> <your_build_directory>

# Example
meson configure -D string_op=test builddir
```

## Compile your program to see meson options

```
meson compile -C builddir
```

If reconfigured earlier this should rebuild the project
